/* GPIO Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>

#include <sys/socket.h>

//#include "freertos/FreeRTOS.h"
//#include "freertos/task.h"
//#include "freertos/queue.h"
//#include "freertos/event_groups.h"

#include "driver/sdmmc_host.h"
#include "driver/sdmmc_defs.h"

#include "esp_vfs_fat.h"

#include "sdmmc_cmd.h"
#include "esp_event_loop.h"
#include "esp_log.h"

#include "nvs.h"
#include "nvs_flash.h"
#include "eth.h"
#include "event.h"
#include "wifi.h"

#include "webserver.h"
#include "http.h"
#include "cJSON.h"
#include "audio.h"

#include "esp_heap_caps.h"
#include "euler.h"
#include "websocket.h"
#include "spiram_fifo.h"

#include "decode.h"
#include "web.h"
#include "hal.h"

#define TAG    "WEB_TASK"
#define url 	"http://icecast.omroep.nl/3fm-sb-mp3" 

/**
 * @brief     handler for the dispatched work
 */
 
static int header_value_callback(http_parser* a, const char *at, size_t length){
	for(int i=0;i<length;i++)
		putchar(at[i]);
	return 0;
}
/**
 * @brief     handler for the dispatched work
 */
 
static int body_callback(http_parser* a, const char *at, size_t length){
    // static uint32_t cnt=0;
    // printf("cnt:%d\n",cnt++);
    spiRamFifoWrite(at,length);
    return 0;
}
/**
 * @brief     handler for the dispatched work
 */
 
static int body_done_callback (http_parser* a){
  	ESP_LOGI(TAG,"body done");
    return 0;
}
/**
 * @brief     handler for the dispatched work
 */
 
static int begin_callback (http_parser* a){
  	ESP_LOGI(TAG,"message begin");
    return 0;
}
/**
 * @brief     handler for the dispatched work
 */
 
static int header_complete_callback(http_parser* a){
	ESP_LOGI(TAG,"header completed");
    return 0;
}

/**
 * @brief     handler for the dispatched work
 */

static http_parser_settings settings =
{
   .on_message_begin = begin_callback
    ,.on_header_field = 0
    ,.on_header_value = header_value_callback
    ,.on_url = 0
    ,.on_status = 0
    ,.on_body = body_callback
    ,.on_headers_complete = header_complete_callback
    ,.on_message_complete = body_done_callback
    ,.on_chunk_header = 0
    ,.on_chunk_complete = 0
};

/**
 * @brief    init wifi settings
 */
 
void init_wifi(void)
{
	event_engine_init();    
    nvs_flash_init();
    tcpip_adapter_init();
    wifi_init_sta("OZ-FQ","driveChange");
}

/**
 * @brief     handler for the dispatched work
 */
 
void init_web(void)
{
    spiRamFifoInit();
    /*print the last ram*/
    size_t free8start = heap_caps_get_free_size(MALLOC_CAP_8BIT);
    size_t free32start = heap_caps_get_free_size(MALLOC_CAP_32BIT);
    ESP_LOGI(TAG,"free mem8bit: %d mem32bit: %d\n",free8start,free32start);
    xTaskCreate(decode_task, "decode_task", 8192, NULL, 5, NULL);
    //start a http requet
    http_client_get("http://icecast.omroep.nl/3fm-sb-mp3", &settings, NULL);
    ESP_LOGE(TAG,"get completed!");

    vTaskDelete(NULL);
}

/**
 * @brief  web_task function 
 */

void web_task(void *pvParameters)
{
	init_wifi();
	init_web();
    //while(1) 
    //{
		
	//}
    vTaskDelete(NULL);
}
