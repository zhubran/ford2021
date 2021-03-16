// mustangbronco.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "car.h"
using namespace std;
int main()
{
    cout << "Welcome to the MagiCar show!\nInput the right integer"
        " number and you could win a car!\n";
    int input;
    cout << "Input here: ";
    cin >> input;
    Car car;
    car.car_output(input,std::cout);
}