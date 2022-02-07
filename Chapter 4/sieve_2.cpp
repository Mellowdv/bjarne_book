#include <iostream>
#include <vector>

void sieve_2()
{
    int n {0};
    std::cin >> n;
    
    int characters_printed {0};

    std::vector<bool> primes;
    primes.push_back(false);
    primes.push_back(false);

    for (int i = 2; i <= n; i++)
    {
        primes.push_back(true);
    }

    for (int j = 0; j <= n; j++)
    {
        if (!(primes.at(j)))
        {
            continue;
        }
        else
        {
            std::cout << j << " ";
            characters_printed++;
            if (!(characters_printed % 5))
            {
                std::cout << std::endl;
            }
            for (int k = j * j; k <= n; k += j)
            {
                primes.at(k) = false;
            }
        }
    }

}