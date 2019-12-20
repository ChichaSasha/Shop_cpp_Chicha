/***
 *
 * Project name: Shop
 * File: Product.h
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#ifndef CPP_PROJECT_SHOP_PRODUCT_H
#define CPP_PROJECT_SHOP_PRODUCT_H
#pragma once

class Product{
public:

    //Конструктор класу
	Product(string Name, double Price,double Sale, double OptPrice){
		name = Name;
		price = Price;
		sale = Sale;
		optPrice = OptPrice;
	};

	//Гетери всіх полів
	string getName();
	double getPrice();
	double getOptPrice();
	double getSale();

	//Сетери всіх полів
	void setName(string _name);
	void setPrice(double _price);
	void setSale(double _sale);
	void setOptPrice(double _optPrice);

	//Виводить всі поля класу
	void show();

private:
	string name;    //Імя
	double sale;    //Знижка
	double optPrice;//Оптова ціна
	double price;   //Ціна
};

#endif //CPP_PROJECT_SHOP_PRODUCT_H
