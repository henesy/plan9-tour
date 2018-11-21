#include <u.h>
#include <libc.h>

char**
swap(char *arr₀[])
{
	char *arr₁[] = {arr₀[1], arr₀[0]};

	return arr₁;
}

void
main(int, char*[])
{
	char *arr₀[] = {"hello", "world"};
	char **arr₁ = swap(arr₀);
	print("%s, %s\n", arr₁[0], arr₁[1]);

	exits(nil);
}
