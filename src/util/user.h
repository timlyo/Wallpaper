#pragma once

#include <string>
#include <iostream>

#include <pwd.h>
#include <unistd.h>
#include <sys/types.h>

class User{
public:
	std::string static getName();
};