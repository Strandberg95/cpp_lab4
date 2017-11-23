//
// Created by Christoffer Strandberg on 2017-11-14.
//

#ifndef CPP_LABB4_PERSONREG_H
#define CPP_LABB4_PERSONREG_H

#include <string>
#include "Person.h"

using namespace std;

class PersonReg
{
private:
    Person* persons;
    int size;
    int index;
    void calculateNewArray(Person* persons, int removalIndex);
    int findIndexOf(Person* person);
public:
    PersonReg(int size);
    Person* begin();
    Person* end();
    void addPerson(const Person* person);
    void addPerson(const Person& person);
    void removePerson(Person* person);
    Person* freeSearch(string name, Person* person);
    void printPersons();
    ~PersonReg();
};



#endif //CPP_LABB4_PERSONREG_H
