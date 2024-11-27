#pragma once
#include <array>
#include "math.h"
extern "C"


class TEST_CPP {


public:
  float time;
  float sin_wave;
  std::array<float, 6> body_link_inertia;
  bool set_robot_vel(float dt)
  {
    time += dt;
    sin_wave = sin(1.0 * time);
    if(abs(1.0 - abs(sin_wave)) < 0.000001)
      return 1;
    else
      return 0;
  }
private:
  float leg_length_max;
  float leg_length_min;
  
};
