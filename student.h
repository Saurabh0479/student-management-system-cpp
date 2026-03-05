#ifndef STUDENT_H
#define STUDENT_H

#include <bits/stdc++.h>
using namespace std;

struct student{
    int id;
    int age;
    string phone_number;
    string name;
    string course;
    string address;
};
void addStudents();
void viewStudents();

#endif