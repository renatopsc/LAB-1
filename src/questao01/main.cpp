#include <iostream>
#include <cstdlib>
#include "area.h"
#include "perimetro.h"
#include "calcula.h"
#include "volume.h"

using std::cin;
using std::cout;
using std::endl;

int main(){

	int opc;
	

	do{
		system("clear");
		cout <<"Calculadora de Geometria Plana e Espacial"<< endl;	
		cout <<"(1)Triangulo equilatero"<<endl;
		cout <<"(2)Retangulo"<<endl;
		cout <<"(3)Quadrado"<<endl;
		cout <<"(4)Circulo"<<endl;
		cout <<"(5)Piramide com base quadrangular"<<endl;
		cout <<"(6)Cubo"<<endl;
		cout <<"(7)Paralelepipedo"<<endl;
		cout <<"(8)Esfera"<<endl;
		cout <<"(0)Sair"<<endl;
		cout <<"Digite sua opcao: ";
		cin >> opc;

	switch(opc){
		case 1: 
			float baseTriangulo;
			float alturaTriangulo;
			cout << "Digite o tamanho da base do triangulo: ";
			cin >> baseTriangulo;
			cout << "Digite o tamanho da altura do triangulo :";
			cin >> alturaTriangulo;
			calcAreaTriangulo(baseTriangulo, alturaTriangulo);
			calcPerimetroTriangulo(baseTriangulo);
			
			break;
		case 2: 
			float baseRetangulo;
			float alturaRetangulo;			
			cout << "Digite a base do retangulo: ";
			cin >> baseRetangulo;
			cout << "Digte a altura do retangulo: ";
			cin >> alturaRetangulo;
			calcAreaRetangulo(baseRetangulo, alturaRetangulo);
			calcPerimetroRetangulo(baseRetangulo, alturaRetangulo);			
			break;
		case 3: 
			float ladoQuadrado;			
			cout << "Digite o lado do quadrado: ";
			cin >> ladoQuadrado;
			calcAreaQuadrado(ladoQuadrado);
			calcPerimetroQuadrado(ladoQuadrado);
			break;
		case 4: 
			float raio;
			cout << "Digite o raio do circulo: ";
			cin >> raio;
			calcAreaCirculo(raio);	
			calcPerimetroCirculo(raio);			
			break;
		case 5: 

			float areaBase;
			float areaLateral;
			float alturaPiramide;
			cout << "Digite a area da base do triangulo: ";
			cin >> areaBase;
			cout << "Digite a area da lateral do triangulo: ";
			cin >> areaLateral;
			cout << "Digite a altura da piramide: ";
			cin >> alturaPiramide;
			calcAreaPiramide(areaBase, areaLateral);
			calcVolumePiramide(areaBase, alturaPiramide);
			break;
		case 6: 
			float arestaCubo;
			cout << "Digite o tamanho das arestas do cubo:";
			cin >> arestaCubo;
			calcAreaCubo(arestaCubo);
			calcVolumeCubo(arestaCubo);	
		
			break;
		case 7: 
			float arestaP1;
			float arestaP2;
			float arestaP3;	
			cout << "Digite o tamanho da aresta 1 do paralelepipedo: ";
			cin >> arestaP1;
			cout << "Digite o tamanho da aresta 2 do paralelepipedo: ";
			cin >> arestaP2;
			cout << "Digite o tamanho da aresta 3 do paralelepipedo: ";
			cin >> arestaP3;
			calcAreaParalelepipedo(arestaP1, arestaP2, arestaP3);
			calcVolumeParalelepipedo(arestaP1, arestaP2, arestaP3);	
			break;
		case 8: 
			float raioEsfera;
			cout << "Digite o raio da esfera:";
			cin >> raioEsfera;
			calcAreaEsfera(raioEsfera);
			calcVolumeEsfera(raioEsfera);

			break;
		case 0: 
			cout << "Sair" << endl;
			exit(0);
			break;
	
		default:
			cout <<"Entrada invalida!" << endl;
			break;
	}


	//system("clear");
	}while(opc < 0 || opc > 8);
	








	return 0;
}
