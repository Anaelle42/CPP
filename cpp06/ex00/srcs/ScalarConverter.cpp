#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    return (*this);
}

void toChar(std::string s)
{
    char c = s[0];

    if (std::isprint(s[0]))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;

    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);

    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

void toInt(std::string s)
{
    int i = atoi(s.c_str());

    if (i >= 33 && i <= 126)
    {
        char c = static_cast<char>(i);
        std::cout << "char: " << c << std::endl;
    }
    else
        std::cout << "char: Non displayable" << std::endl;

    float f = static_cast<float>(i);
    double d = static_cast<double>(i);

    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

void toDouble(std::string s)
{
    double d = atof(s.c_str());
    
    if (d >= 33 && d <= 126)
    {
        char c = static_cast<char>(d);
        std::cout << "char: " << c << std::endl;
    }
    else
        std::cout << "char: Non displayable" << std::endl;

    int i = static_cast<int>(d);
    float f = static_cast<float>(d);

    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

void toFloat(std::string s)
{
    float f = strtof(s.c_str(), NULL);

    if (f >= 33 && f <= 126)
    {
        char c = static_cast<char>(f);
        std::cout << "char: " << c << std::endl;
    }
    else
        std::cout << "char: Non displayable" << std::endl;

    int i = static_cast<int>(f);
    double d = static_cast<double>(f);

    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

int    printNan()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
    return (1);
}

int    printInf(char sign)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << sign << "inff" << std::endl;
    std::cout << "double: " << sign << "inf" << std::endl;
    return (1);
}

int isSpecial(std::string s)
{
    if (s.compare("nan") == 0 || s.compare("nanf") == 0)
        return (printNan());
    if (s.compare("+inf") == 0 || s.compare("+inff") == 0)
        return (printInf('+'));
    if (s.compare("-inf") == 0 || s.compare("-inff") == 0)
        return (printInf('-'));
    return (0);
}

void checkString(std::string s)
{
    if (s.empty() || isSpecial(s))
        return ;

    if (s.length() == 1)
        return (toChar(s));
    
    int point = 0;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
            point++;
        else if ((!((i == 0 && (s[i] == '+' || s[i] == '-')) || (i == (s.length() - 1) && s[i] == 'f') || std::isdigit(s[i]))) || point > 1)
        {
            std::cout << "The type conversion is impossible." << std::endl;
            return ;
        }
    }

    if (point == 0)
        return (toInt(s));
    if (s[s.length() - 1] == 'f')
        return (toFloat(s));
    else
        toDouble(s);
}

void ScalarConverter::convert(std::string s)
{
    checkString(s);
}

// overflow et 0?