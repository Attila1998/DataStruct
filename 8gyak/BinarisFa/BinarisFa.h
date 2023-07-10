#ifndef BINFA_H_INCLUDED
#define BINFA_H_INCLUDED

typedef struct FAELEM {
    int adat;
    struct FAELEM * bal, * jobb, * szulo;
}FAELEM;

///Egy csucsra vonatkozo fuggvenyek
FAELEM * Create(int);
void Destroy(FAELEM*);

///Fara vonatkozo fuggvenyek
FAELEM * CreateFa(); ///return NULL
FAELEM * Insert(FAELEM*, int); ///beszur egy elemet a faba
FAELEM * Delete(FAELEM*, int); ///kitorli egy adott elem elso elofordulasat a fabol
FAELEM * Search(FAELEM*, int); ///az elso elofordulasat keresi egy erteknek, NULL, ha nincs benne, cim, ha benne van
FAELEM * MinElem(FAELEM*); ///legkisebb elem cime, NULL, ha ures a fa
FAELEM * MaxElem(FAELEM*); ///legnagyobb elem cime, NULL, ha ures a fa

void Inorder(FAELEM*);
void DestroyFa(FAELEM*);


#endif // BINFA_H_INCLUDED
