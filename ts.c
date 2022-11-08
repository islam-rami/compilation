#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ts.h"
          
void init ()
{
    int i;
    for ( i = 0; i < taille ; i++)
    {
            tess[i]=NULL;
    }
    
}

int fhach (char* e)
{
    int i=0, count=0;
    while (e[i]!='\0')
    {
        count+=e[i]*i*(10*(i+1));
        i++;
    }
    return (count%taille);
    
}

void inserer(char* e1,int type, int taill , int valc )
{
    int index;
    elem* p;
    elem* adr;
    int b=recherche(e1,&index,&adr);
    if(b==0)
    p=malloc(sizeof(elem));
    p->nom=e1;
    p->type=type;
    p->taille_tab = taill; 
    p->isconst=valc; 
    p->valeur=0;
    if(tess[index]==NULL){
        p->svt=NULL;
        tess[index]=p;
        }else {p->svt =tess[index];
        tess[index]=p;
    }
}

int recherche(char* e1,int* index,elem** adr)
{
    elem* p;
    *index =fhach(e1);
    p=tess[*index];
    *adr=p; 
    if(p==NULL) return 0;
    
    while (p!=NULL && strcmp(p->nom,e1)!=0) 
    {
        p=p->svt;
        *adr=p;
    }

    if(p==NULL) return 0;
    return 1;
}

/*
void afficherTS()
{
    int i=0; elem* p;
    for ( i = 0; i < taille; i++)
    {
        if(tess[i]!=NULL){
            p=tess[i];
            while (p!=NULL)
            {
                printf("%s ---> %d\n",p->nom ,p->type,p->taille_tab);
                p=p->svt;
            }
            
        }
    }
    
}
*/

void printHachTable(){
int i;
printf("\n________________________________________________________________________\n ");

printf("----------------------------TABLE DES IDF------------------------------ \n");
printf("________________________________________________________________________\n ");


printf("   IDF      |  CodeEntite |    Type     |  taille_tab   | valeur   \n");
printf("________________________________________________________________________ \n");
printf("________________________________________________________________________\n");


for ( i = 0; i <=taille; i++)
{
    if (tess[i]!=NULL)
    { 
    printList(tess[i]);
    }
    }
}


void printList(elem* l){ 
	char str[15];
for ( l ; l!=NULL; l=l->svt)
    {  strcpy(str,l->nom); countSpaces(str);
		printf("  %s   |",str);
		printf("  %s   |",l->isconst == 1?"CONST   ":"VARIABLE");
		printf("  %s  %d |",switchType(l->type),l->type);
		printf("  %d   |",l->taille_tab);
		printf("  %f \n",l->valeur);
printf("________________________________________________________________________ \n");
    }
}


void countSpaces(char s[8])
{
	int i;
for ( i = strlen(s); i < 8; i++) s[i]=' ';

s[8]='\0';

}


char* switchType(int type){

	switch (type)
	{
	case 1:
         return "INTEGER ";
		break;
	
		case 2:
         return "FLOAT   ";

		break;
		case 3:
         return "CHAR    ";

		break;
		case 4:
         return "STRING  ";

		break;
		case 5:
         return "BOOL    ";

		break;
	default:
		break;
	}
	return "NON INIT";
}


void doubleDeclaration(char *entite)
{
    int index;
    elem *adr;
    if(recherche(entite,&index,&adr))
    {
        yyerror("erreur semantique double declaration d'un idf \n");
    
    }
    
    
}

void dec (char * entite)
{
    int index ;
    elem* adr;
    if (!recherche(entite,&index,&adr))
    {
        yyerror("erreur semantique idf non declarer \n");
     }
}

int returntype(char* antite )
{  int index;
   elem *adr;
   int b = recherche(antite, &index, &adr);
   if(b==1) { 
       
      return adr->type;
   }
}

void veriftailletab(char* tab , int taill)
{
int index;
   elem *adr;
   int b = recherche(tab, &index, &adr);
    if(b==1) {

      if((taill < 0) || (taill > adr->taille_tab)) { yyerror("taille  du tableau  depasse la capacite"); }
   }
}

void signe_de_formatage(char* idf , char* chaine) {
        int i=0;
        
        int type_idf = returntype(idf);
        switch (type_idf)
        {
        case 1 :
             while((chaine[i] != '\0')&& (chaine[i] != '$'))
               { 
                   i++;
               } 
               if(chaine[i]!= '$'){ yyerror("signe de formatage incompatible!!!");}
            
            break;
         case 2 :
             while((chaine[i] != '\0')&& (chaine[i] != '\%'))
               { 
                   i++;
               } 
               if(chaine[i]!= '\%'){ yyerror("signe de formatage incompatible!!!");}
            
            break;
          case 3 :
             while((chaine[i] != '\0')&& (chaine[i] != '&'))
               { 
                   i++;
               } 
               if(chaine[i]!= '&'){ yyerror("signe de formatage incompatible!!!");}
            
            break;
          case 4 :
             while((chaine[i] != '\0')&& (chaine[i] != '#'))
               { 
                   i++;
               } 
               if(chaine[i]!= '#'){ yyerror("signe de formatage incompatible!!!");}
            
            break;
        
          case 5 :
             while((chaine[i] != '\0')&& (chaine[i] != '@'))
               { 
                   i++;
               } 
               if(chaine[i]!= '@'){ yyerror("signe de formatage incompatible!!!");}
            
            break;
        

        default:
            break;
        }


        
}
void inser_val(char* antite , float val )
{

    int index;
   elem *adr;
   int b = recherche(antite, &index, &adr);
   if(b==1) { 
       adr->valeur = val ;
     

   }

}
void initialisation()
{   int i;
     for (i=0;i<40;i++)
  {tabs[i].state=0;
    tabm[i].state=0;}
}

void ins (char entite[], char code[],char type[],float val,int i, int y)
{
  switch (y)
 { 
   
   case 1:/*insertion dans la table des mots clés*/
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       strcpy(tabm[i].type,code);
       break; 
    
   case 2:/*insertion dans la table des séparateurs*/
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].type,code);
      break;
 }

}


/***Step 4: La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles */
void rechercher (char entite[], char code[],char type[],float val,int y)	
{
int j,i;
switch(y) 
  {
   case 1:/*verifier si la case dans la tables des mots clés est libre*/
       
       for (i=0;((i<40)&&(tabm[i].state==1))&&(strcmp(entite,tabm[i].name)!=0);i++); 
        if(i<40)
          ins(entite,code,type,val,i,1);
        else
          printf("entité existe déjà\n");
        break; 
    
   case 2:/*verifier si la case dans la tables des séparateurs est libre*/
         for (i=0;((i<40)&&(tabs[i].state==1))&&(strcmp(entite,tabs[i].name)!=0);i++); 
        if(i<40)
         ins(entite,code,type,val,i,2);
        else
   	       printf("entité existe déjà\n");
        break;

  }

}

void afficher()
{int i;
 
printf("\n/***************Table des symboles mots clés*************/\n");

printf("_____________________________________\n");
printf("\t| NomEntite |  CodeEntite | \n");
printf("_____________________________________\n");
  
for(i=0;i<40;i++)
    if(tabm[i].state==1)
      { 
        printf("\t|%10s |%12s | \n",tabm[i].name, tabm[i].type);
               
      }

printf("\n/***************Table des symboles séparateurs*************/\n");

printf("_____________________________________\n");
printf("\t| NomEntite |  CodeEntite | \n");
printf("_____________________________________\n");
  
for(i=0;i<40;i++)
    if(tabs[i].state==1)
      { 
        printf("\t|%10s |%12s | \n",tabs[i].name,tabs[i].type );
        
      }

}


