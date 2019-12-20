/***
 *
 * Project name: Shop
 * File: Seller.h
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#ifndef CPP_PROJECT_SHOP_SELLER_H
#define CPP_PROJECT_SHOP_SELLER_H

#include "../src/Human.cpp"
#pragma once

//Клас продавець
class Seller : public Human{
	private:
		double salary;  //Заробітна плата
	public:
		Seller(string _seller_name, int _seller_age, double _salary);
		double getSalary();
		void setSalary(double _new_salary);
		void show();
};


#endif //CPP_PROJECT_SHOP_SELLER_H
