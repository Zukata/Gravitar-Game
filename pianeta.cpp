#include astronave.h;
#include proiettile.h;
#include terreno.h;  // N. P. : penso che il terreno
					//sia da creare in questa classe pianeta
					// non in una classe a parte


class pianeta{
private:
	bool entrata;
	bool uscita;
public:
	pianeta(){
		entrata = true;
		uscita = false;
	}
	/*deconstructor*/ pianeta(){
		entrata = false;
		uscita = true;
	}

	bool hit(*astronave astro, *proiettile p){
		if ((astro.x == p.x) && (astro.y==p.y) && (p.nemico)
			return true;
	}

//incompleto. Manca ancora un metodo per quando l'astronave si schianta nel terreno,
	//il resto va sistemato o sulla classe gioco oppure sul head (credo)
};
