//============================================================================
// Name        : ejercicio3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void bubbleSortA(float vector[]){
	int i = 0;
	bool ordenado = false;
	float aux;

	while((i <= 4) && (!ordenado)){
		i++;
		ordenado = true;
		for (int j = 0; j <= 4-i; j++)
		{
			if(vector[j] > vector[j+1]){
				ordenado=false;
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
}

void bubbleSortAd(double vector[]){
	int i = 0;
	bool ordenado = false;
	double aux;

	while((i <= 4) && (!ordenado)){
		i++;
		ordenado = true;
		for (int j = 0; j <= 4-i; j++)
		{
			if(vector[j] > vector[j+1]){
				ordenado=false;
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
}


int main() {
	float vectorX[] = {0.3010299957, 0.5772156649, 1.414213562, -3.141592654, 2.718281828};
	float vectorY[] = {0.000185049, 4773714.647, -22.37492, 878366.9879, 1486.2497};
	double vectorXd[] = {0.3010299957, 0.5772156649, 1.414213562, -3.141592654, 2.718281828};
	double vectorYd[] = {0.000185049, 4773714.647, -22.37492, 878366.9879, 1486.2497};
	float vectorResult1[5];
	double vectorResult2[5];
	double result1d=0, result2d=0, result3d=0, result4d=0, aux1d=0, aux2d=0;
	float result1 = 0, result2 = 0, result3 = 0, result4 = 0, aux1=0, aux2=0;

	// producto escalar en forma ascendente/descendente
	for(int i = 0; i < 5; i++)
	{
		result1 = vectorX[i] * vectorY[i] + result1;
		result1d = (vectorXd[i] * vectorYd[i] + result1d);
		result2 = vectorX[4-i] * vectorY[4-i] + result2;
		result2d = (vectorXd[4-i] * vectorYd[4-i] + result2d);
		vectorResult1[i] = vectorX[i] * vectorY[i];
		vectorResult2[i] = (vectorXd[i] * vectorYd[i]);
	}

	bubbleSortA(vectorResult1);
	bubbleSortAd(vectorResult2);
	//de mayor a menor
	for (int i = 4; i >= 0; i--) {
		if( i > 1 ){
			aux2 = aux2 + vectorResult1[i];
			aux2d = aux2d + vectorResult2[i];
		}else{
			aux1 = aux1 + vectorResult1[i];
			aux1d = aux1d + vectorResult2[i];
		}
	}
	result3 = aux1 + aux2;
	result3d = aux1d + aux2d;
	aux1=0;
	aux2=0;
	aux1d=0;
	aux2d=0;
	//de menor a mayor
		for (int i = 0; i <= 4; i++) {
			if( i > 1 ){
				aux2 = aux2 + vectorResult1[i];
				aux2d = aux2d + vectorResult2[i];
			}else{
				aux1 = aux1 + vectorResult1[i];
				aux1d = aux1d + vectorResult2[i];
			}
		}

		result4 = aux1 + aux2;
		result4d = aux1d + aux2d;
		cout << setprecision(6)
			 <<	"------------Resultado en simple precision--------------------"<<endl
			 << "Resultado ascendente: " << result1 << endl
			 << "Resultado descendente: " << result2 << endl
			 << "Resultado mayor a menor: " << result3 << endl
			 << "Resultado menor a mayor: " << result4 << endl<< endl;

		cout << setprecision(15)
					 <<	"------------Resultado en doble precision--------------------"<<endl
					 << "Resultado ascendente: " << result1d << endl
					 << "Resultado descendente: " << result2d << endl
					 << "Resultado mayor a menor: " << result3d << endl
					 << "Resultado menor a mayor: " << result4d << endl;

	return 0;
}
