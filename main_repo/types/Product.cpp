#include "Product.h"
#include <iostream>
#pragma once

using namespace std;

void Product::show(){
    cout<< "Назва : " << name << endl;
    cout<< "Оптова ціна : " << optPrice << endl;  //ціна у поставника
    cout<< "Знижка : " << sale << endl;  //sale*100% = sale in percents
    cout<< "Ціна : " << price << endl;
}

double Product::getPrice(){
    return price;
}

string Product::getName(){
    return name;
}

double Product::getSale() {
    return sale;
}

double Product::getOptPrice(){
    return optPrice;
}

void Product::changePrice(double p){
    price = p;
}
