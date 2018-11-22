#include <u.h>
#include <libc.h>

u64int MaxInt	= 1 << 64 -1;
uvlong ToSet	= (uvlong)0 - 1;
s32int z		= -1;

void
main(int, char*[])
{
	print("%ulld\n", MaxInt);
	print("%ulld\n", ToSet);
	print("%d\n", z);

	exits(nil);
}
