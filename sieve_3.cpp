#include <iostream>
#include <vector>

void sieve_3()
{
    int n {0};
    std::cin >> n;
    std::cout << "\n";
    std::vector <int> primes;
    
    int primes_found {1};

    primes.push_back(2);

    int i {2};
    while(primes_found < n)
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
                primes_found++;
            }
        }
        i++;
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