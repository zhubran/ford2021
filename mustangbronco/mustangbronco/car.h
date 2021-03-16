#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    void car_output(int input, std::ostream& os) {
        if (!(input % 3) && !(input % 5)) {
            os << "MustangBronco\n";
        }
        else if (!(input % 3)) {
            os << "Mustang\n";
        }
        else if (!(input % 5)) {
            os << "Bronco\n";
        }
        else {
            os << input << endl;
        }
    }
};