#include "perimetro.h"
#include <iostream>
#define PI 3.1415

float perimetroTriangulo(float base){

	return base + base + base;
}

float perimetroRetangulo(float base, float altura){

	return 2 * (base + altura);
}

float perimetroQuadrado(float lado){
	return 4 * lado;
}

float perimetroCirculo(float raio){
	return 2 * PI * raio;
}
