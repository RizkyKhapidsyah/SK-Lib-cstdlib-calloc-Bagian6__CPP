#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int* p1 = (int*)std::calloc(4, sizeof(int)); // allocate and zero out an array of 4 int
    int* p2 = (int*)std::calloc(1, sizeof(int[4])); // same, naming the array type directly
    int* p3 = (int*)std::calloc(4, sizeof * p3);   // same, without repeating the type name

    if (p2) {
        for (int n = 0; n < 4; ++n) {
            // print the array
            std::cout << "p2[" << n << "] == " << p2[n] << '\n';
        }
    }
        
    std::free(p1);
    std::free(p2);
    std::free(p3);

    _getch();
    return 0;
}