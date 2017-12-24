//
// Created by yanterentev on 24.12.2017.
//

#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H
#include "Person.h"
class Student: public Person {
public:
    Student();
    void getdata();
    void putdata();
private:
    int marks[6];
    int cur_id;
};


#endif //UNTITLED_STUDENT_H
