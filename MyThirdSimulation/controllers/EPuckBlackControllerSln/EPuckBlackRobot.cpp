// File:          EPuckBlackRobot.cpp
// Date:          XX/XX/XXXX
// Description:   Example in Lecture W.3
// Author:        Leo Wu
// Modifications:

#include "EPuckBlackRobot.hpp"

#include <iostream>
#include <string>

EPuckBlackRobot::EPuckBlackRobot()
  : mState {State::roam} 
  {
}

void EPuckBlackRobot::backward() {
  const double speedScale {0.5};
  mLeftSpeed = -speedScale * MAX_SPEED;
  mRightSpeed = -speedScale * MAX_SPEED;
  mLeftMotor->setVelocity(mLeftSpeed);
  mRightMotor->setVelocity(mRightSpeed);  
}

void EPuckBlackRobot::run() {
  while(step(TIME_STEP) != -1) {
    // std::cout << receiveMessage() << std::endl;
    std::string msg {receiveMessage()};
    if(msg == "Backward") {
      mState = State::backward;
    } else if(msg == "Roam") {
      mState = State::roam;
    }
    
    if(mState == State::backward) {
      backward();
    } else if(mState == State::roam){
      roam();
    }
  }
}