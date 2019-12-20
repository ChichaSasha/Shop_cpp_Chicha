/***
 *
 * Project name: Shop
 * File: Product.cpp
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

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

void Product::show() {
    cout<< "Назва продукту : " << name << endl;
    cout<< "Ціна : " << price << endl;
    cout<< "Оптова ціна : " << optPrice << endl;
    cout<< "Знижка : " << sale << endl;
}
