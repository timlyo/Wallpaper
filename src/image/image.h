#pragma once

#include "../util/types.h"
#include "../util/noise.h"

#include <iostream>
#include <ImageMagick-6/Magick++.h>

class Image {
	Magick::Image *image;
public:
	Image(Size size);
	Magick::Image* getImage();
};