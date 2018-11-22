#include <u.h>
#include <libc.h>

#define true 1
#define false 0
#define tf(b) b ? "true" : "false"
typedef u8int bool;

int i = 1, j = 2;

void
main(int, char*[])
{
	bool c = true, python = false;
	char *java = "no!";
	
	print("%d %d %s %s %s\n", i, j, tf(c), tf(python), java);

	exits(nil);
}
