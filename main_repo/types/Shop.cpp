#include "Shop.h"
#include <iostream>
#include <utility>
#pragma once

using namespace std;

int getIndex(vector<Product> list, Product element) {
    for(int i = 0;i < list.size();i++){
        if (element.getName() == list[i].getName()){
            return i;
        }
    }
    return -1;
}

vector<Product> deleteByIndex(vector<Product> list,int index){
    list.erase(list.begin() + index); // видаляємо з списку елемент
    return list;
}


class Seller* Shop::randomSeller() {
    return &sellers[(rand()%sellers.size())];
}

//Функція продажу товари з магазину
bool Shop::sellProduct(Product a, Customer* b){
    Seller* c = randomSeller();
    int index = getIndex(products, a); //Вибираємо з списку продуктів продукт , який нам потрібен
    if (index != -1){
        double priceWithSale = a.getPrice() - countSaleForCustomer(*b, a);
        if (b->money >= priceWithSale){
            c->changeSalary(c->getSalary() + (priceWithSale - a.getOptPrice())*0.05); //додаємо до зарплати 5% від цього продажу
            profit += (priceWithSale - a.getOptPrice()); //Збільшимо профіт магазини на різницю між оптовою та установленою ціною
            products = deleteByIndex(products ,index); //Видаляємо з списку продуктів продукт, який продали
            b->money -= priceWithSale; //Знімаємо з рахунку покупця достатню для купівлі суму
            buyingList.push_back(*b);
            return true;
        }else{
            cout<< "У покупця недостатньо коштів" << endl;
        }
    }
    cout << "Продукту немає в наявності" << endl;
    return false;

};

void Shop::changeProfit(double newProfit){
    profit = newProfit;
};

double Shop::countSaleForCustomer(Customer b, Product c) {
    int countProducts = 0;
    double personaleSale = 0; //in %
    for (int i = 0;i<buyingList.size();i++){
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


void Shop::setCustomer(Customer a){
    customers.push_back(a);
}

void Shop::setSeller(Seller a){
    sellers.push_back(a);
}

void Shop::setName(std::__cxx11::string Name) {
    name = Name;
}

void Shop::setProduct(Product a){
    products.push_back(a);
};

vector<Product> Shop::getProducts(){
    return products;
}

vector<class Seller> Shop::getSellers() {
    return sellers;
}

vector<class Customer> Shop::getCustomers() {
    return customers;
}


void Shop::getSeller(string Name){
    for(int i = 0;i < sellers.size();i++) {
        if (Name == sellers[i].getName()) {
            sellers[i].show();
        }
    }
    cout << "Цей продавиць в магазині не працює" << endl;
}

void Shop::getProduct(string Name){
    for (int i = 0;i < products.size();i++) {
        if (Name == products[i].getName()) {
            products[i].show();
        }
    }
    cout << "Цей продавиць в магазині не працює" << endl;
}


void Shop::show(){
    cout<< "Назва : " << name <<endl;
    cout << "Sellers :" <<endl;
    for (int i = 0;i < sellers.size();i++){
        sellers[i].show();
        cout<<""<<endl;
    }
    cout << "Products :" <<endl;
    for (int i = 0;i < products.size();i++){
        products[i].show();
        cout<<""<<endl;
    }
    cout << "Customers :" <<endl;
    for (int i = 0;i < customers.size();i++){
        customers[i].show();
        cout<<""<<endl;
    }
    cout <<"Profit : "<< profit <<endl;
}


