#include "std_lib_facilities.h"

int main()
{
    // Currency conversion Try This
    double amount;
    int selection;
    std::cout << "Please enter an amount: ";
    std::cin >> amount;
    std::cout << "Please select a currency: 1. Yen, 2. Euro, 3. Pound" << std::endl;
    std::cin >> selection;

    if (selection == 1)
        cout << amount << " of yen is " << amount * 0.0088 << " dollars.";
    else if (selection == 2)
        cout << amount << " of euros is " << amount * 1.13 << " dollars.";
    else if (selection == 3)
        cout << amount << " of pounds is " << amount * 1.35 << " dollars.";

    return 0;
}