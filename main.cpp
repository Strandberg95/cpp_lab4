#include <iostream>
#include "Assignment 1/Sorting.h"
#include "Assignment 2/PersonReg.h"

int main() {
    Sorting s;

    // as. 1
    //s.A();
    //s.B();
    //s.C();
    //s.D();


    //as. 2
    PersonReg reg(10);
    Person* p1 = new Person("Ay lmao","ay lmao");
    Person* p2 = new Person("By lmao","by lmao");
    Person* p3 = new Person("Cy lmao","cy lmao");
    Person* p4 = new Person("Dy lmao","dy lmao");

    reg.addPerson(p1);
    reg.addPerson(p4);
    reg.addPerson(p3);
    reg.addPerson(p2);

    reg.printPersons();
    cout << "before sort" << endl;
    reg.personSort();
    cout << "after sort" << endl;
    reg.printPersons();
}