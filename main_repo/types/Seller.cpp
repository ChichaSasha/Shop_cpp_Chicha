#include "Seller.h"
#include <iostream>
#pragma once

using namespace std;

void Seller::show(){
    cout<< name << endl;
    cout<< age << endl;
    cout<< salary << endl;
}

void Seller::changeSalary(double p){
    salary = p;
}

double Seller::getSalary(){
    return salary;
}

