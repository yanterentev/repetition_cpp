//
// Created by yanterentev on 24.12.2017.
//

#include "Professor.h"
#include <iostream>
void Professor :: getdata() {
    std :: cout << "write a name, age and publications: ";
    std :: cin >> this->name >> this->age >> publications;
}

void Professor :: putdata() {
    std :: cout << "name: " << name << " ,age: " << age << " ,publications: " << publications;
}

Professor::Professor() {
    static int counter = 1;
    cur_id = counter;
    counter++;
}
