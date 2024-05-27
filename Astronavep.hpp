#ifndef Astronavep_h
#define Astronavep_h

class Astronavep{

	int astrox, astroy;
	char vis; // forse da rimuovere o forse no
	Astronavep(int astrox, int astroy, char vis);
	~Astronavep();
	void posiziona_astro();

};

#endif