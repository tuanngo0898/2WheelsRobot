/*
 * Params.h
 *
 *  Created on: Oct 12, 2019
 *      Author: 16138
 */

#ifndef USERCODE_PARAMS_PARAMS_H_
#define USERCODE_PARAMS_PARAMS_H_

#include <stdint.h>
#include "UserCode/PID/PID.h"

typedef struct{
	pid_params_t pid_whe0;
	pid_params_t pid_whe1;
	pid_params_t pid_sync;

	float believe_in_gyro;
	float angle_ajusted; // Calibrated vertical angle in earth frame
	int32_t gx_offset;
	int32_t gy_offset;
	int32_t gz_offset;
	bool motor0_invert;
	bool motor1_invert;
	bool encoder0_invert;
	bool encoder1_invert;
	bool encoder_exchange;
}params_t;

extern params_t params;

void params_save();
bool params_load();

#endif /* USERCODE_PARAMS_PARAMS_H_ */
