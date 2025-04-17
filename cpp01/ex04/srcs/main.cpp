#include <iostream>
#include <fstream>

void ft_replace(std::string& str, std::string s1, std::string s2)
{
	if (s1.empty())
		return ;
	size_t pos = 0;
	while ((pos = str.find(s1, pos)) != std::string::npos)
	{	
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos += s2.length();
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return 1;
	}

	std::ifstream ifs (argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error opening file" << std::endl;
		return 1;
	}

	std::string outf = argv[1];
	std::ofstream ofs (outf.append(".replace").c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error opening file" << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(ifs, line))
	{
		ft_replace(line, argv[2], argv[3]);
		ofs << line << std::endl;
	}
	return 0;
}