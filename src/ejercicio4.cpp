/*
 * ejercicio4.cpp
 *
 *  Created on: Dec 11, 2016
 *      Author: marwilc
 */


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
	int k=0, i;
	float result=0, result2=0, resultAnt=1;
	bool encontrado = false;
	while(!encontrado){

		if(result == resultAnt){
			encontrado = true;
		}else{
			resultAnt = result;
			result = (pow(-1,k))/(2*k+1) + result;
			k++;
			//cout << setprecision(100) << result << endl;
		}
	}
	i=k;
	while(i>=0){
		result2 = (pow(-1,i))/(2*i+1) + result2;
		i--;
	}

	cout << setprecision(100)
		 << "Numero maximo de terminos: " << k << endl
		 << "Mayor valor en orden ascendente: " << result << endl
		 << "Mayor valor en orden descendente: " << result2 << endl
		 << "Error absoluto: " << fabsf((float) M_PI_4 - result) << endl
		 << "Error relativo: " << fabsf((float) (M_PI_4 - result) / result) << endl;


}


