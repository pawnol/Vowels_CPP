/*
Vowels
Pawelski
4/5/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>

int main()
{
    char letter;
    std::cout << "Enter a lowercase letter >> ";
    std::cin >> letter;
    switch (letter)
    {
    case 'a':
        std::cout << "apple\n";
        break;
    case 'e':
        std::cout << "egg\n";
        break;
    case 'i':
        std::cout << "ice\n";
        break;
    case 'o':
        std::cout << "orange\n";
        break;
    case 'u':
        std::cout << "udon\n";
        break;
    default:
        std::cout << "Yuck, a consonant...\n";
        break;
    }
    return 0;
}
