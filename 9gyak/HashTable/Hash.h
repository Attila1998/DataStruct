#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

typedef struct ELEM{
   char * szo;
   struct ELEM * next;
}ELEM

ELEM* Create(char n);
void Destroy(ELEM*a);



#endif // HASH_H_INCLUDED
