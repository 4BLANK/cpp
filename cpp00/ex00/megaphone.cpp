#include <iostream>
#include <string>

int main (int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
			av[i][j] = toupper(av[i][j]);
		std::cout << av[i];
		if (i + 1 != ac)
			std::cout << " ";
	}
	return (0);
}
