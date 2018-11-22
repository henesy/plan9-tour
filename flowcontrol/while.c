#include <u.h>
#include <libc.h>

void
main(int, char*[])
{
	int sum = 1;
	while(sum < 1000)
		sum += sum;

	print("%d\n", sum);

	exits(nil);
}
