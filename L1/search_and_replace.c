#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 4 && argv[2][1] == '\0' && argv [3][1] == '\0')
	{
		++argv;
		while (**argv != '\0')
		{
			/* *argv[1] because we increment argv, thus argv[1] in
			 * this new array is the argv[2] in the previous one */
			if (**argv == *argv[1])
				**argv = *argv[2];
			write(1, *argv, 1);
			(*argv)++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
