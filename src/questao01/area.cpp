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

