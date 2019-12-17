#include "Seller.h"
#include <iostream>
#pragma once

using namespace std;

void Seller::show(){
    cout<<"Імя : "<< name << endl;
    cout<<"Вік : "<< age << endl;
    cout<<"Зарплата : "<< salary << endl;
}

void Seller::changeSalary(double p){
    salary = p;
}

double Seller::getSalary(){
    return salary;
}

