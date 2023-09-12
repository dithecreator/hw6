//
//  main.cpp
//  hw6
//
//  Created by Дима on 12.09.23.
//

#include <iostream>
#include "RAM.hpp"
#include "CPU.hpp"
#include "SSD.hpp"
#include "VideoCard.hpp"
#include "Laptop.hpp"
using namespace std;





int main() {
    Laptop laptop("8GB RAM", 100, "NVIDIA GTX 1650", 250, "512GB SSD", 120, "Intel Core i5", 300);
    laptop.inputModel(1000);
    laptop.print();
    cout << endl;
    cout << endl;

    Laptop laptop1("8GB RAM", 100, "NVIDIA GTX 1650", 250, "512GB SSD", 120, "Intel Core i5", 300);
    laptop1.inputModel(750);
    laptop1.print();
    cout << endl;
    cout << endl;
    
    
    cout << "количество ноутбуков: " << Laptop::laptopsAmount << endl;

}
