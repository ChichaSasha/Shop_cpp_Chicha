/***
 *
 * Project name: Shop
 * File: Human.cpp
 * Project was created by Chicha Olexandr on 15.12.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: sashachicha13@gmail.com
 * phone number: +380957519417
 *
***/

#include "../headers/Human.h"
#pragma once


Human::Human(string _name, int _age) {
	name = _name;
	age = _age;
}

void Human::setName(string _name) {
	name = _name;
}

void Human::setAge(int _age) {
	age = _age;
}

string Human::getName() {
	return name;
}

int Human::getAge() {
	return age;
}

void Human::show() {
	cout << "Name: " << name << ", Age: " << age << endl;
}

