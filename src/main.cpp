#include "program_list.h"
#include "program_scanner.h"
#include "program_manager.h"
#include "image/writer.h"

int main() {
	ProgramScanner programScanner;
	ProgramList programList = programScanner.scanSetters();

	Writer::writePNG();


	ProgramManager programManager(programList);
	programManager.setWallpaper();
}