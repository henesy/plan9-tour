#include <u.h>
#include <libc.h>

const s64int Big = 1 << 100;

int
needint(int x) { return x*10 + 1; }

double
needfloat(double x) { return x * 0.1; }

void
main(int, char*[])
{
	// This is a bad exercise for equivalence -- maybe revise
	const s64int Small = Big >> 99;

	print("%d\n", needint(Small));
	print("%f\n", needfloat(Small));
	print("%e\n", needfloat(Big));

	exits(nil);
}
