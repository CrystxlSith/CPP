#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
	int	i = 1;
	int j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		if (argv[i + 1])
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return 0;
}
