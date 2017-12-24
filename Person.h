//
// Created by yanterentev on 24.12.2017.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>

class Person {

public:
    virtual void getdata();
    virtual void putdata() = 0;

protected:
    std :: string name;
    int age;
};

#endif //UNTITLED_PERSON_H
