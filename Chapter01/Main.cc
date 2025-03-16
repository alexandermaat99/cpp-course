#include <iostream>


int generateNumber()
{
    return 5;
}

int main()
{
    int userGuess{};
    std::cout << "Guess a number";
    std::cin >> userGuess;
    std::cout << userGuess;
}
