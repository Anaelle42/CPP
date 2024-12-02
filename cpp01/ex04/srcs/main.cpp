#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "x arguments" << std::endl;
		return 0;
	}
	std::ifstream ifs (argv[1]);

	std::string outf = argv[1];
	std::ofstream ofs (outf.append(".replace").c_str());

	std::string line;
	while(std::getline(ifs, line))
	{
		if(line.find(argv[1]))
		{	
			std::cout << "trouve hahaha" << std::endl;
		}
		ofs << line << std::endl;
	}

	ifs.close();
	return 0;
}