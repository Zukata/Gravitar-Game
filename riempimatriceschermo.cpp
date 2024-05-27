//L'ultimo carattere di ciascuna riga è un "\n": questo rende la schermata un unico cout;
char MatriceSchermo[COLONNE_FINESTRA + 1][RIGHE_FINESTRA];


//Attualmente non modifica davvero la MatriceSchermo...

//Riempe la funzione in base all'xAttuale
//Sul pianeta
//Spotamento della schermata già incluso
void RiempiMatrice (int xAttuale) {
        for (int i=xAttuale; i < xAttuale + LARGHEZZA_SCHERMO; i++)
                a[i%LARGHEZZA_SCHERMO][b[i%CIRCONFERENZA].livello] = b[i%CIRCONFERENZA].Carattere;

        for(i = 0; i < ALTEZZA_MAX; i++)
        {
                a[LARGHEZZA_SCHERMO+1][i] = "\n";
        }
        
        return 0;
}

//All'ingresso nel mondo, creare una variabile xAttuale che tenga traccia della 
//ascissa all'estrema sinistra dello schermo (parte da 0 e si modifica al
//muoversi dell'astronave)

//if (xAttuale<0) xAttuale += CIRCONFERENZA, per evitare resto su int < 0

void RiempiUniverso () {
    
}