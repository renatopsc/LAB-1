#include <iostream>
#include <cstdlib>
#include "fatorial.h"
#include "primalidade.h"
using std::cout;
using std::endl;


int main(int argc, char* argv[]){
	int n;
	if (argc != 2){
		cout << "Entrda invalida!" << endl;
		exit(0);
	}else{
		n = atoi(argv[1]);
	}

	if (n==2 || n == 1){
		cout <<"Nao existe numero primo anterior ao fatorial de "<<n<<endl;
	}else{
		cout << "Maior numero primo anterior ao fatorial de "<< n;
		n = fat(n);
		cout <<" eh: "<< primoAnterior(n)<<endl;

	}
	
	return 0;
}
