//
// Created by TheGodfather on 17.12.2019.
//

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
