#include <iostream>
#include <vector>
#include "std_lib_facilities.h"

void median()
{
    vector<double> temps;
    for(double temp; std::cin >> temp;)
    {
        temps.push_back(temp);
    }

    double sum = 0;
    for (int x: temps) sum += x;
    std::cout << "The average temperature is: " << sum / temps.size() << "\n";

    sort(temps);
    if (temps.size() % 2)
    {
        std::cout << "The median temperature is: " << temps[temps.size() / 2] << "\n";
    }
    else
    {
        std::cout << "The median temperature is: " << (temps[temps.size() / 2] + temps[(temps.size() / 2) - 1]) / 2 << "\n";
    }

}