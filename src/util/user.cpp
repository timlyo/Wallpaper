#include "user.h"

std::string User::getName() {
	struct passwd *pw = getpwuid(getuid());
	return pw->pw_dir;
}