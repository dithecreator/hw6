//
//  SSD.cpp
//  hw6
//
//  Created by Дима on 12.09.23.
//

#include "SSD.hpp"
#include <iostream>
using namespace std;
SSD :: SSD(){
    model = nullptr;
    price = 0;
    
}



char* SSD:: getModel(){
    return model;
}

void SSD:: setSSD(const char* bufferModel, int p){
    model = new char[strlen(bufferModel) + 1];
        strcpy(model, bufferModel);
        price = p;
    
}


void SSD:: print(){
    cout << model << endl;
    cout << price << endl;
}

int SSD:: getPrice(){
    return price;
}


SSD :: ~SSD(){
    delete[] model;
};
