#include <iostream>

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "Starting doA()\n";

    doB();

    std::cout << "Ending doA()\n";
}

void doPrint()
{
    std::cout << "In doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";
    // doPrint();
    // doPrint();
    doA();
    std::cout << "Ending main()" << std::endl;

    return 0;
}