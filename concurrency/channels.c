#include <u.h>
#include <libc.h>
#include <thread.h>

Channel *c;

void
sum(void *arg)
{
	int i, len;
	int *sum = calloc(1, sizeof(int));
	int *s = (int*)arg;
	
	len = sizeof(s) / sizeof(int) +1;

	for(i = 0; i < len; i++)
		*sum += s[i];

	send(c, sum);
	threadexits(nil);
}

void
threadmain(int, char *[])
{
	int x, y;
	
	int s₀[] = {-9, 4, 0};
	int s₁[] = {7, 2, 8};

	c = chancreate(sizeof(int), 0);
	proccreate(sum, s₀, 8 * 1024);
	proccreate(sum, s₁, 8 * 1024);

	recv(c, &x);
	recv(c, &y);
	
	print("%d %d %d\n", x, y, x+y);
	
	threadexitsall(nil);
}
