#include <iostream>
#include "ComparableVector.h"
#include "ComparablePerson.h"

int main() {
    ComparableVector X{1.5, 1, 1}, Y{1, 1, 1};
    std::cout << "Comparison of two vectors:" << std::endl;
    std::cout << "(X < Y) is " << (X<Y? "true": "false") << std::endl;   // false
    std::cout << "(X > Y) is " << (X>Y? "true": "false") << std::endl;   // true
    std::cout << "(X <= Y) is " << (X<=Y? "true": "false") << std::endl; // false
    std::cout << "(X >= Y) is " << (X>=Y? "true": "false") << std::endl; // true

    ComparablePerson person1("Joe", "Freeman"), person2("Joe", "Lastman");
    std::cout << "Comparison of persons fullname:" << std::endl;
    std::cout << "(person1 < person2) is " << (person1<person2? "true": "false") << std::endl;   // true
    std::cout << "(person1 > person2) is " << (person1>person2? "true": "false") << std::endl;   // false
    std::cout << "(person1 <= person2) is " << (person1<=person2? "true": "false") << std::endl; // true
    std::cout << "(person1 >= person2) is " << (person1>=person2? "true": "false") << std::endl; // false
}
