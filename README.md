# Classes and Objects (C++)
![C++](https://img.shields.io/badge/C++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![Qt](https://img.shields.io/badge/Qt-%23217346.svg?style=for-the-badge&logo=Qt&logoColor=white)
  
The goal is to practice **defining classes**, **creating objects**, and **splitting code into .h and .cpp files**, as well as using **stack memory, heap memory, and smart pointers**.

---

## Project Structure
```
h2a/
│
├── car.h
├── car.cpp
├── rectangle.h
├── rectangle.cpp
├── student.h
├── student.cpp
└── main.cpp
```
---

## Car Class

### Member Variables
- `brand`: the car brand (string)
- `model`: the car model (string)
- `yearModel`: the year of manufacture (int)

### Methods
- `setBrand(string)`
- `setModel(string)`
- `setYearModel(int)`
- `printData()`: prints the car’s information

**Example usage:**
```cpp
Car car1;
car1.setBrand("Toyota");
car1.setModel("Corolla");
car1.setYearModel(2020);
car1.printData();
```
## Rectangle Class
### Member Variables
- `width`: rectangle width (double)
- `height`: rectangle height (double)
### Methods
- `setWidth(double)`
- `setHeight(double)`
- `getArea()`: returns the area (`width * height`)
- `getCircum()`: returns the circumference (`2 * (width + height)`)

**Example usage:**
```cpp
Rectangle *rect = new Rectangle();
rect->setWidth(4.5);
rect->setHeight(3.2);
cout << rect->getArea() << endl;
cout << rect->getCircum() << endl;
delete rect;
```
## Student Class
### Member variables
- `name`: student’s name (string)
- `studentNumber`: student ID number (int)
- `average`: grade average (double)
### Methods
- Setters: `setName`, `setStudentNumber`, `setAverage`
- Getters: `getName`, `getStudentNumber`, `getAverage`

**Example usage (using a smart pointer):**
```cpp
unique_ptr<Student> stu = make_unique<Student>();
stu->setName("Matti Meikäläinen");
stu->setStudentNumber(12345);
stu->setAverage(4.1);

cout << stu->getName() << endl;
cout << stu->getStudentNumber() << endl;
cout << stu->getAverage() << endl;
```
## main.cpp
The main program tests all three classes.<br>
It also includes UTF-8 support for printing special characters (ä, ö, etc.) on Windows and Linux.<br>
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white) ![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
## Building and Running
### In Qt Creator
1. Create a new Console Application project named h2a.
2. Add all .h and .cpp files to the project.
3. Ensure all files are saved with UTF-8 encoding (Edit → Select Encoding → UTF-8).
4. Build and run the project.
### Example Output
```yaml
--- Car test ---
Car brand: Toyota, model: Corolla, year: 2020

--- Rectangle test ---
Area: 14.4
Circumference: 15.4

--- Student test ---
Name: Matti Meikäläinen
Student number: 12345
Average: 4.1
```
