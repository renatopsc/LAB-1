#include <iostream>
#include "primalidade.h"
using std::cout;
using std::endl;

int primoAnterior(int n){
	
	int i;
	int count = 0;
	
	for(i=1; i <=n; i++){
		if(n % i ==0){
			count++;
		}
	}
	if(count <=2){
			return n;
		}else{
			return primoAnterior(n-1);
		}
	return 0;
}


