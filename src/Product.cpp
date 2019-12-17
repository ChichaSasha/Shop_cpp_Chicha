//
// Created by TheGodfather on 17.12.2019.
//

#include "../headers/Product.h"
#pragma once

/*
void Product::show(){
	cout<< "Назва : " << name << endl;
	cout<< "Оптова ціна : " << optPrice << endl;  //ціна у поставника
	cout<< "Знижка : " << sale << endl;  //sale*100% = sale in percents
	cout<< "Ціна : " << price << endl;
}
*/

double Product::getPrice() {return price;}
string Product::getName() {return name;}
double Product::getSale() {return sale;}
double Product::getOptPrice() {return optPrice;}

void Product::setPrice(double _price){
	price = _price;
}

void Product::setName(string _name) {
	name = _name;
}

void Product::setSale(double _sale) {
	sale = _sale;
}

void Product::setOptPrice(double _optPrice) {
	optPrice = _optPrice;
}
