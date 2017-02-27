/*

  Tanner Gower
  10/10/2016
  Project 4: Dynamic Stack

*/

#ifndef STUDENTSTACK_H
#define STUDENTSTACK_H

#include "Student.h"

class StudentStack
{
  private:
    class StudentNode {
      public:
        Student student;
        StudentNode* next;
    };

    StudentNode *top;

  public:
    StudentStack();
    ~StudentStack();

    void push(Student);
    Student pop();
    bool isEmpty() const;
};

#endif // STUDENTSTACK_H
