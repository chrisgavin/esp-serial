#include <esp_log.h>
#include "esp_serial.h"
#include <esp_system.h>

static const char* TAG = "main";

void app_main() {
	char serial[SERIAL_SIZE];
	ESP_ERROR_CHECK(get_serial_string(serial));
	ESP_LOGI(TAG, "The device serial number is %s.", serial);
}
