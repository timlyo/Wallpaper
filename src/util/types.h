#pragma once

#include <string>
#include <ImageMagick-6/Magick++.h>

class Size{
public:
	int xSize;
	int ySize;

	Size(int xSize, int ySize);

	Magick::Geometry getGeometry();
};