#include "Seller.cpp"
#include "Product.cpp"
#include "Customer.cpp"
#include "Human.cpp"
#include <vector>
#include <string>
#pragma once

class Shop{
        Shop(string Name,vector<Seller> Sellers, vector<Product> Products, vector<Customer> Customers){
            name = std::move(Name);
            sellers = std::move(Sellers);
            products = std::move(Products);
            customers = std::move(Customers);
            profit = 0;
        }
        void getProduct(string Name);
        void setProduct(Product a);
        void setSeller(Seller a);
        Seller randomSeller();
        bool sellProduct(Product a, Customer b);
        void getCustomer(string Name);
        void setCustomer(Customer a);
        void changeProfit(double newProfit);
        void show();
    private:
        string name;
        vector<Seller> sellers;
        vector<Product> products;
        vector<Customer> customers;
        double profit;
};
