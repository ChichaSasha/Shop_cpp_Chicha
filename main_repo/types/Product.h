#include <string>
#include <utility>
#pragma once

using namespace std;

class Product{
    public:
        Product(string Name, double Price,double Sale, double OptPrice){
            name = std::move(Name);
            price = Price;
            sale = Sale;
            optPrice = OptPrice;
        };
        void show();
        double getPrice();
        double getOptPrice();
        string getName();
        double getSale();
        void changePrice(double p);
    private:
        string name;
        double sale;
        double optPrice;
        double price;
};