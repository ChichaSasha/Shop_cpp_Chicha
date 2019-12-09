#include <string>
#pragma once

using namespace std;

class Human{
    public:
        Human(string name, double age);
        virtual void show();
    protected:
        string name;
        int age;
};
