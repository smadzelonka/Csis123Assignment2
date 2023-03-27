//
//  main.cpp
//  Sean
//  Madzelonka
//  0266099
//  03/26/23.
//  Assignment2
//
//  Created by Sean Madzelonka on 3/26/23.
//

#include <iostream>
#include "Byte.hpp"

using namespace std;

int main() {
    Byte bite;
    bite.setValue(99);

    for (int i = 0; i < 8; i++) {
        cout << bite.at(i) << endl;
    }

    cout << "Int:    " << bite.toInt() << endl;
    cout << "String: " << bite.toString() << endl;

    return 0;
}
