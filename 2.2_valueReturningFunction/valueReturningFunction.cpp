#include <iostream>

int getIntFromUser()
{
    std::cout << "Enter an integer: ";
    int input {};
    std::cin >> input;

    return input;
}


int main()
{
    int x { getIntFromUser() };
    int y { getIntFromUser() };

    std::cout << x << " + " << y << " = " << x + y << std::endl;

    return 0;
}