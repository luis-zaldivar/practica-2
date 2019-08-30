#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numeros[10],*puntero;
	int mayor=INT_MIN;
	puntero=&numeros[0];
	
	for(int i =1; i <=10; i++){
		cout<<"inserte valor "<<i<<endl;
		cin>>numeros[i];
	}
	for (int *puntero=&numeros[1];puntero <=&numeros[10];puntero++ ){
		if (*puntero>mayor) mayor=*puntero;
	}
	cout<<"el valor maximo es= "<<mayor<<endl;
	
	return 0;
}
