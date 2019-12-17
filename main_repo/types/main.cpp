/***
*
* Project name: Shop
        * File: main.cpp
        * Project was created by Chicha Olexandr on 21.11.19
        * Year: 2-nd
        * Specialization: Computer mathematics
        * Taras Shevchenko National University of Kyiv
        * e-mail: sashachicha13gmail.com
        * phone number: +380957519417
*
***/

#include <iostream>
#include <string>
#include "Customer.cpp"
#include "Seller.cpp"
#include "Shop.cpp"
#include "Product.cpp"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Ввод с консоли или файла?" << endl << "1 - консоль, 2 - файл" << endl;    //вибираємо спосіб вводу
    cin >> n;
    if(n == 1)
    {
        string name;
        cout << "Введите название магазина: ";        //вводимо дані
        cin >> name;
        vector<Seller> sellers_;
        vector<Product> products_;
        vector<Customer> customers_;
        Shop* s = new Shop(name, sellers_, products_, customers_);
        cout << "Введите количество товаров" << endl;
        int products_count;
        cin >> products_count;
        for(int i = 0; i < products_count; i++){
            cout <<  endl;
            cout << "Имя товара: ";
            cin >> name;
            cout << endl << "Стоимость: ";
            double price;
            cin >> price;
            cout << endl << "Оптовую стоимость: ";
            double opt_price;
            cin >> opt_price;
            s->setProduct(Product(name, price, 0.0, opt_price));
        }
        cout << "Введите количество продавцов" << endl;
        int sellers_count;
        cin >> sellers_count;
        int age_;
        int salary_;
        for(int i = 0; i < sellers_count; i++){
            cout << endl << "1: " << endl;
            cout << "Имя продавца: ";
            cin >> name;
            cout << endl << "Возраст: ";
            cin >> age_;
            cout << endl << "Зарплата: ";
            cin >> salary_;
            s->setSeller(Seller(name, age_, salary_));
        }
        cout << "Введите количество покупателей" << endl;
        int customers_count;
        cin >> customers_count;
        for(int i = 0; i < customers_count; i++){
            cout << endl << "1: " << endl;
            cout << "Имя покупателя: ";
            cin >> name;
            cout << endl << "Возраст: ";
            cin >> age_;
            cout << endl << "Деньги: ";
            double money_;
            cin >> money_;
            s->setCustomer(Customer(name, age_, money_));
        }
        cout << "Введите количество дней" << endl;
        int time_count;
        cin >> time_count;
        cout << endl;
    }
    else if(n == 2)
    {

    }
}
