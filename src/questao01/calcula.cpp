#include <iostream>
#include "area.h"
#include "perimetro.h"
#include "volume.h"
#include "calcula.h"

using std::cout;
using std::endl;

void calcAreaTriangulo(float base, float altura){
        cout << "Area do Triangulo: " << areaTriangulo(base, altura) << endl;
}

void calcPerimetroTriangulo(float base){
	 cout << "Perimetro do Triangulo: " << perimetroTriangulo(base) << endl;
}

void calcAreaRetangulo(float base, float altura){
	cout << "Area do Retangulo: " << areaRetangulo(base, altura) << endl;
}

void calcPerimetroRetangulo(float base, float altura){
		cout << "Perimetro do Retangulo: " << perimetroRetangulo(base, altura) << endl;
}

void calcAreaQuadrado(float lado){
	cout << "Area do Quadrado: " << areaQuadrado(lado) << endl;
}

void calcPerimetroQuadrado(float lado){
	cout << "Perimetro do Quadrado: " << perimetroQuadrado(lado) << endl;
}

void calcAreaCirculo(float raio){
	cout << "Area do Circulo: " << areaCirculo(raio) << endl;
}

void calcPerimetroCirculo(float raio){
	cout << "Perimetro do Circulo: " << perimetroCirculo(raio) << endl;
}

void calcAreaPiramide(float areaBase, float areaLateral){
	cout << "Area da Piramide: " << areaPiramide(areaBase, areaLateral) << endl;
}


void calcVolumePiramide(float areaBase, float alturaPiramide){
		cout << "Volume da Piramide: " << volumePiramide(areaBase, alturaPiramide) << endl;
}

void calcAreaCubo(float arestaCubo){
	cout << "Area do Cubo: " << areaCubo(arestaCubo) << endl;
}

void calcVolumeCubo(float arestaCubo){
	cout << "Volume do Cubo: " << volumeCubo(arestaCubo) << endl;
}

void calcAreaParalelepipedo(float arestaP1, float arestaP2, float arestaP3){
	cout << "Area do Paralelepipedo: " << areaParalelepipedo(arestaP1, arestaP2, arestaP3) << endl;
}

void calcVolumeParalelepipedo(float arestaP1, float arestaP2, float arestaP3){
	cout << "Volume do Paralelepipedo: " << volumeParalelepipedo(arestaP1, arestaP2, arestaP3) << endl;
}

void calcAreaEsfera(float raioEsfera){
	cout << "Area da Esfera: " << areaEsfera(raioEsfera) << endl;
}

void calcVolumeEsfera(float raioEsfera){
	cout << "Volume da Esfera: " << volumeEsfera(raioEsfera) << endl;
}






























