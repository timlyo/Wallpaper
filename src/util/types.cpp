#include "types.h"

Size::Size(int xSize, int ySize):
	xSize(xSize),
	ySize(ySize)
{

}

Magick::Geometry Size::getGeometry() {
	Magick::Geometry geometry;

	geometry.width(xSize);
	geometry.height(ySize);

	return geometry;
}
