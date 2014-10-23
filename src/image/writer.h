#include "../util/types.h"
#include "../util/user.h"


#include <ImageMagick-6/Magick++.h>
#include <iostream>

#pragma once

class Writer{
public:
	void static writePNG(Size* size);
};