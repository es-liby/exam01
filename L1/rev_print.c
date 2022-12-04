#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*start;

	if (argc == 2)
	{
		start = *++argv;
		while (**argv != '\0')
			(*argv)++;
		while (--*argv >= start)
			write(1, *argv, 1);
	}
	write(1, "\n", 1);
	return (0);
}
