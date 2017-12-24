//
// Created by yanterentev on 24.12.2017.
//

#ifndef UNTITLED_PROFESSOR_H
#define UNTITLED_PROFESSOR_H
#include "Person.h"
class Professor: public Person {

public:
    Professor();
    void getdata();
    void putdata();

private:
    int cur_id;
    int publications;
};


#endif //UNTITLED_PROFESSOR_H
