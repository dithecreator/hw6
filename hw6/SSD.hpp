//
//  SSD.hpp
//  hw6
//
//  Created by Дима on 12.09.23.
//

#ifndef SSD_hpp
#define SSD_hpp
#include <stdio.h>


class SSD{
private:
    char* model;
    int price;
    
public:
    SSD();
    char* getModel();
    void print();
    void setSSD(const char*, int);
    int getPrice();
    ~SSD();
    

};

#endif /* SSD_hpp */
