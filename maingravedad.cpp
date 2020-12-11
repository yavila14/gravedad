#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const float G=9.81;
	int velocidad;
	float tiempo;
		cout <<"Digite el valor de la velocidad ==>";
		cin >>velocidad;
		tiempo=velocidad/G;
		cout <<"El valor del tiempo es ==>" <<tiempo;
	return 0;
}
