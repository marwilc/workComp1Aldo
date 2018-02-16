/*
 * ejercicio5.cpp
 *
 *  Created on: Dec 11, 2016
 *      Author: marwilc
 */


#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main(int argc, char **argv) {
	int k=1, i, cont1=0, cont2=0;
	float result=0, result2=0, resultAnt=1;
	bool encontrado = false;

	while(!encontrado){

		if(result == resultAnt){
			encontrado = true;
		}else{
			resultAnt = result;
			result = (pow(-1,k))/(2*k+1) + result;
			k+=2;
			cont1++;
			//cout << setprecision(100) << result << endl;
		}
	}

	i=0;
	resultAnt=1;
	encontrado = false;
	while(!encontrado){
			if(result2 == resultAnt){
				encontrado = true;
			}else{
				resultAnt = result2;
				result2 = (pow(-1,i))/(2*i+1) + result2;
				i+=2;
				cont2++;
				//cout << setprecision(100) << result << endl;
			}
		}
	cout << setprecision(100)
		 << "Numero maximo de terminos positivos: " << cont1 << endl
		 << "Numero maximo de terminos negativos: " << cont2 << endl
		 << "Mayor valor negativo: " << result << endl
		 << "Mayor valor positivo: " << result2 << endl
		 << "suma de los terminos positivos y negativos: " << result + result2<< endl;
}


