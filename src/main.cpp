int main(){
	ProgramScanner programScanner;
	ProgramList programList = programScanner.scanSetters();

	ProgramManager programManager(programList);
	programManager.setWallpaper();
}