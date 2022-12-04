#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		++argv;
		while (**argv != '\0')
		{
			if (**argv >= 'a' && **argv <= 'z')
				**argv -= 32;
			else if (**argv >= 'A' && **argv <= 'Z')
				**argv += 32;
			write(1, *argv, 1);
			(*argv)++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
