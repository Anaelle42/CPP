#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i(1); argv[i]; i++)
    {
		std::string str = argv[i];
        for (size_t j(0); j < str.length(); j++)
			std::cout << (char) toupper(str[j]);
    }
    std::cout << std:: endl;
    return (0);
}