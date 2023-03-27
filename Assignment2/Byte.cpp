//
//  Byte.cpp
//  Assignment2
//
//  Created by Sean Madzelonka on 3/26/23.
//

#include "Byte.hpp"

// Constructor
Byte::Byte() {
    for (int i = 0; i < 8; i++) {
        bits[i] = 0;
    }
}

void Byte::setValue(int value) {
    for (int i = 0; i < 8; i++) {
        bits[i] = (value & (1 << (7 - i))) ? 1 : 0;
    }
}

int Byte::at(int index) {
    return bits[index];
}

std::string Byte::toString() {
    std::string str = "";
    for (int i = 7; i >= 0; i--) {
        str += std::to_string(bits[i]);
    }
    return str;
}

int Byte::toInt() {
    return bitsToInt();
}

int Byte::bitsToInt() {
    int value = 0;
    for (int i = 0; i < 8; i++) {
        value += bits[i] * (1 << (7 - i));
    }
    return value;
}
