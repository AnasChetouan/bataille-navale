#ifndef CASES_H
#define CASES_H
typedef struct etatCase etatCase;
/*cree un alias. au lieu de devoir �crire "struct etatCase"
 dans le main, on peut juste ecrire "etatCase"*/




class Cases{

private:
  //  struct etatCase{
        bool libre;
        bool touchee;
        bool occupee;
 //   };
/*Pour changer une valeur, on �crit "etatCase.libre=false" par ex*/

	int X,Y;

public:

    Cases();     //Constructeur
    
    Cases (int X, int Y);

	void setCoordonnees(int x,int y); //attribue les coordonn�es de la case
    
   // void setEtatCase(etatCase etat);

    void setLibre(int x, int y, bool B);
    
    void setOccupee(int x, int y, bool B);
    
    void setTouchee(int x, int y, bool B);
    
    

};

#endif
