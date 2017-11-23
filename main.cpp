#include <iostream>
#include <algorithm>
#include "Assignment 1/Sorting.h"
#include "Assignment 2/PersonReg.h"
using namespace std;

int main() {
    //Sorting s;

    // as. 1
    //s.A();
    //s.B();
    //s.C();
    //s.D();


    //as. 2
    /*
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
     */
    PersonReg reg(10);

    reg.addPerson(new Person("A cewl dude","Ble ble"));
    reg.addPerson(new Person("Coffboff","Din mamma"));
    reg.addPerson(new Person("Pew Pew1","Ayo1"));
    reg.addPerson(new Person("Pew Pew2","Ayo2"));
    reg.addPerson(new Person("Pew Pew3","Ayo3"));
    reg.addPerson(new Person("Pew Pew4","Ayo4"));

    //random_shuffle(reg.begin(),reg.end());
    //cout << (reg.begin()<reg.end()) << endl;
    sort(reg.begin(),reg.end());
    reg.printPersons();
    //cout << reg.begin()->operator<(*reg.end()) << endl;



   // reg.printPersons();

}