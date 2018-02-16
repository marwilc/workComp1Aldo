/*
 * ejercicio6.cpp
 *
 *  Created on: Dec 11, 2016
 *      Author: marwilc
 */


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float factorial(float n){
	if(n==0)
	{
		return(1);
	}else
	{
		return factorial(n-1)*n;
	}

}

float senoTaylor(float x){
	float result = 0, result2 = 0;

	for (int i = 0; i <= 4 ; i++) {
		if((i%2)==0){
			result = result + (1*pow(i, (2*i)+1)/factorial(2*i+1));
		}else{
			result = result - (1*pow(i, (2*i)+1)/factorial(2*i+1));
		}
	}

	return(result);
}


int main(int argc, char **argv) {
	float result;
	cout << "tabla 1" << endl
		 << setw(2) << "x" << setw(12) << "f(x)" <<endl;
		for (float x = 0; x <= 5; x+=0.1) {
			cout << setprecision(2) << setw(2) << x << setw(12) << setprecision(6) << (float) x - sin(x) << endl;
		}


		cout << "tabla 2" << endl
			 << setw(2) << "x" << setw(12) << "f(x)" <<endl;
		for (float x = 0; x <= 5; x+=0.1) {
			cout << setprecision(2) << setw(2) << x << setw(12) << setprecision(6) << (float) x - senoTaylor(x) << endl;
		}


}



