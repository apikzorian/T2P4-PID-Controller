#ifndef PID_H
#define PID_H

#include <iostream>
#include <vector>

using namespace std;

class PID {
public:
  /*
  * Errors
  */
  double p_error; // previous cte
  double i_error;
  double d_error;

  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;


  std::vector<double> shift_angles;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double p, double i, double d);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();


};

#endif /* PID_H */
