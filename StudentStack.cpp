/*

  Tanner Gower
  10/10/2016
  Project 4: Dynamic Stack

*/

#include <iostream>
#include <cstdlib>
#include "StudentStack.h"

using namespace std;

StudentStack::StudentStack()
{
  top = NULL;
}

StudentStack::~StudentStack()
{
  StudentNode *curr;
  StudentNode *next;

  curr = top;

  while (curr != NULL) {
    next = curr->next;
    delete curr;
    curr = next;
  }
}

void StudentStack::push(Student s)
{
  StudentNode* newNode = new StudentNode;
  newNode->student = s;

  if (isEmpty()) {
    newNode->next = NULL;
    top = newNode;
  } else {
    newNode->next = top;
    top = newNode;
  }
}

Student StudentStack::pop()
{
  if (!isEmpty()) {
    Student r = top->student;
    StudentNode* oldTop = top;
    top = top->next;
    delete oldTop;
    return r;
  } else {
    cout << "Stack is empty!" << endl;
  }
}

bool StudentStack::isEmpty() const
{
  return top == NULL;
}
