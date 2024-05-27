//Generazione della schermata universo
//Da eseguirsi una volta per universo
//Min. e Max. pianeti è prefissato 

int CreaUniverso () {
    int numeropianeti = (rand() % 4) + 3;                //Compreso tra 3 e 6
    int i = numeropianeti;

    //Disegno dei pianeti; 
    //CODICE INAUTENTICO";
    schermo[x2][y2] = "(Carattere del pianeta)";
    schermo[x3][y3] = "(Carattere del pianeta)";
    i -= 3;                                 
    //Disegno sempre almeno il minimo numero di pianeti
    if (i-- > 0) schermo [x4][y4] = "(Carattere del pianeta)";    //numeropianeti decrementa SUCCESSIVAMENTE alla verifiica della guardia
    if (i-- > 0) schermo [x5][y5] = "(Carattere del pianeta)";
    if (i > 0) schermo [x6][y6] = "(Carattere del pianeta)";      //Decremento non più necessario
    return numeropianeti;
    //Alternativa migliore: generare solo il numero di pianeti e designare 
    //la stampa ad un'altra funzione (idealmete RiempiMatriceUniverso)
}