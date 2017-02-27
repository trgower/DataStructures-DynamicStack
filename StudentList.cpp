/*

  Tanner Gower
  10/10/2016
  Project 4: Dynamic Stack

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "StudentList.h"

using namespace std;

StudentList::StudentList()
{
  head = NULL;
}

StudentList::~StudentList()
{
  // destroy stuff
}

void StudentList::AppendNode(Student newStudent)
{
  StudentNode* newNode = new StudentNode;
  newNode->student = newStudent;
  newNode->next = NULL;
  if (!head) { // list is empty, point head to newNode
    head = newNode;
  } else {
    StudentNode* curr; // node used to traverse the list
    curr = head;
    while (curr->next) // move curr to the last node in list
      curr = curr->next;

    curr->next = newNode; // append to end of list
  }
}

void StudentList::PrintElements()
{
  StudentNode* curr = head;
  while (curr) {
    cout << curr->student.toString() << endl;
    curr = curr->next;
  }
}
