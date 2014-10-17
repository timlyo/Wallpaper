#include <fstream>
#include "program_scanner.h"



ProgramList ProgramScanner::scanSetters(){
	ProgramList programList;
	
	programList.nitrogen = scanNitrogen();

	if(programList.nitrogen)
		std::cout << "Found nitrogen" << std::endl;
	else
		std::cout << "No usable program found" << std::endl;

	return programList;
}

bool ProgramScanner::scanNitrogen(){
	std::ifstream file("/usr/bin/nitrogen");
	if(file != NULL)
		return true;
	return false;
}