/*

  Tanner Gower
  10/10/2016
  Project 4: Dynamic Stack

*/

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include "Student.h"

using namespace std;

Student::Student()
{
  id = rand() % 10000;
  name = "John Doe";
  address = "123 Address Line, San Marcos, TX 78666";

  // Generate random grades, nobody gets below a 60
  grades = new int[10];
  double total = 0.0;
  for (int i = 0; i < 10; i++) {
    grades[i] = (rand() % 40) + 60;
    total += grades[i];
  }

  gpa = (total / 10) / 25.0;
}

Student::~Student()
{
  //delete [] grades;
  // caused errors?
}

void Student::setId(int newId) { id = newId; }
void Student::setName(string newName) { name = newName; }
void Student::setAddress(string newAddress) { address = newAddress; }
void Student::setGpa(double newGpa) { gpa = newGpa; }

int Student::getId() { return id; }
string Student::getName() { return name; }
string Student::getAddress() { return address; }
double Student::getGpa() { return gpa; }
string Student::toString() {
  stringstream ss;
  ss << id << ", " << name << ", " << address << ", " << gpa;
  return ss.str();
}
