/*
 * DIO_config.c
 *
 * Created: 17/02/2020 03:53:11 م
 *  Author: mo
 */

#include "DIO_config.h"

DIO_Cfg_s Dio_configurationB= {
  GPIOB,
  BIT2,
  OUTPUT
};

DIO_Cfg_s Dio_configurationC= {
  GPIOC,
  BIT2,
  OUTPUT
};

DIO_Cfg_s Dio_configurationD= {
  GPIOD,
  UPPER_NIBBLE,
  OUTPUT
};
