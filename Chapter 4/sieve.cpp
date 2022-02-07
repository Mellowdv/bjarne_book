#include <iostream>
#include <vector>

void sieve()
{
    int n {0};
    std::cin >> n;
    std::cout << "\n";
    std::vector <int> primes;

    primes.push_back(2);

    for (int i = 3; i <= n; i++)
    {
        for (int j = 0; j < primes.size(); j++)
        {
            if (i % primes.at(j) == 0)
            {
                break;
            }
            else if (j == primes.size() - 1)
            {
                primes.push_back(i);
            }
        }
    }

    for (int j = 0; j < primes.size(); j++)
    {
        std::cout << primes.at(j) << " ";
        if (((j + 1) % 5) == 0)
        {
            std::cout << std::endl;
        }
    }

}