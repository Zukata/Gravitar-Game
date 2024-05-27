#include <iostream>
#define _WIN32_WINNT 0x05000
#include <windows.h>

using namespace std; 


//Schermo come matrice bidimensionale per simulare grafica
char MatriceSchermo[COLONNE_FINESTRA][RIGHE_FINESTRA];

int main () {
    
    //Rende l'attuale finestra un oggetto utilizzabile per le due funzioni successive
    HWND console = GetConsoleWindow();
    RECT r;

    //Attuali dimensioni console
    GetWindowRect(console, &r);
    //Ridisegno: MoveWindow(finestra da modificare, posizione x della finestra, posizione y della finestra, larghezza, altezza, ridisegno?)
    MoveWindow(console, r.left, r.top, 640, 480, TRUE);

    //Impostazione di righe e colonne 
    public static void SetWindowSize (int COLONNE_FINESTRA, int RIGHE_FINESTRA);
}
/*To.Do
.Funzone che peschi da ArrayMappa per disegnare via cout successivi
.Spostamento della schermata