#include "../includes/Harl.hpp"

int main()
{
	Harl harl;
	harl.complain("ERROR");
	harl.complain("cat");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("null");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	return 0;
}