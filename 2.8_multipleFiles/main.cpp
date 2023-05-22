#include <iostream>

int getInteger();

int main()
{
    int x {};
    int y {};

    x = getInteger();
    y = getInteger();

    std::cout << x << " + " << y << " is " << x + y << std::endl;

    return 0;
}