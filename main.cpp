#include <iostream>
#include <memory> // Smart pointereita varten
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"
using namespace std;

int main() {
    // Vaihdetaan Windowsin konsolin merkistö UTF-8:ksi, jotta ääkköset näkyvät oikein
    system("chcp 65001 > nul");

    cout << "--- Car test ---" << endl;
    Car car1;
    car1.setBrand("Toyota");
    car1.setModel("Corolla");
    car1.setYearModel(2020);
    car1.printData();

    cout << "\n--- Rectangle test ---" << endl;
    Rectangle *rect = new Rectangle();
    rect->setWidth(4.5);
    rect->setHeight(3.2);
    cout << "Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;
    delete rect; // Tuhotaan olio

    cout << "\n--- Student test ---" << endl;
    unique_ptr<Student> stu = make_unique<Student>();
    stu->setName("Matti Meikäläinen");
    stu->setStudentNumber(12345);
    stu->setAverage(4.1);

    cout << "Name: " << stu->getName() << endl;
    cout << "Student number: " << stu->getStudentNumber() << endl;
    cout << "Average: " << stu->getAverage() << endl;

    return 0;
}
