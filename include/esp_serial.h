#ifndef __ESP_SERIAL_H
#define __ESP_SERIAL_H

#include <esp_err.h>

#define SERIAL_SIZE 13

esp_err_t get_serial_string(char serial[]);

#endif
