#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    double average;

public:
    // Setterit
    void setName(const string &n);
    void setStudentNumber(int num);
    void setAverage(double avg);

    // Getterit
    string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};

#endif // STUDENT_H
