#include <u.h>
#include <libc.h>

void
main(int, char*[])
{
	int i, sum = 0;
	for(i = 0; i < 10; i++)
		sum += i;

	print("%d\n", sum);

	exits(nil);
}
