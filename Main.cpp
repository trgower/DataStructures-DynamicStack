/*

  Tanner Gower
  10/10/2016
  Project 4: Dynamic Stack

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "StudentStack.h"
#include "StudentList.h"

using namespace std;

const int kNumStudents = 15;

int main ()
{
  StudentList list;
  StudentStack stack;

  srand(time(0));
  for (int i = 0; i < kNumStudents; i++) {
    Student s;
    list.AppendNode(s);
    stack.push(s);
  }
  cout << "----------LINKED LIST ELEMENTS----------" << endl;
  list.PrintElements();
  cout << endl;

  cout << "----------POPPED ELEMENTS----------" << endl;
  for (int i = 0; i < 5; i++)
    cout << stack.pop().toString() << endl;
  cout << endl;

  cout << "------REMAINING ELEMENTS STARTING AT TOP OF STACK------" << endl;
  cout << stack.pop().toString() << " (top)" << endl;
  while (!stack.isEmpty()) {
    cout << stack.pop().toString() << endl;
  }

  return 0;
}
