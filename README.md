# blufi-basic

This is the `examples/bluetooth/blufi` from esp32 toolchain modified to be standalone task, so you can just
start it and not bother anymore. You can then configure the WiFi on the board via this app: https://play.google.com/store/apps/details?id=com.espressif.espblufi

```cpp
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
```