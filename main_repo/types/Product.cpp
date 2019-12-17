#include "Product.h"
#include <iostream>
#pragma once

using namespace std;

void Product::show(){
    cout<< name << endl;
    cout<< optPrice << endl;  //ціна у поставника
    cout<< sale << endl;  //sale*100% = sale in percents
    cout<< price << endl;
}

double Product::getPrice(){
    return price;
}

string Product::getName(){
    return name;
}

double Product::getOptPrice(){
    return optPrice;
}

void Product::changePrice(double p){
    price = p;
}
