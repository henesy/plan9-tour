#include <u.h>
#include <libc.h>

#define tf(b) b ? "true" : "false"
typedef u8int bool;

bool c, python, java;

void
main(int, char*[])
{
	int i;
	print("%d, %s, %s, %s\n", i, tf(c), tf(python), tf(java));

	exits(nil);
}
