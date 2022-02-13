#include <iostream>
#include <exception>
#include <string>
#include <vector>
#include <climits>
#include "std_lib_facilities.h"

int main()
{
    std::cout << "Welcome to the Bulls and Cows game.\nFirst you will be prompted for a number to generate an answer.";
    std::cout << "\nThen you'll guess the 4 digit answer until you've won.";
    int seed {0};
    int number {0};
    vector<int> guess {0, 0, 0, 0};
    vector<int> answer{0, 0, 0, 0};
    bool playing {true};


    while (playing)
    {

        std::cout << "\nPlease input a number to start or anything else to quit: ";
        if (std::cin >> seed)
            std::cout << "\nGenerating a seed...";
        else
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            seed = 0;
            break;
        }
        srand(seed);
        for (int s = 0; s < answer.size(); s++)
        {
            answer.at(s) = randint(10);
        }
        int bulls {0};
        int cows {0};
        while (bulls < 4)
        {
        std::cout << "\nPlease enter a guess (4 digits (0-9) separated by spaces): ";
        for (int i = 0; i < guess.size(); i++)
        {
            if (std::cin >> number)
                guess.at(i) = number;
            else
            {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                guess.at(i) = 0;
                std::cout << "\nThat was not a number, it's a 0 now >:|";
            }
        }
        for (int j = 0; j < guess.size(); j++)
        {
            for(int k = 0; k < guess.size(); k++)
            {
                if (k == j && guess.at(j) == answer.at(j))
                    bulls++;
                else if (guess.at(k) == answer.at(j))
                    cows++;
            }
        }
        std::cout << bulls << " bulls, " << cows << " cows.\n";
        if (bulls < 4)
            bulls = 0;
        else
            std::cout << "Congrats, that's the correct guess.";
        cows = 0;
        }
    }
    
    return 0;
}