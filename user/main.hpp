#pragma once
#include <array>
extern "C"


class TEST_CPP {
public:
  TEST_CPP();

public:
  float time;
  std::array<float, 6> body_link_inertia;
  void set_robot_vel(const float dt)
  {
    time += dt;
  }
private:
  float leg_length_max;
  float leg_length_min;
  
};
