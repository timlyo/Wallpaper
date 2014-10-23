#include "system/program_list.h"
#include "system/program_scanner.h"
#include "system/program_manager.h"
#include "image/writer.h"

int main() {
	ProgramList programList;
	ProgramScanner programScanner;
	programList = programScanner.scanSetters(programList);

	Size size(1920, 1080);
	Writer::writePNG(size);

	ProgramManager programManager(programList);
	programManager.setWallpaper();
}