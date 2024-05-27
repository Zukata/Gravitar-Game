#include <iostream>
#include <cstdlib>
#include "Astronavep.hpp"
//#include "Grafica.hpp" //Devo capire come funziona la classe grafica e se esiste
using namespace std;

Astronavep::Astronavep(int astrox, int astroy, char vis) :
	astrox(astrox), astroy(astroy), vis(vis) {
}



Astronavep::~Astronavep() {
	vis = "/0";  // da errore, volevo nascondere l'astronave per il decostruttore
	astrox = 0;  
	astroy = 0;
}

void Astronavep::posiziona_astro() {   //Forse da rimuovere fino a quando non ho capito come funziona la classe della grafica
	int tmpx, tmpy;
	tmpx = 0, tmpy = 0;
	while (tmpx <= astrox) {
		tmpx++;
	}
	while (tmpy <= astroy) {
		tmpy++;
	}
}