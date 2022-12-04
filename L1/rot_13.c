#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		++argv;
		while (**argv != '\0')
		{
			if ((**argv >= 'a' && **argv <= 'm') || (**argv >= 'A'
						&& **argv <= 'M'))
				**argv += 13;
			else if ((**argv >= 'n' && **argv <= 'z')
				|| (**argv >= 'N' && **argv <= 'Z'))
				**argv -= 13;
			write(1, *argv, 1);
			(*argv)++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
