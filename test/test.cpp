/**
* Copyright 2018 Anirudh Topiwala
*
* @file    test.cpp
* @author  Anirudh Topiwala (anirudhtopiwala)
* @date    10/03/2018
* @version 1.0
*
* @brief    AnalogSensor test .
*
* @section DESCRIPTION
*
* This is a test for AnalogSensor class and its method Read() .
*/
#include <gtest/gtest.h>
#include"AnalogSensor.hpp"
/**
*@brief Test checks if the Read() method outputs the right value or not.
*/
AnalogSensor test(10);
TEST(AnalogSensorTest, Read_Test) {
  EXPECT_EQ(10, test.Read());
}