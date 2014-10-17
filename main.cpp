#include "program_scanner.h"
#include "program_manager.h"

int main(){
	ProgramScanner programScanner;
	ProgramList programList = programScanner.scanSetters();

	ProgramManager programManager(programList);
	programManager.setWallpaper();
}