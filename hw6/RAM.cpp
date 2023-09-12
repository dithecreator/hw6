//
//  RAM.cpp
//  hw6
//
//  Created by Дима on 12.09.23.
//

#include "RAM.hpp"
#include <iostream>
using namespace std;

RAM :: RAM(){
    model = nullptr;
    price = 0;

}



char* RAM:: getModel(){
    return model;
}

int RAM:: getPrice(){
    return price;
}

void RAM:: setRAM(const char* bufferModel, int p){
    model = new char[strlen(bufferModel) + 1];
        strcpy(model, bufferModel);
        price = p;
    
}

void RAM:: print(){
    cout << model << endl;
    cout << price << endl;
}




RAM :: ~RAM(){
    delete[] model;
};
