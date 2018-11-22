#include <u.h>
#include <libc.h>

double
powd(double x, double n, double lim)
{
	double v;
	v = pow(x, n);
	if(v < lim)
		return v;
	else
		print("%g >= %g\n", v, lim);
	// Can't use v here, though
	return lim;
}

void
main(int, char*[])
{
	print("%f %f\n", powd(3, 2, 10), powd(3, 3, 20));

	exits(nil);
}
