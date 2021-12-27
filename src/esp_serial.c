#include "esp_system.h"

const int SERIAL_SIZE = 13;

esp_err_t get_serial_string(char serial[]) {
	if (serial == NULL) {
		return ESP_ERR_INVALID_ARG;
	}

	uint8_t mac_address[6];
	const esp_err_t err = esp_base_mac_addr_get(mac_address);
	if (err != ESP_OK) {
		return err;
	}
	snprintf(serial, SERIAL_SIZE, "%02x%02x%02x%02x%02x%02x", mac_address[0], mac_address[1], mac_address[2], mac_address[3], mac_address[4], mac_address[5]);
	return err;
}
