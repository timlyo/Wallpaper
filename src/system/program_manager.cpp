#include "program_manager.h"

ProgramManager::ProgramManager(ProgramList programList) :
		programList(programList) {

}

void ProgramManager::setWallpaper() {
	if (programList.nitrogen) {
		std::system("nitrogen ~/Wallpaper.png --set-auto");
	}
}