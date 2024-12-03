#include <iostream>
#include <fstream>
#include <string.h>

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return 0;
	}

	std::ifstream ifs (argv[1]);
	// check et tout
	std::string outf = argv[1];
	std::ofstream ofs (outf.append(".replace").c_str());

	std::string line;
	while(std::getline(ifs, line))
	{
		if(line.find(argv[2]))
		{	
			std::cout << "trouve hahaha" << std::endl;
			size_t pos = line.find(argv[2]);
			size_t len = strlen(argv[2]);
			// line.erase(pos, len);
			line.insert(pos, argv[3]);
			(void)pos; (void) len;
		}
		ofs << line << std::endl;
	}

	ifs.close();
	return 0;
}