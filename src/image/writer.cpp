#include "writer.h"

void Writer::writePNG(Magick::Image* image) {

	std::string directory = User::getName() + "/Wallpaper.png";

	try {
		image->write(directory);
	}catch (Magick::Exception &error){
		std::cout << error.what() << std::endl;
	}
}
