#include "gpio.h"

#include <time.h>
#include <stdlib.h>

uint8_t random_num(){
  static bool initialised = false;

  if(!initialised) {
    srand(time(NULL));
    initialised = true;  
  }

  return rand();
}

status_t gpio_init(gpio_pin_t* pin){
  status_t status = ERR;

  if(!pin->initialised) {
    pin->initialised = 1;
    status = OK;
  }

  return status;
}

status_t gpio_write(gpio_pin_t* pin, uint8_t value){
  if(!pin->initialised) return ERR;
  if(pin->direction == GPIO_INPUT) return ERR;

  uint8_t n = random_num();
  status_t status = ERR;

  if(n < 50){
    status = ERR;
  } else {
    pin->value = value;
    status = OK;
  }

  return status;


  pin->value = value;
  return OK;
}

uint8_t gpio_read(gpio_pin_t* pin){
  if(!pin->initialised) return ERR;
  if(pin->direction == GPIO_OUTPUT) return ERR;

  return random_num();
}

status_t gpio_set_dir(gpio_pin_t* pin, GPIO_DIR dir){
  if(!pin->initialised) return ERR;

  pin->direction = dir;
  return OK;
}