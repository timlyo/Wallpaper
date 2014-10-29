#include "noise.h"
#include <cmath>


double Noise::getValue(float x, float y) {
	noise::module::Perlin noiseModule;
	double value = noiseModule.GetValue(x/100, y/100, 0.5);
	return value;
}

double Noise::getPosValue(float x, float y) {
	return std::abs(Noise::getValue(x, y));
}