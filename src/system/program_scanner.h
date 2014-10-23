#pragma once

#include <stdlib.h>
#include <iostream>
#include <string>

#include "program_list.h"

class ProgramScanner {
private:
	bool scanNitrogen();
	bool scanXrandr();
public:
	ProgramList scanSetters(ProgramList programList);
	ProgramList scanScreen(ProgramList programList);
};