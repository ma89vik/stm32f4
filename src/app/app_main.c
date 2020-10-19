#include "app_main.h"


#include "gpio.h"
#include "app_uart.h"
#include "led.h"
#include "fw_header.h"
#include "usart.h"
#include "board.h"
#include "printf.h"
#include "log.h"

extern uint32_t _vector_table;

static const fw_hdr_t  __attribute__((section(".fw_hdr"), used)) FW_HEADER = {
    .fw_magic = FW_MAGIC_NUMBER,
    .fw_hdr_version = FW_HEADER_VERSION,
    .fw_type = FW_TYPE_APP,
    .version_major = 0,
    .version_minor = 1,
    .version_patch = 0,
    .vector_addr = (uint32_t)&_vector_table,
    .git_sha = GIT_SHA, //defined by cmake
};


void test(void *p)
{



    while(1) {

    }

}

void app_main()
{


    led_set(LED_BLUE, 1);


    log_config_t log_cfg = {
        .uart_handle = &huart2,
    };

    log_init(&log_cfg);

    app_uart_handle_t gps_uart_handle;
    app_uart_init(&gps_uart_handle, &huart3, true, false);  

    LOG_INFO("App started\n");

    int i = 0;
    char buf;
    while(1)
    {
        i++;
        HAL_Delay(1000);
        LOG_ERROR("HELLO WORLD %d\n", i);
        LOG_ERROR("GPS uart %c\n", gps_uart_handle.inbox[0]);

    }
}