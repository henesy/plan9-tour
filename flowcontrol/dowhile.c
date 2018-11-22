#include <u.h>
#include <libc.h>

void
main(int, char*[])
{
	int sum = 1;
	do
		sum += sum;
	while(sum < 1000);

	print("%d\n", sum);

	exits(nil);
}
