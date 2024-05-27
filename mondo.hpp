//MONDO.HPP
//La circonferenza è parametrica

class Mondo {
	protected:
		char ArrayMappa[];
		struct StrutturaMappa;
		int NumeroBunker;
	public: 
		
		bool PianetaCompletato (int NumeroBunker) {
			return (NumeroBunker == 0);
		}
		
		//FUNZIONE CHE COLMA I BUCHI LASCIATI DA BARILI RACCOLTI E BUNKER ESPLOSI
		void ModificaMappe (char ArrayMappa[]) {					
		}
		
		//FUNZIONE CHE, SUCCESSIVAMENTE A DisegnaSuperficie, SCANNERIZZA ARRAYMAPPA PER COSTRUIRE LA STRUTTURA MAPPA
		void CostruisciStrutturaMappa (char ArrayMappa[]) {
		}