#include "area.h"
#include <iostream>
#define PI 3.1415
#include <cmath>
float areaTriangulo(float base, float altura){
	return  (base * altura)/ 2;
}


float areaRetangulo(float base, float altura){
	return base * altura;
}

float areaQuadrado(float lado){
	return pow(lado, 2);

}

float areaCirculo(float raio){
	return PI * pow(raio, 2);
}

float areaPiramide(float areaBase, float areaLateral){
		return areaBase + areaLateral;
}

float areaCubo(float arestaCubo){
		return 6 * pow(arestaCubo,2);
}

float areaParalelepipedo(float arestaP1, float arestaP2, float arestaP3){
	return (2 * arestaP1 * arestaP2) + (2 * arestaP1 * arestaP3) + (2 * arestaP3 * arestaP2);

}

float areaEsfera(float raioEsfera){
	return 4 * PI * pow(raioEsfera,2);
}

