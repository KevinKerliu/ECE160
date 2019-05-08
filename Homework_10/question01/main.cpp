#include <iostream>
#include "two.h"

namespace ns = mynamespace;

void ns::functionDeclaration01(){
    std::cout << "Entering functionDeclaration01" << std::endl;
    std::cout << "Exiting functionDeclaration01" << std::endl;
}

void ns::functionDeclaration02(){
    std::cout << "Entering functionDeclaration02" << std::endl;
    ns::functionDeclaration01();
    std::cout << "Exiting functionDeclaration02" << std::endl;
}

void ns::functionDeclaration03(){
    using namespace ns;
    std::cout << "Entering functionDeclaration03" << std::endl;
    functionDeclaration01();
    functionDeclaration02();
    std::cout << "Exiting functionDeclaration03" << std::endl;
}

int main(){
    using namespace ns;
    functionDeclaration01();
    functionDeclaration02();
    functionDeclaration03();
    return 0;
}
