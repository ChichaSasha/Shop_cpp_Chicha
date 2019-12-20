/***
 *
 * Project name: Shop
 * File: Customer.h
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#ifndef CPP_PROJECT_SHOP_CUSTOMER_H
#define CPP_PROJECT_SHOP_CUSTOMER_H

#include "../src/Human.cpp"
#pragma once

//Клас Продавець(Нащадок класу людина)
class Customer : public Human{
	private:
		double spentMoney;  //Витрачены гроші
		double money;       //Власні гроші
		double selfSale;    //Персональна знижка

	public:
        //Конструктор класу покупець
		Customer(string _customer_name, int _customer_age, double _money, double _spentMoney, double _selfSale);

        //Сетери всіх полів
        void setMoney(double _money);
		void setSpentMoney(double _spentMoney);
		void setSelfSale(double _selfSale);

		//Гетери всіх полів
		double getMoney();
		double getSpentMoney();
		double getSelfSale();

		//Виводть в консоль всі поля класу
		void show();
};


#endif //CPP_PROJECT_SHOP_CUSTOMER_H
