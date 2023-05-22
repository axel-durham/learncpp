#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int x = {4};
    // cin doesn't work in vscode, run in an external terminal
    std::cin >> x;

    std::cout << "You entered " << x << '\n';
    return 0;
}