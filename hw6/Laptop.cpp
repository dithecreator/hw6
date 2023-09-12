//
//  Laptop.cpp
//  hw6
//
//  Created by Дима on 12.09.23.
//
#include "Laptop.hpp"
#include <iostream>
using namespace std;

int Laptop:: laptopsAmount = 0;

Laptop :: Laptop(){
    model = nullptr;
    price = 0;
}


void Laptop :: inputModel(int LaptopPrice){
    char buffer[100];
    cout << "enter a mark of the laptop: ";
    cin >> buffer;
    model = new char[strlen(buffer) + 1];
    strcpy(model, buffer);
    price = LaptopPrice;
}




Laptop::Laptop(const char* ramModel, int ramPrice, const char* videoCardModel, int videoCardPrice, const char* ssdModel, int ssdPrice, const char* cpuModel, int cpuPrice)
    :ram(), ssd(), videocard(), cpu() {
    ram.setRAM(ramModel, ramPrice);
    ssd.setSSD(ssdModel, ssdPrice);
    videocard.setVideoCard(videoCardModel, videoCardPrice);
    cpu.setCPU(cpuModel, cpuPrice);
        ++laptopsAmount;
        cout << "successful" << endl;
}

Laptop:: Laptop(const Laptop& laptop){
    model = new char[strlen(laptop.model) + 1];
    strcpy(model, laptop.model);
    price = laptop.price;
}

void Laptop::print() {
    cout << "Laptop Model: " << model << ", Price: " << price << endl;
    cout << "RAM: ";
    ram.print();
    cout << "SSD: ";
    ssd.print();
    cout << "Video Card: ";
    videocard.print();
    cout << "CPU: ";
    cpu.print();
}

Laptop getLaptop() {
    Laptop a;
    a.inputModel(1000);
    return a;
}

Laptop::  ~Laptop(){
    delete[] model;
}
