//
// Created by TheGodfather on 17.12.2019.
//

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
