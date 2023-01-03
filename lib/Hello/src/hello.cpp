#include <iostream>

#include <hello.h>

// @brief Creates a new instance of the Car.
//
// @param engine - the engine to use for this Car.
// @param color - the color of this Car.
void greet(std::string name)
{
    std::cout << "Hello, " << name << "!\n";
}
