//
//  main.cpp
//  Project-1
//
//  Created by Golpar J on 1/29/19.
//  Copyright © 2019 Golpar J. All rights reserved.
//

#include <iostream>
using namespace std; //or you can not write it, but when writing cout, write: std::cout<<i<<std::endl;

//int says that return and repeat it
int main(int argc, const char * argv[]) {
    
    // Write a program to print all even numbers between 1 to 100 backwards except 44
    for (int i=100; i>1; i=i-2) {
        if (i != 44) {
            cout << i <<endl;
        }
    }
    return 0; //gets main out
}
