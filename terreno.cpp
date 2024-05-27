//TERRAFORMAZIONE 
//
//Funzione da eseguire prima che il giocatore entri nel livello, e solo una volta per mondo


void CreaSuperficie (StrutturaMappa ArrayMappa[]) {
	
	ArrayMappa[0].livello = LIVELLO_PARTENZA;										//Inizializzo manualmente primo ed ultimo blocchetto
	ArrayMappa[CIRCONFERENZA-1].livello = LIVELLO_PARTENZA;
	ArrayMappa[0].Carattere = "_";
	ArrayMappa[CIRCONFERENZA-1].Carattere = "_";
	
	for (int ascissa = 1; ascissa < (CIRCONFERENZA - 10); ascissa++) {
		
		if (livello < ALTITUDINE_MAX)												//L'altitudine massima è prefissata
			if ((rand%100) < 96)													//Nel 95% dei casi, normale terreno 
				//3 diverse pendenze del terreno
				if ((rand%3)==0)
					ArrayMappa[ascissa].Carattere = "_";
					ArrayMappa[ascissa+1].livello = ArrayMappa[ascissa].livello;	//Il carattere stampato influenza la y del successivo
				else if ((rand%3)==1)
					ArrayMappa[ascissa].Carattere = "/";
					ArrayMappa[ascissa+1].livello = ArrayMappa[ascissa].livello + 1;
				else
					ArrayMappa[ascissa].Carattere = "\\";
					ArrayMappa[ascissa+1].livello = ArrayMappa[ascissa].livello - 1;
			
			//Disegno del bunker
			else if ((rand%100) < 98)
				ArrayMappa[ascissa].Carattere = "";									//Cercare carattere appropriato per il bunker
				ArrayMappa[ascissa+1].livello = ArrayMappa[ascissa].livello;			
			//Disegno del barile
			else 
				ArrayMappa[ascissa].Carattere = "";									//Cercare carattere appropriato per il barile
				ArrayMappa[ascissa+1].livello = ArrayMappa[ascissa].livello;
		
		//Impedire alla superficie di superare una certa altitudine
		else if (ascissa == ALTITUDINE_MAX) 
			ArrayMappa[ascissa].Carattere = "\\";
			ArrayMappa[ascissa+1].livello = ArrayMappa[ascissa].livello - 1;
	}

	//Forzare la superficie a chiudersi;
	//Richiede LIVELLO MAX + 1 iterazioni per funzionare al 100%;
	while ((ascissa >= (CIRCONFERENZA - 10)) && (ascissa < CIRCONFERENZA - 1))	
		if (livello	< LIVELLO_PARTENZA) 									
			ArrayMappa[ascissa+1].livello = ArrayMappa[ascissa].livello + 1;					
			ArrayMappa[ascissa].Carattere = "/";
			ascissa++;																//Niente for perchè niente assegnamento iniziale
		else if (livello > LIVELLO_PARTENZA)
			ArrayMappa[ascissa+1].livello = ArrayMappa[ascissa].livello - 1;					
			ArrayMappa[ascissa].Carattere = "\\";
			ascissa++;
		else 
			ArrayMappa[ascissa+1].livello = ArrayMappa[ascissa].livello;					
			ArrayMappa[ascissa].Carattere = "_";
			ascissa++;
	return 0;
}