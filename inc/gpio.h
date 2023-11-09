#pragma once

#include<stdint.h>
#include<stdbool.h>  

typedef enum {
  GPIO_INPUT,
  GPIO_OUTPUT
} GPIO_DIR;

typedef struct {
  uint8_t pin_num;
  bool initialised;
  uint8_t value;
  GPIO_DIR direction;
} gpio_pin_t;

typedef enum {
  OK,
  ERR
} status_t;

status_t gpio_init(gpio_pin_t* pin);
status_t gpio_set_dir(gpio_pin_t* pin, GPIO_DIR dir);
uint8_t gpio_read(gpio_pin_t* pin);
status_t gpio_write(gpio_pin_t* pin, uint8_t value);