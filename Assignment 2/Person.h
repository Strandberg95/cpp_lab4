//
// Created by Christoffer Strandberg on 2017-11-14.
//

#ifndef CPP_LABB4_PERSON_H
#define CPP_LABB4_PERSON_H


#include <string>
using namespace std;

class Person
{
private:
    string name;
    string address;
public:
    Person();
    Person(const string& name,const string& address);
    string getName();
    string getAddress();
    virtual void print();
    bool operator<(const Person& that);
    virtual ~Person();
};

#endif //CPP_LABB4_PERSON_H
