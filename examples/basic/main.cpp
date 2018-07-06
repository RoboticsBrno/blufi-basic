
#include <string.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_system.h>

#include "blufi.h"

extern "C" void app_main() {
    blufi_init("Device");

    printf("Hello world!\n");

    while(true) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}