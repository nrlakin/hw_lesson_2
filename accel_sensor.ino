#include <Arduino.h>
#include "accel_sensor.h"

void initAccelSensor(void) {
  Wire.begin();
  Wire.beginTransmission(ACCEL_ADDRESS);
  Wire.write(0x20);
  Wire.write(0x47);    // enable all axes, set to 50Hz sample rate
  Wire.endTransmission(true);
}

void readAccelSensor(accel_data_t * result) {
  Wire.beginTransmission(ACCEL_ADDRESS);
  Wire.write(0xA8);
  Wire.endTransmission(false);
  Wire.requestFrom(ACCEL_ADDRESS, 6);
  result->accel_X = (int)Wire.read();
  result->accel_X |= ((int)Wire.read())<<8;
  result->accel_Y = (int)Wire.read();
  result->accel_Y |= ((int)Wire.read())<<8;
  result->accel_Z = (int)Wire.read();
  result->accel_Z |= ((int)Wire.read())<<8;
  Wire.endTransmission(true);
}
