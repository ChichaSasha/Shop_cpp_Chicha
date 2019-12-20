/***
 *
 * Project name: Shop
 * File: Seller.cpp
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#include "../headers/Seller.h"
#pragma once

Seller::Seller(string _seller_name, int _seller_age, double _salary):Human(_seller_name, _seller_age){
	salary = _salary;
}
double Seller::getSalary() { return salary; }
void Seller::setSalary(double _new_salary) { salary = _new_salary; }

void Seller::show() {
    cout<< "Імя продавця : " << getName() << endl;
    cout<< "Вік : " << getAge() << endl;
    cout<< "Заробітна плата : " << salary << endl;
}
