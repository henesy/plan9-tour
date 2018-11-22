#include <u.h>
#include <libc.h>

void
main(int, char*[])
{
	int x = 3, y = 4;
	double d = sqrt((double)x*x + y*y);
	uint z = (uint)d;
	print("%d %d %ud\n", x, y, z);

	exits(nil);
}
