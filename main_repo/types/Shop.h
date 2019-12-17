#include "Seller.cpp"
#include "Product.cpp"
#include "Customer.cpp"
#include "Human.cpp"
#include <vector>
#include <string>
#pragma once

class Shop{
    public:

        Seller* randomSeller();

        bool sellProduct(Product a, Customer* b);

        void changeProfit(double newProfit);

        double countSaleForCustomer(Customer b, Product c);

        void setCustomer(Customer a);
        void setSeller(Seller a);
        void setName(string Name);
        void setProduct(Product a);

        vector<Product> getProducts();
        vector<Seller> getSellers();
        vector<Customer> getCustomers();

        void getSeller(string name);
        void getProduct(string name);

        void show();

        Shop(string Name, vector<Seller> Sellers, vector<Product> Products, vector<Customer> Customers){
            name = std::move(Name);
            sellers = std::move(Sellers);
            products = std::move(Products);
            customers = std::move(Customers);
            profit = 0;
        }

        vector<Customer> buyingList; //Коли покупець щось купує -> Заносимо його до списку


    private:
            string name;
            vector<Seller> sellers;
            vector<Product> products;
            vector<Customer> customers;
            double profit;
};
