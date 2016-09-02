#include <iostream>
#include "MyArray.h"
#include "ArrayTools.h"

int main() {

    MyArray<double,100> myArray;

    myArray.fill(20);

    for(auto* s = myArray.begin(); s != myArray.end(); s++){
        std::cout << "Hi number: " << *s << std::endl;
    }

    for(int i = 0; i < 100; ++i){
        myArray[i] = i;
        std::cout << "Brackets " << myArray[i]<< std::endl;
    }

    auto* found = myfind(myArray.begin(), myArray.end(), 32);
    if(found != myArray.end())
        std::cout << "Hello, World! I found: " << *found << std::endl;
    return 0;
}