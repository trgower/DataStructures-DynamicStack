/*

  Tanner Gower
  10/10/2016
  Project 4: Dynamic Stack

*/

#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"

class StudentList
{

  private:
    class StudentNode {
      public:
        Student student;
        StudentNode* next;
    };

    StudentNode *head;

  public:
    StudentList();
    ~StudentList();

    void AppendNode(Student);
    void PrintElements();

};

#endif
