//
// Created by yanterentev on 24.12.2017.
//

#include "Student.h"
#include <iostream>

void Student :: getdata() {
    std :: cout << "write name and age: ";
    std :: cin >> this->name >> this->age;
    std :: cout << "\n" << "write marks: ";
    for (int &mark : this->marks) {
        std :: cin >> mark;
    }
}

void Student :: putdata() {
    int sum = 0;
    for (int mark : marks) {
        sum += mark;
    }
    std :: cout << "name: " << name << " ,age: " << age << " ,sum of your marks: " << sum << " ,cur_id: " << cur_id;
}

Student :: Student() {
    static int counter = 1;
    cur_id = counter;
    counter++;
}
