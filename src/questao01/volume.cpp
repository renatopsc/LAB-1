#include "volume.h"
#include <iostream>
#include <cmath>
#define PI 3.1415
using std::cout;

float volumePiramide(float areaBase, float alturaPiramide){	
	return (areaBase * alturaPiramide) * 1/3;
}

float volumeCubo(float arestaCubo){
	return  pow(arestaCubo,3);
}

float volumeParalelepipedo(float arestaP1, float arestaP2, float arestaP3){
	return arestaP1 * arestaP2 * arestaP3;
}

float volumeEsfera(float raioEsfera){
	return (4/3) * PI * pow(raioEsfera,3);
}
