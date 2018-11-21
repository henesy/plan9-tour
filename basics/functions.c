#include <u.h>
#include <libc.h>

int
add(int x, int y)
{
	return x + y;
}

void
main(int, char*[])
{
	print("%d\n", add(42, 13));

	exits(nil);
}
