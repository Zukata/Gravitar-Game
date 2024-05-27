#include <iostream>
#include <cstdlib>
#include "Universo.hpp"
using namespace std;


	Universo::Universo(int numeropianeti) :
		numeropianeti(numeropianeti) {
}
	


	Universo::~Universo(){ 
		numeropianeti = 0;
	}


	void Universo::CreaUniverso() {
		int i = 0;
		int j = 0;
		int k = 0;
		while (i <= numeropianeti) {
			if (i == 0) {
				//p[20][20] = "O";
				while (j != 20) {
					j++;
				}
				while (k != 20) {
					k++;
				}
				cout << "O";
			}
			else if (i == 1) {
				//p[80][80] = "O";
				while (j != 80) {
					j++;
				}
				while (k != 80) {
					k++;
				}
				cout << "O";
			}
			else if (i == 2) {
				//p[30][50] = "O";
				while (j != 30) {
					j++;
				}
				while (k != 50) {
					k++;
				}
				cout << "O";
			}
			else if (i == 3) {
				//p[75][50] = "O";
				while (j != 75) {
					j++;
				}
				while (k != 50) {
					k++;
				}
				cout << "O";
			}
			else if (i == 4) {
				//p[25][75] = "O";
				while (j != 25) {
					j++;
				}
				while (k != 75) {
					k++;
				}
				cout << "O";
			}
			else if (i == 5) {
				//p[60][30] = "O";
				while (j != 60) {
					j++;
				}
				while (k != 30) {
					k++;
				}
				cout << "O";
			}
			i++;
		}
	}