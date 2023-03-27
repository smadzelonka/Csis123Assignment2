//
//  Byte.hpp
//  Assignment2
//
//  Created by Sean Madzelonka on 3/26/23.
//

#ifndef Byte_hpp
#define Byte_hpp

#include <stdio.h>
#include <string>

class Byte {
public:
    Byte(); // Constructor
    void setValue(int value);
    int at(int index);
    std::string toString();
    int toInt();

private:
    int bits[8];
    int bitsToInt();
};

#endif /* Byte_hpp */
