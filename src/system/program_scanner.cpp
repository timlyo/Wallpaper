#include <fstream>
#include "program_scanner.h"

//
// wallpaper programs
//

ProgramList ProgramScanner::scanSetters(ProgramList programList) {

	programList.nitrogen = scanNitrogen();

	if (programList.nitrogen)
		std::cout << "Found nitrogen" << std::endl;
	else
		std::cout << "No usable program found for setting wallpaper. Nitrogen is recommended" << std::endl;

	return programList;
}


bool ProgramScanner::scanNitrogen() {
	std::ifstream file("/usr/bin/nitrogen");
	if (file != NULL)
		return true;
	return false;
}

//
// screen programs
//

ProgramList ProgramScanner::scanScreen(ProgramList programList) {
	programList.xrandr = scanXrandr();

	if(programList.xrandr)
		std::cout << "Found Xrandr" << std::endl;
	else
		std::cout << "No usable program found for getting screen spec. xrandr is recommended" << std::endl;

	return programList;
}

bool ProgramScanner::scanXrandr(){
	std::ifstream file("/usr/bin/xrandr");
	if (file != NULL)
		return true;
	return false;
}

