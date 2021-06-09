/**
   This is main file dispatch freeRTOS
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/timers.h"
#include "freertos/queue.h"
#include "freertos/event_groups.h"
#include "freertos/xtensa_api.h"
#include "freertos/FreeRTOSConfig.h"

#include "nvs.h"
#include "nvs_flash.h"
#include "esp_system.h"
#include "esp_log.h"

#include "bt.h"
#include "web.h"
#include "hal.h"
#include "decode.h"

TimerHandle_t tmr;
TaskHandle_t Handle;

/**
 * @brief     handler for the dispatched work
 */
#define  INIT_STACK_SIZE	8192
#define  INIT_PRIORITY 		10   

void init_task(void)
{
    // Initialize NVS.
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES) 
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK( ret );    
    init_io();
	init_wm8978();	
}

/**
 * @brief    main()
 */
 
void app_main()
{
	init_task();
	init_wifi();

	//decode_task();
	//xEventGroupWaitBits(station_event_group,STA_GOTIP_BIT,pdTRUE,pdTRUE,portMAX_DELAY);
	
	//xTaskCreate(init_task, "init_task", INIT_STACK_SIZE, NULL, INIT_PRIORITY, NULL);  
	//vTaskDelete(NULL);	//NULL表示删除当前任务

    //xTaskCreate(web_task, "web_task", WEB_STACK_SIZE, NULL, WEB_PRIORITY, NULL);  
    //xTaskCreate(decode_task, "decode_task", DECODE_STACK_SIZE, NULL, DECODE_PRIORITY, NULL);  
	init_web();

	//bt_task();
	//web_task();
}


