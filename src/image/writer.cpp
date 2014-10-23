#include "writer.h"

void Writer::writePNG(Size* size) {
	char* argv;
	std::string directory = User::getName() + "/image.png";

	Magick::InitializeMagick(argv);
	Magick::Image image(size->getGeometry(), "white");
	image.write(directory);
}
