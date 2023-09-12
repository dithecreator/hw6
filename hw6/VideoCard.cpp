//
//  VideoCard.cpp
//  hw6
//
//  Created by Дима on 12.09.23.
//

#include "VideoCard.hpp"
#include <iostream>
using namespace std;
VideoCard :: VideoCard(){
    model = nullptr;
    price = 0;

}

char* VideoCard:: getModel(){
    return model;
}


void VideoCard:: setVideoCard(const char* bufferModel, int p){
    model = new char[strlen(bufferModel) + 1];
        strcpy(model, bufferModel);
        price = p;
    
}


void VideoCard:: print(){
    cout << model << endl;
    cout << price << endl;
}



int VideoCard:: getPrice(){
    return price;
}

VideoCard :: ~VideoCard(){
    delete[] model;
};
