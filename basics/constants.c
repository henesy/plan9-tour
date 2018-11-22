#include <u.h>
#include <libc.h>

#define true 1
#define tf(b) b ? "true" : "false"

const double Pi = 3.14;

void
main(int, char*[])
{
	const char* World = "世界";
	print("Hello %s\n", World);
	print("Happy %f Day\n", Pi);
	
	const Truth = true;
	print("Plan 9 rules? %s\n", tf(Truth));

	exits(nil);
}
