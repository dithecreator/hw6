//
//  CPU.cpp
//  hw6
//
//  Created by Дима on 12.09.23.
//

#include "CPU.hpp"
#include <iostream>
using namespace std;
CPU :: CPU(){
    model = nullptr;
    price = 0;
    
}


char* CPU:: getModel(){
    return model;
}

void CPU:: setCPU(const char* bufferModel, int p){
    model = new char[strlen(bufferModel) + 1];
        strcpy(model, bufferModel);
        price = p;
    
}

void CPU:: print(){
    cout << model << endl;
    cout << price << endl;
}

int CPU:: getPrice(){
    return price;
}

CPU :: ~CPU(){
    delete[] model;
};
