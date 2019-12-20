

#ifndef CPP_PROJECT_SHOP_CUSTOMER_H
#define CPP_PROJECT_SHOP_CUSTOMER_H

#include "../src/Human.cpp"
#pragma once

class Customer : public Human{
	private:
		double spentMoney;
		double money;
		double selfSale;

	public:
		Customer(string _customer_name, int _customer_age, double _money, double _spentMoney, double _selfSale);
		void setMoney(double _money);
		void setSpentMoney(double _spentMoney);
		void setSelfSale(double _selfSale);
		double getMoney();
		double getSpentMoney();
		double getSelfSale();

		void show();
};


#endif //CPP_PROJECT_SHOP_CUSTOMER_H
