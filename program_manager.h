#pragma once

#include <iostream>
#include <stdlib.h>

#include "program_list.h"

class ProgramManager{
	ProgramList programList;
public:
	ProgramManager(ProgramList programList);

	void setWallpaper();
};