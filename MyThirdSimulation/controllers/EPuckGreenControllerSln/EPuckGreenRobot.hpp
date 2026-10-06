// File:          EPuckGreenRobot.hpp
// Date:          XX/XX/XXXX
// Description:   Example in Lecture W.3
// Author:        Leo Wu
// Modifications:

#pragma once

#include "EPuckRobot.hpp"

#include <webots/Keyboard.hpp>

class EPuckGreenRobot : public EPuckRobot {
public:
  EPuckGreenRobot();
  void run();

protected:
  void display() const;
  void turn();

private:
  webots::Keyboard* mKeyboard {};
};