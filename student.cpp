#include "Student.h"

void Student::setName(const string &n) {
    name = n;
}

void Student::setStudentNumber(int num) {
    studentNumber = num;
}

void Student::setAverage(double avg) {
    average = avg;
}

string Student::getName() const {
    return name;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

double Student::getAverage() const {
    return average;
}
