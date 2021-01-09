#include <u.h>
#include <libc.h>
#include <bio.h>
#include <String.h>


void
main(int, char *[])
{
	String	*s₀, *s₁, *s₂;
	Biobuf *user, *snarf, *stdout;
	int userfd, snarfd, n;
	
	// From a char*
	s₀ = s_copy("☺☹☻");
	print("%s\n", s_to_c(s₀));
	
	// Using bio
	s₁ = s_new();
	stdout = Bfdopen(1, OWRITE);
	userfd = open("/dev/user", OREAD);
	snarfd = open("/dev/snarf", OWRITE);
	user = Bfdopen(userfd, OREAD);
	snarf = Bfdopen(snarfd, OWRITE);
	
	n = s_read(user, s₁, 30);
	Bprint(stdout, "read %d bytes ⇒ %s\n", n, s_to_c(s₁));
	
	// Between strings
	s₂ = s_append(s₁, s_to_c(s₀));
	Bprint(stdout, "concatenated = %s\n", s_to_c(s₂));

	// Free
	s_free(s₀);
	s_free(s₁);
	s_free(s₂);
	Bterm(user);
	Bterm(snarf);
	Bterm(stdout);
	
	exits(nil);
}
