#include "../includes/Harl.hpp"

int main()
{
	Harl harl;
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("null");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("INFO");
	return 0;
}