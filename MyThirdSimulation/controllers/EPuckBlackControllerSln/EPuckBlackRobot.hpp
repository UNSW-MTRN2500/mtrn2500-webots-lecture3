// File:          EPuckBlackRobot.hpp
// Date:          XX/XX/XXXX
// Description:   Example in Lecture W.3
// Author:        Leo Wu
// Modifications:

#pragma once

#include "EPuckRobot.hpp"

class EPuckBlackRobot : public EPuckRobot {
public:
  enum class State {roam, backward};
  EPuckBlackRobot();
  void run();
protected:
  void backward();
private:
  State mState {};
};