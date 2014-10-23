#include "system/program_list.h"
#include "system/program_scanner.h"
#include "image/writer.h"

int main() {
	ProgramList programList;
	ProgramScanner programScanner;
	programList = programScanner.scanSetters(programList);

	Size size(1920, 1080);
	Writer::writePNG(&size);

	User::getName();

	//ProgramManager programManager(programList);
	//programManager.setWallpaper();
}