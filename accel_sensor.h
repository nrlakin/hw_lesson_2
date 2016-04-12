#ifndef _ACCEL_SENSOR_H_
#define _ACCEL_SENSOR_H_

#define ACCEL_ADDRESS 0x18

typedef struct {
  int accel_X;
  int accel_Y;
  int accel_Z;
} accel_data_t;

void initAccelSensor(void);
void readAccelSensor(accel_data_t * result);

#endif

