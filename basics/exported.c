#include <u.h>
#include <libc.h>
#include "exported.h"

// PI is defined in libc.h:312
double pi = PI;

void
main(int*, char*[])
{
	printnum();

	exits(nil);
}

void
printnum(void)
{
	print("%s's favorite number is: %g\n", name, pi);
}
