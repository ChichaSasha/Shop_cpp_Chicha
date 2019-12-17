#include "Human.h"
#pragma once

using namespace std;

void Human::show(){
    cout << name << endl;
    cout << age << endl;
}

string Human::getName() {
    return name;
}

Human::~Human(){
}