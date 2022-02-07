#include <iostream>

 // Currency conversion Try This

 void convert_currency()
 {
    double amount;
    int currency;
    std::cout << "Please enter source currency from the list:" << std::endl;
    std::cout << "1. Yen\n2. Euro\n3. Pound\n4. Yuan\n5. Kroner" << std::endl;
    std::cin >> currency;
    std::cout << "Please enter an amount: ";
    std::cin >> amount;

    switch (currency)
    {
        case 1:
            std::cout << amount << " of JPY is " << amount * 0.0087 << " dollars.";
            break;

        case 2:
            std::cout << amount << " of EUR is " << amount * 1.12 << " dollars.";
            break;

        case 3:
            std::cout << amount << " of GBP is " << amount * 1.35 << " dollars.";
            break;

        case 4:
            std::cout << amount << " of CNY is " << amount * 0.16 << " dollars.";
            break;

        case 5:
            std::cout << amount << " of JPY is " << amount * 0.11 << " dollars.";
            break;
    }
}