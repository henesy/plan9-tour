#include <u.h>
#include <libc.h>
#include <bio.h>

void
main()
{
	Biobuf* out = Bfdopen(1, OWRITE);
	srand(time(0));

	Bprint(out, "My favorite number is %d\n", rand() % 10);
	
	Bterm(out);
	exits(nil);
}
