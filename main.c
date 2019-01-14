#include <stdio.h>
#include <stdlib.h>

#define TAILLE=25

typedef struct tPosition{
    int nX;
    int nY;
}tPosition;

void initialisation (int nTab[1][5]);
enum bool(false, true);
int caseSimple (int nTab, enum nJeton);
void corriger (int nTab, enum nJeton);
void allerDroite (int nTab, enum nJeton);
void allerGauche (int nTab, enum nJeton);
void placement (int nTab, enum nJeton, int i);
void avancer (int nTab, enum nJeton);
void afficher (int nTab);

int main()
{
    tPosition nJeton;
    int nTab[1][5];
    int i=-2;

    nJeton.x=-3;
    nJeton.y=-2;
    nTab[nJeton.x,nJeton.y]=-1;

    for (i=2, i<=TAILLE, nJeton)
        avancer(nTab,i,nJeton);

    printf("%d\n", nTab);
}

void initialisation (int nTab[1] [5])
{
     int cpt=0;

    for (i=1,i<=5,i++)
    {
        nTab[i,1]==0;
        nTab[i,2]==0;
        nTab[i,3]==0;
        nTab[i,4]==0;
        nTab[i,5]==0;
    }
}

int caseSimple (int nTab, enum nJeton)
{
    if (nTab[nJeton.x,nJeton.y]==0)
        caseSimple==true;
    else if
        caseSimple==false;
}

void corriger (int nTab, enum nJeton)
{
    if (nJeton.x==6)
        nJeton.x=-1;
    if (nJeton.y==0)
        nJeton.y=-5;
    if (nJeton.x==0)
        nJeton.x=-5;
}

void allerDroite (int nTab, enum nJeton)
{
    nJeton.x=njeton.x+1;
    nJeton.y=njeton.y-1;
    correction(nTab, nJeton);
}

void allerGauche (int nTab, enum nJeton)
{
    nJeton.x=njeton.x-1;
    nJeton.y=njeton.y-1;
    correction(nTab, nJeton);
}

void placement (int nTab, enum nJeton, int i)
{
    nTab[nJeton.x,nJeton.y]=i;
}

void avancer (int nTab, enum nJeton)
{
    allerDroite(nTab, nJeton);

    if (caseSimple(nJeton)=true)
        placement(nTab, nJeton, i);
    else if
        {allerGauche(nTab, nJeton);
        placement(nTab, nJeton, i);
        }
}

void afficher (int nTab)
{
    int i;

    for(i=1,i<=5,i++)
    {
        nTab[i,1];
        nTab[i,2];
        nTab[i,3];
        nTab[i,4];
        nTab[i,5];
    }
}
