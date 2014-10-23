#include "writer.h"

#include <ImageMagick-6/Magick++.h>

void Writer::writePNG() {
	char* argv;
	Magick::InitializeMagick(argv);
	Magick::Image image("100x100", "white");
	image.write("image1.png");
}
