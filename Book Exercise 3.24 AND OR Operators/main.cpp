//
//  main.cpp
//  Book Exercise 3.24 AND OR Operators
//
//  Created by ax on 9/7/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    cout << "Testing AND OR Operators with Integer Division"  << endl;
    
    // Data
    int integer_input = 0;
    bool div_by_5 = 0;
    bool div_by_6 = 0;
    
    // Input
    cout << "Enter an integer: ";
    cin >> integer_input;
    
    // Processing
    
    // modulus test for divisibility
    div_by_5 = integer_input % 5 == 0 ? 1 : 0;
    div_by_6 = integer_input % 6 == 0 ? 1 : 0;
    
    // Output
    if (div_by_5 && div_by_6) {
        cout << "TTF"  << endl;
        cout << "Is " << integer_input << " divisible by 5 and 6? True" << endl;
        cout << "Is " << integer_input << " divisible by 5 or 6? True" << endl;
        cout << "Is " << integer_input << " divisible by 5 or 6, but not both? False" << endl;
        
    } else if (div_by_5 || div_by_6) {
        cout << "FTT"  << endl;
        cout << "Is " << integer_input << " divisible by 5 and 6? False" << endl;
        cout << "Is " << integer_input << " divisible by 5 or 6? True" << endl;
        cout << "Is " << integer_input << " divisible by 5 or 6, but not both? True" << endl;
        
    } else if ((div_by_5 || div_by_6) && !(div_by_5 && div_by_6)) {
        cout << "FTT"  << endl;
        cout << "Is " << integer_input << " divisible by 5 and 6? False" << endl;
        cout << "Is " << integer_input << " divisible by 5 or 6? True" << endl;
        cout << "Is " << integer_input << " divisible by 5 or 6, but not both? True" << endl;
    } else {
        cout << "Err: 0 Case"  << endl;
        cout << "Is " << integer_input << " divisible by 5 and 6? False" << endl;
        cout << "Is " << integer_input << " divisible by 5 or 6? False" << endl;
        cout << "Is " << integer_input << " divisible by 5 or 6, but not both? False" << endl;
    }
    
    return 0;
}

