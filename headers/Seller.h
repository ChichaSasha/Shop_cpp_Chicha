//
// Created by TheGodfather on 17.12.2019.
//

#ifndef CPP_PROJECT_SHOP_SELLER_H
#define CPP_PROJECT_SHOP_SELLER_H

#include "../src/Human.cpp"
#pragma once

class Seller : public Human{
	private:
		double salary;
	public:
		Seller(string _seller_name, int _seller_age, double _salary);
		double getSalary();
		void setSalary(double _new_salary);
};


#endif //CPP_PROJECT_SHOP_SELLER_H
