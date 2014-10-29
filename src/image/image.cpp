#include <unictype.h>
#include "image.h"

Image::Image(Size size) {
	char* argv;

	Magick::InitializeMagick(argv);
	image = new Magick::Image;

	image->size("1920x1080");

	for(int x = 0; x < size.xSize; x++){
		for(int y = 0; y < size.ySize; y++) {
			Magick::ColorRGB pixelColour(Noise::getPosValue(x, y), Noise::getPosValue(x, y*2), Noise::getPosValue(x+2, y+2));

			image->pixelColor(x, y, pixelColour);
		}
	}

	std::cout << "Creating Image" << std::endl;
}

Magick::Image* Image::getImage() {
	return image;
}
