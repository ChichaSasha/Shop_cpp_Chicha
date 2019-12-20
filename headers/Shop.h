/***
 *
 * Project name: Shop
 * File: Shop.h
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#ifndef CPP_PROJECT_SHOP_SHOP_H
#define CPP_PROJECT_SHOP_SHOP_H
#pragma once
#include <iostream>
#include <vector>

#include "../src/Seller.cpp"
#include "../src/Customer.cpp"
#include "../src/Product.cpp"

//Клас Магазин
class Shop{
public:

    //Конструктор класу магазин
	Shop(string _name, vector<Seller*> _sellers, vector<Product*> _products, vector<Customer*> _customers, double _profit);

    //Сетери профіту та назви магазина
    void setProfit(double _profit);
	void setName(string _name);

	//Метод, який вибирає випадковим чином працівника магазину
	Seller* randomSeller();

	//Методи , які додають в магазин відповідно Покупця, Продукт, Продавця
	void addCustomer(Customer *_customer);
	void addProduct(Product *_product);
	void addSeller(Seller *_seller);

	//Гетери списку Продавців, Покупців, Продуктів
	vector<Seller*> getSellers();
	vector<Customer*> getCustomers();
	vector<Product*> getProducts();

	//Метод продажу продукту з магазину
	bool sellProduct(Product *_product, Customer *_customer);

	//Списки продавців,продуктів,покупців
	vector<Seller*> sellers;
	vector<Product*> products;
	vector<Customer*> customers;

	//Список покупців, які купили продукт в магазині(Скільки продуктів купили - стільки разів занесені в список)
	vector<Customer> buyingList;

	//Виводить поля класу
	void show();

private:
	string name;    //Назва
	double profit;  //Профіт магазину

	//Метод обрахунку власної знижки покупця
	double countSaleForCustomer(Customer b, Product c);
};


#endif //CPP_PROJECT_SHOP_SHOP_H
