#include <esp_log.h>
#include <esp_system.h>
#include "esp_serial.h"

static const char* TAG = "main";

void app_main() {
	char serial[SERIAL_SIZE];
	esp_err_t err = get_serial_string(serial);
	if (err != ESP_OK) {
		ESP_LOGE(TAG, "Error %d while fetching serial number.", err);
		return;
	}
	ESP_LOGI(TAG, "The device serial number is %s.", serial);
}
