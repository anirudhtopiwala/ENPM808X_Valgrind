//Copyright 2018 Anirudh Topiwala
/**
* @file    main.cpp
* @author  Anirudh Topiwala (anirudhtopiwala)
* @date    10/03/2018
* @version 1.0
*
* @brief   main.cpp 
*
* @section DESCRIPTION
*
* This program used AnalogSensor class and its method to read a sensor value.
*/
#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
