#include "Human.h"
#include <string>
#pragma once

using namespace std;

class Customer:public Human{
    public:
        Customer(string name, int age, double money);
        int k = 0;
        int money;
};