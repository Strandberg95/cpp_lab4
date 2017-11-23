//
// Created by Christoffer Strandberg on 2017-11-14.
//

#include "Sorting.h"
#include <iostream>
#include "vector"

using namespace std;

bool Greater(int x, int y) {return x>y;}

void Sorting :: A(){
    vector<int> v;
    for(int i = 0; i != this->size; i++){
        v.push_back(rand() % this->MAXRAND);
    }

    cout << "unsorted" << endl;

    for(int n : v){
        cout << n << endl;
    }

    sort(v.begin(),v.end());

    cout << "sorted" << endl;

    for(int n : v){
        cout << n << endl;
    }
}

void Sorting :: B(){
    int *arr = new int[this->size];
    for(int i = 0; i != this->size; i++){
        arr[i] = rand() % this->MAXRAND;
    }

    cout << "Before sort" << endl;

    for(int i = 0; i != this->size; i++){
        cout << arr[i] << endl;
    }

    sort(arr,arr + size);

    cout << "After sort" << endl;

    for(int i = 0; i != this->size; i++){
        cout << arr[i] << endl;
    }
}

void Sorting :: C(){
    vector<int> v;
    for(int i = 0; i != this->size; i++){
        v.push_back(rand() % this->MAXRAND);
    }

    cout << "unsorted" << endl;

    for(int n : v){
        cout << n << endl;
    }

    sort(v.rbegin(),v.rend());

    cout << "sorted" << endl;

    for(int n : v){
        cout << n << endl;
    }
}

void Sorting :: D(){
    int *arr = new int[this->size];
    for(int i = 0; i != this->size; i++){
        arr[i] = rand() % this->MAXRAND;
    }

    cout << "Before sort" << endl;

    for(int i = 0; i != this->size; i++){
        cout << arr[i] << endl;
    }

    sort(arr, arr + size, Greater);

    cout << "After sort" << endl;

    for(int i = 0; i != this->size; i++){
        cout << arr[i] << endl;
    }
}