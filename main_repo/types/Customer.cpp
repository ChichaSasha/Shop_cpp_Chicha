#include "Customer.h"
#include <iostream>
#pragma once

using namespace std;

void Customer::show() {
    cout<< "Імя : " << name << endl;
    cout<< "Вік : " << age << endl;
    cout<< "Гроші : " << money << endl;
    cout<< "Витрачені гроші : " << earnedMoney << endl;
}

std::__cxx11::double Customer::getOwnSale() {
    return ownSale;
}

int Customer::getEarnedMoney() {
    return money;
}

double Customer::getMoney() {
    return money;
}





