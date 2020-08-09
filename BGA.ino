#include "DIO.h"

void setup() {
  // put your setup code here, to run once:
   DIO_init(&Dio_configurationC);

}

void loop() {
  // put your main code here, to run repeatedly:
 DIO_Write(GPIOC,PIN2,HIGH);
}
