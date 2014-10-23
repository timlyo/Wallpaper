#include "writer.h"

void Writer::writePNG(Size size) {
	char* argv;
	Magick::InitializeMagick(argv);
	Magick::Image image(size.getGeometry(), "white");
	image.write("image1.png");
}
