//
// Created by Christoffer Strandberg on 2017-11-14.
//

#include <iostream>
#include "Person.h"

Person :: Person() = default;

Person :: Person(const string& name, const string& address)
{
    this -> name = name;
    this -> address = address;
}

string Person :: getName()
{
    return this -> name;
}

string Person ::getAddress()
{
    return this -> address;
}

void Person :: print()
{
    cout << "Name: " << this->getName()
         << " | Address: " << this->getAddress()
         << endl;

}

bool Person :: operator<(const Person& that) {
    //cout << "comparing " << this->name << " With: " << that.name << " : " << (this->name < that.name) << endl;
    return this->name < that.name;
}

Person :: ~Person()
{
    delete this;
}