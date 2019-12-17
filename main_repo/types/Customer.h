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

        int getEarnedMoney();
        double getMoney();
        double getOwnSale();

        void changeMoney(double m);
        void changeOwnSale(double m);
        void changeEarnedMoney(int earnedMoney);


        void show() override;
    private:
        int earnedMoney;
        double money;
        double ownSale;
};