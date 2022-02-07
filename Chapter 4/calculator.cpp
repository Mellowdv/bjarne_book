#include <iostream>
#include <string>

void calculator()
{
    double val1;
    double val2;
    std::string operation;

    std::cin >> val1 >> val2 >> operation;


    if (operation == "+")
    {
        std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << "\n";
    }
    else if (operation == "-")
    {
        std::cout << "The difference of " << val1 << " and " << val2 << " is " << val1 - val2 << "\n";
    }
    else if (operation == "*")
    {
        std::cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << "\n";
    }
    else if (operation == "/")
    {
        std::cout << "The quotient of " << val1 << " and " << val2 << " is " << val1 / val2 << "\n";
    }
    else
    {
        std::cout << "I'm a computer, I can only take +, -, *, /" << "\n";
    }

}