#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		++argv;
		while (**argv != '\0')
		{
			if ((**argv >= 'a' && **argv <= 'y') || (**argv >= 'A' &&
						**argv <= 'Y'))
				**argv += 1;
			else if (**argv == 'z' || **argv == 'Z')
				**argv = 'a';
			write(1, *argv, 1);
			(*argv)++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
