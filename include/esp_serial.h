#ifndef __ESP_SERIAL_H
#define __ESP_SERIAL_H

#include <esp_err.h>

extern int SERIAL_SIZE;
esp_err_t get_serial_string(char serial[]);

#endif
