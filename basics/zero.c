#include <u.h>
#include <libc.h>

void
main(int, char*[])
{
	int i;
	double d;
	char* s;
	
	print("%d %f %s\n", i, d, s);

	exits(nil);
}
