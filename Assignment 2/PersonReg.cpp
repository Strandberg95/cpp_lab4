//
// Created by Christoffer Strandberg on 2017-11-14.
//

#include <algorithm>
#include "PersonReg.h"
//#include "Person.h"

using namespace std;

PersonReg :: PersonReg(int size)
{
    this -> size = size;
    this -> persons = new Person[size];
    this -> index = 0;
}

void PersonReg :: addPerson(const Person* person)
{
    this->persons[this->index++] = *person;
    this->size++;
}

void PersonReg :: addPerson(const Person& person)
{
    this->persons[this->index++] = *&person;
    this->size++;
}

void PersonReg :: removePerson(Person* person)
{
    for(int i = 0; i != this->size; i++)
    {
        if(persons[i].getName() == person->getName()
           && persons[i].getAddress() == person->getAddress())
        {
            calculateNewArray(persons,i);
            break;
        }
    }

}

void PersonReg :: calculateNewArray(Person *persons, int removalIndex)
{
    Person* newArr = new Person[this->size--];

    for(int i = 0, j = 0; i != this->size; i++)
    {
        if(i != removalIndex) {
            newArr[j++] = persons[i];
        }else{
            delete &persons[i];
        }
    }
    this->persons = newArr;
    this->index--;
}

Person* PersonReg :: freeSearch(string name, Person* person)
{
    Person* rPtr = nullptr;

    for(int i = findIndexOf(person); i != this->size; i++)
    {
        if(persons[i].getName() == name)
        {
            rPtr = &persons[i];
        }
    }
    return rPtr;
}

int PersonReg :: findIndexOf(Person* person)
{
    if(person == nullptr)
        return 0;

    for(int i = 0; i != size; i++)
    {
        if(persons[i].getName() == person->getName() &&
           persons[i].getAddress() == person->getAddress())
        {
            return i;
        }
    }
    return 0;
}

void PersonReg :: printPersons()
{
    for(int i = 0; i != this->index; i++)
    {
        this->persons[i].print();
    }
}

PersonReg :: ~PersonReg()
{
    delete[] this->persons;
}

Person* PersonReg :: begin() {
    return persons;
}

Person* PersonReg :: end(){
    return persons + this->index;
}

void PersonReg :: personSort(){
    sort(this->begin(),this->end());
}


