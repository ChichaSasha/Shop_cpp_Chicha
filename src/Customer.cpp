/***
 *
 * Project name: Shop
 * File: Customer.сpp
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#include "../headers/Customer.h"
#pragma once


Customer::Customer(string _customer_name, int _customer_age, double _money, double _spentMoney, double _selfSale):Human(
		_customer_name, _customer_age) {
	money = _money;
	spentMoney = _spentMoney;
	selfSale = _selfSale;
}

void Customer::setMoney(double _money) {money = _money;}
void Customer::setSpentMoney(double _spentMoney) {spentMoney = _spentMoney;}
void Customer::setSelfSale(double _selfSale) { selfSale = _selfSale;}

double Customer::getMoney() { return money; }
double Customer::getSpentMoney() { return spentMoney; }
double Customer::getSelfSale() { return selfSale; }

void Customer::show() {
    cout<< "Імя покупця : " << getName() << endl;
    cout<< "Вік : " << getAge() << endl;
    cout<< "Гроші : " << money << endl;
    cout<< "Витрачені гроші : " << spentMoney << endl;
    cout<< "Персональна знижка : " << selfSale << endl;
}