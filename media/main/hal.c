/* GPIO Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>

//#include "driver/sdmmc_host.h"
//#include "driver/sdmmc_defs.h"
#include "hal_i2c.h"
#include "hal_i2s.h"
#include "wm8978.h"

#include "hal.h"

#define GPIO_OUTPUT_IO_0    5
#define GPIO_OUTPUT_PIN_SEL  ((1<<GPIO_OUTPUT_IO_0))

void init_io(void)
{
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_PIN_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = GPIO_OUTPUT_PIN_SEL;
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);
    gpio_set_level(GPIO_OUTPUT_IO_0, 0);    
}

void init_wm8978(void)
{
    hal_i2c_init(0,19,18);
    hal_i2s_init(0,48000,16,2);
    WM8978_Init();
    WM8978_ADDA_Cfg(1,1); 
    WM8978_Input_Cfg(1,0,0);     
    WM8978_Output_Cfg(1,0); 
    WM8978_MIC_Gain(25);
    WM8978_AUX_Gain(10);
    WM8978_LINEIN_Gain(0);
    WM8978_SPKvol_Set(50);
    WM8978_HPvol_Set(50,50);
    WM8978_EQ_3D_Dir(0);
    WM8978_EQ1_Set(0,24);
    WM8978_EQ2_Set(0,24);
    WM8978_EQ3_Set(0,24);
    WM8978_EQ4_Set(0,24);
    WM8978_EQ5_Set(0,24);
}
