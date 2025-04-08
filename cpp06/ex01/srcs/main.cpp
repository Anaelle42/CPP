#include "../includes/Serializer.hpp"

int main()
{
	Data data;
	data.nb = 10;
	data.type = "int";

	std::cout << &data << ": " << data.type << " " << data.nb << std::endl;

	Data *ptr = Serializer::deserialize(Serializer::serialize(&data));
	std::cout << ptr << ": " << ptr->type << " " << ptr->nb << std::endl;

	return (0);
}