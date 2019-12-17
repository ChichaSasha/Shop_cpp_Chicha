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

void Shop::getProduct(string Name){
    for (int i = 0;i < products.size();i++) {
        if (Name == products[i].getName()) {
            products[i].show();
        }
    }
    cout << "Цей продавиць в магазині не працює" << endl;
}

void Shop::setProduct(Product a){
    products.push_back(a);
};

void Shop::getCustomer(string Name){
    for(int i = 0;i < customers.size();i++) {
        if (Name == customers[i].getName()) {
            customers[i].show();
        }
    }
    cout << "Цей продавиць в магазині не працює" << endl;
}


void Shop::setCustomer(Customer a){
    customers.push_back(a);
}

void Shop::setSeller(Seller a){
    sellers.push_back(a);
}

//Функція продажу товари з магазину
bool Shop::sellProduct(Product a, Customer b){
    Seller c = randomSeller();
    int index = getIndex(products, a); //Вибираємо з списку продуктів продукт , який нам потрібен
    if (index != -1){
        if (b.money >= a.getPrice()){
            c.changeSalary(c.getSalary() + (a.getPrice() - a.getOptPrice())*0.05); //додаємо до зарплати 5% від цього продажу
            profit += a.getPrice() - a.getOptPrice(); //Збільшимо профіт магазини на різницю між оптовою та установленою ціною
            products = deleteByIndex(products ,index); //Видаляємо з списку продуктів продукт, який продали
            b.money -= a.getPrice(); //Знімаємо з рахунку покупця достатню для купівлі суму
            return true;
        }else{
            cout<< "У покупця недостатньо коштів" << endl;
        }
    }
    cout << "Продукту немає в наявності" << endl;
    return false;

};

void Shop::show(){
    cout << name <<endl;
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

class Seller Shop::randomSeller() {
    return sellers[(rand()%sellers.size())];
}

void Shop::changeProfit(double newProfit){
    profit = newProfit;
};
