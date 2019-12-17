//
// Created by TheGodfather on 17.12.2019.
//

#ifndef CPP_PROJECT_SHOP_PRODUCT_H
#define CPP_PROJECT_SHOP_PRODUCT_H
#pragma once

class Product{
public:
	Product(string Name, double Price,double Sale, double OptPrice){
		name = Name;
		price = Price;
		sale = Sale;
		optPrice = OptPrice;
	};

	//void show();

	string getName();
	double getPrice();
	double getOptPrice();
	double getSale();

	void setName(string _name);
	void setPrice(double _price);
	void setSale(double _sale);
	void setOptPrice(double _optPrice);

	void show();

private:
	string name;
	double sale;
	double optPrice;
	double price;
};

#endif //CPP_PROJECT_SHOP_PRODUCT_H
