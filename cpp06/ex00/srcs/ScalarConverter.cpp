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

	if (c >= 33 && c <= 126)
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void toInt(std::string s)
{
	int i = atoi(s.c_str());

	if ((i == -1 && s[0] != '-' ) || i != atol(s.c_str()))
	{
		std::cout << "Conversion overflows" << std::endl;
		return ;
	}

	if (i >= 33 && i <= 126)
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void toDouble(std::string s)
{
    double d = std::strtod(s.c_str(), NULL);

    if (d >= 33 && d <= 126)
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;

    if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;

    std::cout << "float: " << std::fixed << std::setprecision(2) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(2) << d << std::endl;
}

void toFloat(std::string s)
{
    float f = std::strtof(s.c_str(), NULL);

	if (f >= 33 && f <= 126)
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	else
		std::cout << "char: imposible" << std::endl;

	if (f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN))
		std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(f) << std::endl;

    std::cout << "float: " << std::fixed << std::setprecision(2) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(2) << static_cast<double>(f) << std::endl;
}

int	printNan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	return (1);
}

int	printInf(char sign)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << sign << "inff" << std::endl;
	std::cout << "double: " << sign << "inf" << std::endl;
	return (1);
}

int isSpecial(std::string s)
{
	if (!s.compare("nan") || !s.compare("nanf"))
		return (printNan());
	if (!s.compare("+inf") || !s.compare("+inff"))
		return (printInf('+'));
	if (!s.compare("-inf") || !s.compare("-inff"))
		return (printInf('-'));
	return (0);
}

void ScalarConverter::convert(std::string s)
{
	if (s.empty() || isSpecial(s))
		return ;

	if (s.length() == 1 && !isdigit(s[0]))
		return (toChar(s));
	
	int point = 0;

	for (size_t i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
			point++;
		else if ((!((i == 0 && (s[i] == '+' || s[i] == '-')) || (i == (s.length() - 1) && s[i] == 'f')
			|| std::isdigit(s[i]))) || point > 1 || s[s.length() - 1] == '.')
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