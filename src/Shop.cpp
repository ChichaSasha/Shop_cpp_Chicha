//
// Created by TheGodfather on 17.12.2019.
//

#include "../headers/Shop.h"
#pragma once

#include <utility>

Shop::Shop(string _name, vector<Seller *> _sellers, vector<Product *> _products, vector<Customer *> _customers,
           double _profit) {
	name = std::move(_name);
	sellers = std::move(_sellers);
	products = std::move(_products);
	customers = std::move(_customers);
	profit = _profit;
}

void Shop::setProfit(double _profit) {profit = _profit;}
void Shop::setName(string _name) {name = std::move(_name);}

void Shop::addCustomer(Customer *_customer) {customers.push_back(_customer);}
void Shop::addProduct(Product *_product) {products.push_back(_product);}
void Shop::addSeller(Seller *_seller) {sellers.push_back(_seller);}

vector<Seller *> Shop::getSellers() {
	return sellers;
}

vector<Customer *> Shop::getCustomers() {
	return customers;
}

vector<Product*> Shop::getProducts() {
	return products;
}

Seller *Shop::randomSeller() {
	return sellers[rand() % sellers.size()];
}

int getIndex(vector<Product*> list, Product element) {
	for(int i = 0;i < list.size();i++){
		if (element.getName() == list[i]->getName()){
			return i;
		}
	}
	return -1;
}

vector<Product *> deleteByIndex(vector<Product*> list, int index){
	list.erase(list.begin() + index); // видаляємо з списку елемент
	return list;
}

double Shop::countSaleForCustomer(Customer b, Product c) {
	int countProducts = 0;
	double personaleSale = 0; //in %
	for (int i = 0;i < buyingList.size();i++){
		if (b.getName() == buyingList[i].getName()){
			countProducts += 1;
		}
		if (countProducts > 30){
			personaleSale = 30;
		} else if (countProducts > 20){
			personaleSale = 20;
		} else if (countProducts > 10){
			personaleSale = 10;
		} else if (countProducts > 5){
			personaleSale = 5;
		}
	}
	return (c.getSale() + c.getPrice()*personaleSale/100);
}

bool Shop::sellProduct(Product *_product, Customer *_customer) {
	Seller* someSeller = randomSeller();
	int index = getIndex(products, *_product);
	if (index != -1){
		double priceWithSale = _product->getPrice() - countSaleForCustomer(* _customer, *_product);
		if (_customer->getMoney() >= priceWithSale){
			someSeller->setSalary(someSeller->getSalary() + (priceWithSale - _product->getOptPrice()) * 0.05); //додаємо до зарплати 5% від цього продажу
			profit += (priceWithSale - _product->getOptPrice()); //Збільшимо профіт магазини на різницю між оптовою та установленою ціною
			products = deleteByIndex(products ,index); //Видаляємо з списку продуктів продукт, який продали
			_customer->setMoney(_customer->getMoney() - priceWithSale); //Знімаємо з рахунку покупця достатню для купівлі суму
			_customer->setSpentMoney(_customer->getSpentMoney() + priceWithSale);
			buyingList.push_back(*_customer);
			return true;
		}else{
			cout<< "Customer has not enough money!" << endl;
		}
	}
	cout << "This product is not in shop" << endl;
	return false;
}

void Shop::show() {
    cout << "Назва магазину : " << name << endl;
    cout << "Продавці магазину : "<< endl;
    for(int i = 0;i<sellers.size();i++){
        sellers[i]->show();
    }
    cout << "Продукти в наявності : "<< endl;
    for(int i = 0;i<products.size();i++){
        products[i]->show();
    }
    cout << "Покупці магазину : "<< endl;
    for(int i = 0;i<customers.size();i++){
        customers[i]->show();
    }
}


