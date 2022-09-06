
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int age;
    std::cout << "Sua idade: ";
    std::cin >> age;

    if (age>=18){
        std::cout << "Maior de idade!" << std::endl;
    }

    else{
        std::cout << "Menor de idade!" << std::endl;
    }
    return 0;
}