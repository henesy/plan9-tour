#include <u.h>
#include <libc.h>

char*
sqrts(double x)
{
	char *buf = malloc(128 * sizeof(char));
	
	if(x < 0)
		snprint(buf, 128, "%fi", sqrt(-x));
	else
		snprint(buf, 128, "%f", sqrt(x));

	return buf;
}

void
main(int, char*[])
{
	print("%s %s\n", sqrts(2), sqrts(-4));

	exits(nil);
}
