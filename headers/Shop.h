//
// Created by TheGodfather on 17.12.2019.
//

#ifndef CPP_PROJECT_SHOP_SHOP_H
#define CPP_PROJECT_SHOP_SHOP_H
#pragma once
#include <iostream>
#include <vector>

#include "../src/Seller.cpp"
#include "../src/Customer.cpp"
#include "../src/Product.cpp"

class Shop{
public:
	Shop(string _name, vector<Seller*> _sellers, vector<Product*> _products, vector<Customer*> _customers, double _profit);
	void setProfit(double _profit);
	void setName(string _name);

	Seller* randomSeller();
	void addCustomer(Customer *_customer);
	void addProduct(Product *_product);
	void addSeller(Seller *_seller);

	vector<Seller*> getSellers();
	vector<Customer*> getCustomers();
	vector<Product*> getProducts();

	bool sellProduct(Product *_product, Customer *_customer);

	vector<Seller*> sellers;
	vector<Product *> products;
	vector<Customer*> customers;

	vector<Customer> buyingList;
private:
	string name;
	double profit;

	double countSaleForCustomer(Customer b, Product c);
};


#endif //CPP_PROJECT_SHOP_SHOP_H
