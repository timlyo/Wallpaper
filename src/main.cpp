#include "system/program_list.h"
#include "system/program_scanner.h"
#include "image/writer.h"
#include "system/program_manager.h"
#include "image/image.h"

int main() {
	ProgramList programList;
	ProgramScanner programScanner;
	programList = programScanner.scanSetters(programList);

	Size size(1920, 1080);

	Image image(size);

	std::cout << "Writing image" << std::endl;

	Writer::writePNG(image.getImage());

	ProgramManager programManager(programList);
	programManager.setWallpaper();
}