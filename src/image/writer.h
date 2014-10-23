#include "../util/types.h"

#include <ImageMagick-6/Magick++.h>

#pragma once

class Writer{
public:
	void static writePNG(Size size);
};