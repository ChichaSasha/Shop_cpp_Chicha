/***
 *
 * Project name: Shop
 * File: Human.h
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#ifndef CPP_PROJECT_SHOP_HUMAN_H
#define CPP_PROJECT_SHOP_HUMAN_H

#include <iostream>
#include <string>
#pragma once

using namespace std;

//Клас Людина
class Human {
	private:
	string name;  //Імя
	int age;      //Вік

public:
    //Конструктор класу людина
	Human(string _name, int _age);

    //Сетери всіх полів
    void setName(string _name);
    void setAge(int _age);

    //Гетери всіх полів
    string getName();
	int getAge();

    //Виводить в консоль всі поля
	virtual void show();
};


#endif //CPP_PROJECT_SHOP_HUMAN_H
