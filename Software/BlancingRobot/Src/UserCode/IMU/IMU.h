/*
 * IMU.h
 *
 *  Created on: Oct 9, 2019
 *      Author: 16138
 */

#ifndef USERCODE_IMU_IMU_H_
#define USERCODE_IMU_IMU_H_

#include <stdbool.h>
#include "UserCode/Timer/timer.h"
#include "UserCode/MPU6050/MPU6050.h"

typedef void (*connection_failed_cb_t)(void);

bool  IMU_init(void);
float IMU_get_roll(void);
float IMU_get_pitch(void);
void  IMU_set_failed_cb(connection_failed_cb_t connection_failed_cb);


#endif /* USERCODE_IMU_IMU_H_ */