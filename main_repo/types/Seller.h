#include "Human.cpp"
#include <string>
#include <utility>
#pragma once

extern bool Error;

class Seller:public Human{
    public:
        Seller(string Name, int Age, double Salary):Human(std::move(Name), Age){
            salary = Salary;
        };
        void show() override; //Виводимо поля обєкту продавець
        double getSalary(); //Повертає зарплату
        void changeSalary(double q); //Змінює зарплату (нова зарплата - q гривень)
    private:
        double salary; //Зарплата продавця(5% від продаж)
};