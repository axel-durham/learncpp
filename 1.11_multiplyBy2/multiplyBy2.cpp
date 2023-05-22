#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    std::cout << "Double that number is: " << (2 * x) << std::endl;

    return 0;
}