#include "Human.h"
#include <string>
#include <utility>
#pragma once

using namespace std;

class Customer:public Human{
    public:
        Customer(string Name, int Age, double Money):Human(std::move(Name), Age){
            money = Money;
            earnedMoney = 0;
            ownSale = 0.0;
        }
        void show() override;
        int earnedMoney;
        double money;
        double ownSale;
};