// File:          EPuckBlackRobot.hpp
// Date:          XX/XX/XXXX
// Description:   Example in Lecture W.3
// Author:        Leo Wu
// Modifications:

#pragma once

#include "EPuckRobot.hpp"

class EPuckBlackRobot : public EPuckRobot {
public:
  enum class State {backward, roam};
  EPuckBlackRobot() = default;
  void run();
protected:
  void backward();
private:
  State mState {State::roam};
};