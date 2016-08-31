#include <iostream>
#include "MyArray.h"

int main() {

    MyArray<int> myArray(100);

    myArray.fill(20);

    for(int* s = myArray.begin(); s != myArray.end(); s++){
        std::cout << "Hi number: " << *s << std::endl;
    }

    for(int i = 0; i < 99; ++i){
        std::cout << "Brackets " << myArray[i] << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}