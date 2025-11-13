#include "Car.h"
#include <iostream>
using namespace std;

void Car::setBrand(string b) {
    brand = b;
}

void Car::setModel(string m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}

void Car::printData() const {
    cout << "Car brand: " << brand
         << ", model: " << model
         << ", year: " << yearModel << endl;
}
