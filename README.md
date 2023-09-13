# Hall Effect Sensor Glove Controlled Robot Arm
## Overview

This project demonstrates the control of a robot arm using a Hall effect sensor glove. The glove is equipped with Hall effect sensors on each finger to detect finger movement. The readings from these sensors are used to control corresponding servo motors on the robot arm, enabling precise and intuitive control of the arm's movements.

## Table of Contents

* [Hardware Components](#hardware-components)
* [Software Requirements](#software-requirements)
* [Setup](#setup)
* [Usage](#usage)

## Hardware Components

To replicate this project, you will need the following hardware components:

- An Arduino board (e.g., Arduino Uno)
- A Hall effect sensor glove with sensors on each finger
- Servo motors for each joint of the robot arm
- Jumper wires
- Power supply for the servo motors
- A robot arm with joints and servos (the number of servos may vary based on your robot arm)

## Software Requirements

- Arduino IDE for uploading code to the Arduino board.
- The Servo library for Arduino.

## Setup

Connect the Hall effect sensors to the Arduino board using jumper wires. Make sure to connect each sensor's output to a digital pin on the Arduino (e.g., pins 8-12).

Connect the servo motors to the Arduino board using jumper wires or appropriate connectors. Ensure that each servo is connected to the correct pin on the Arduino (e.g., pins 2-6).

Provide power to the servo motors from an external power supply, if necessary, to ensure they have sufficient power to operate.

Open the Arduino IDE, import the project, and upload the code to the Arduino board.

## Usage

Wear the Hall effect sensor glove on your hand, ensuring that each sensor is positioned on a finger.
    
Power on the Arduino board.

The glove's sensors will detect your finger movements and control the corresponding servo motors on the robot arm. For
example, bending your thumb can control the thumb servo, and bending your index finger can control the index servo.

Experiment with different finger movements to control the robot arm's various joints.
