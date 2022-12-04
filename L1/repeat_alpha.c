#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 2)
	{
		++argv;
		while (**argv != '\0')
		{
			i = 1;
			if (**argv >= 'b' && **argv <= 'z')
				i = **argv - 96;
			else if (**argv >= 'B' && **argv <= 'Z')
				i = **argv - 64;
			while (i-- > 0)
				write(1, *argv, 1);
			(*argv)++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
