//
// Created by TheGodfather on 17.12.2019.
//

#ifndef CPP_PROJECT_SHOP_HUMAN_H
#define CPP_PROJECT_SHOP_HUMAN_H

#include <iostream>
#include <string>
#pragma once

using namespace std;

class Human {
	private:
	string name;
	int age;

public:
	Human(string _name, int _age);
	void setName(string _name);
	void setAge(int _age);
	string getName();
	int getAge();

    virtual void show();
};


#endif //CPP_PROJECT_SHOP_HUMAN_H
