//
// Created by TheGodfather on 17.12.2019.
//

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

