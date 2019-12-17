#include <string>
#include <utility>
#pragma once

using namespace std;

class Human{
    public:
        Human(string Name, int Age){
            name = std::move(Name);
            age = Age;
        };
        ~Human();
        virtual void show();
        string getName();
    protected:
        string name;
        int age;
};
