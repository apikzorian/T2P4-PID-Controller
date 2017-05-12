#include "PID.h"
#include <vector>
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

 /*
 * Initialize PID.
 */

void PID::Init(double p, double i, double d) {
	Kp = p; // proportional gain
	Ki = i; // integral gain
	Kd = d; // derivative gain

	p_error = 0.0; // proportional error
	i_error = 0.0; // integral error
	d_error = 0.0; // derivative of error
}

void PID::UpdateError(double cte) {

	// store difference between current and previous error
	d_error = cte - p_error;

	p_error = cte;

	// store sum of cte
	i_error += cte;
}

double PID::TotalError() {

	return -Kp * p_error + -Kd * d_error + -Ki * i_error;
}

