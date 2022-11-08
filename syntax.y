%{
 int nb_ligne=1, col=1;	
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"ts.h" 
#include "QUAD.h"
#include "QUAD.c"
#include "cod_obg.c"
#include "cod_obg.h"
#include "optimisation.h"
#include "optimisation.c"
int valuetype = 0;
int i=0 ;
int j;
int sauvtype , fin_pos ,sauv_debut_do ,sauv_deb_for; 
int a=0;
int k=1;
int else_pos;
int compatibilite = 0;
 int nTemp=1;
 char tempC[12]="";
char val[12]="";
char  * sauv_idf;
char * id;
typedef struct // structeur pour s'auvgarder les bliotheques importer
     {
        char*  nom_idf  ;
        
     }tab_idf;
 tab_idf  tab[20];

void insert_liste_idf(int code_type  , int distinct_vac_const){
    if(distinct_vac_const == 0)
    {
        
      while(sauv_var != NULL)
        {  
           id= depiler(&sauv_var);
           inserer(strdup(id), code_type , 0 , 0);
           
        }
    }
    else {
      

       while(sauv_var != NULL)
        {  
           id= depiler(&sauv_var);
           inserer(strdup(id), code_type , 0 , 1);
           
        }



    }
    
}




%} 

%union {char* str;
        int  integer;
       float f;
        
        struct {int type;
                char* res;
                float  val;
                }NT;
       
  }




%token <str> idf  mc_docprg   mc_sub   mc_variable  mc_body mc_as mc_array  mc_int 
%token    mc_flt  mc_chr  mc_str '!'  cro_o   cro_f  mc_slash mc_bol mc_BOL_LITERAL  mc_const egal mc_slashfin
%token   <integer> entier  <f> reel  <str> tchar <str> chaine  ':'  sep_var  mc_if  mc_then  mc_else vrgl mc_aff   aco_o  aco_f <str> mc_true  <str> mc_false
%token fois plus  moins par_f par_o mc_and mc_or mc_not mc_sup mc_inf mc_supe mc_infe mc_egale mc_dif  mc_input  mc_output mc_for mc_do mc_until mc_while

 //ordre de priorité   

%left mc_or mc_and
%left    mc_not mc_sup  mc_inf  mc_supe  mc_infe     mc_ega  mc_dif
%left  plus  moins
%left  fois   mc_slash

%type <NT> expr condition expr_ar bornesup id

%start S   

%%
S: debut_prog declaration  body fin_prog {printf("prog syntaxiquement correct");YYACCEPT;}

   ;
debut_prog : cro_o '!'  mc_docprg idf   cro_f 
    ;

declaration:  declaration var 
           |declaration const 
           |declaration array 
           | var | const | array
    ;
const : cro_o mc_sub  mc_const cro_f  les_constants cro_o mc_slash mc_sub  mc_const  cro_f
    ; 

les_constants : les_constants dec_const1 | les_constants dec_const2  | dec_const1 |  dec_const2
    ; 

dec_const1 : cro_o idf egal valeur mc_slashfin { doubleDeclaration(strdup($2)); inserer(strdup($2),sauvtype,0,1);}
   ;

valeur: entier  {sauvtype = 1 ;} | reel {sauvtype = 2 ;} |chaine {sauvtype = 4 ;} | tchar {sauvtype = 3 ;}
   ;
   
dec_const2 : cro_o list_idf  mc_as type_const mc_slashfin  
   ;

type_const : mc_int { insert_liste_idf(1,1) ; i=0;  } | mc_flt { insert_liste_idf(2,1) ;i=0; } 
| mc_chr { insert_liste_idf(3,1) ; i=0; } | mc_str {insert_liste_idf(4,1) ;i=0; } | mc_bol {insert_liste_idf(5,1) ;i=0;  }
    ; 
//******************************************************************************************************************************//

array:  cro_o mc_array mc_as type_array cro_f  dec_array cro_o mc_slash mc_array cro_f   
   ;
   
dec_array : dec_array  cro_o idf ':' entier mc_slashfin  { doubleDeclaration(strdup($3)); inserer(strdup($3), sauvtype , $5 ,0 ) ;}  
| cro_o idf ':' entier mc_slashfin {doubleDeclaration(strdup($2));  inserer(strdup($2), sauvtype,$4,0) ;} 
   ;


type_array : mc_int {  sauvtype = 1; } | mc_flt {  sauvtype = 2;} | mc_chr {   sauvtype = 3;} | mc_str {  sauvtype = 4; } 
        | mc_bol {  sauvtype = 5; }
    ; 
//********************************************************************************************************************************//
var : cro_o mc_sub mc_variable cro_f  les_variables cro_o mc_slash mc_sub mc_variable cro_f 
    ;

les_variables: les_variables  cro_o list_idf mc_as type_var mc_slashfin | cro_o list_idf mc_as type_var mc_slashfin
     ;
	
list_idf : idf sep_var list_idf   { doubleDeclaration(strdup($1)); empiler_Str(&sauv_var,strdup($1));  }  
         | idf  {  doubleDeclaration(strdup($1)); empiler_Str(&sauv_var,strdup($1));   }
    ;

type_var : mc_int { insert_liste_idf(1,0) ; i=0;   } | mc_flt { insert_liste_idf(2,0) ; i=0; } |
 mc_chr { insert_liste_idf(3,0) ; i=0; } | mc_str {insert_liste_idf(4,0) ; i=0; } | mc_bol {insert_liste_idf(5,0) ; i=0;   }
    ; 



body:  cro_o  mc_body  cro_f   instruction         cro_o  mc_slash  mc_body  cro_f 
   ;
fin_prog:  cro_o mc_slash   mc_docprg   cro_f     


instruction : instruction  inst_if | inst_if 
           |instruction sortie | sortie
           |instruction entree  | entree 
		     |instruction  for  |  for
           |instruction do   | do
		     |instruction affectation  | affectation
;
//********************** if ***********************//

inst_if:A   cro_o  mc_else cro_f instruction  cro_o mc_slash mc_else cro_f   cro_o mc_slash mc_if cro_f
     { fin_pos = depiler_qc(&pile1); q[fin_pos].op1= ToSTR(indq); }
      | A   cro_o mc_slash mc_if cro_f  {indq--; fin_pos = depiler_qc(&pile1);}
     ;

A:B cro_o mc_then cro_f  instruction cro_o mc_slash mc_then cro_f   
  {else_pos = depiler_qc(&pile1); q[else_pos].op1= ToSTR(indq+ 1); empiler_qc(&pile1, indq); quad("BR","","","");}
;


B:cro_o mc_if  ':' condition  cro_f  
 { empiler_qc(&pile1, indq); quad ("BZ","",strdup($4.res),""); } 
;


//********************** input/ output ***********************//

entree : cro_o mc_input ':' id chaine mc_slashfin {signe_de_formatage($4.res,$5);}
  ;
id : idf  { dec($1);  $$.res=$1; } 
    |idf cro_o entier cro_f  { $$.res=$1; dec($1); veriftailletab($1,$3);}
 ;

sortie : cro_o mc_output ':' display  mc_slashfin
  ;

display : chaine plus idf plus display  { dec($3); signe_de_formatage($3,$1);}
        | chaine plus idf { dec($3); signe_de_formatage($3,$1);}
    ;
 
 
//********************** FOR***********************//
for: debut_for  instruction  cro_o mc_slash mc_for cro_f 
    {    sauv_idf = depiler(&sauv_var); quad("+",strdup(sauv_idf),"1",strdup(sauv_idf)); 
    sauv_deb_for = depiler_qc(&pileFOR); quad("BR",ToSTR(sauv_deb_for),"",""); q[sauv_deb_for].op1= ToSTR(indq); }
 ; 

debut_for :  cro_o mc_for  idf egal  expr   mc_until bornesup cro_f 
 { dec($3); quad("=",$5.res,"",$3); empiler_qc(&pileFOR,indq); quad("BG","",$3,$7.res); empiler_Str(&sauv_var, $3);};


bornesup : entier   {$$.res = ToSTR($1);}
         | idf { $$.res = strdup($1); dec($1);  if(returntype($1) != 1) yyerror("type incompatible"); }
    ;

//********************** DO ***********************//
                          
do: debut_do  instruction  cro_o mc_while  ':' condition  mc_slashfin  cro_o mc_slash mc_do cro_f
   { sauv_debut_do= depiler_qc(&pile2); quad("BZ",ToSTR(sauv_debut_do),$6.res,""); }
;


debut_do: cro_o mc_do  cro_f { empiler_qc(&pile2,indq);  }
;
 


// ********************** affectation *********************** //

affectation :  cro_o mc_aff ':' partie_gauche  vrgl expr  mc_slashfin  
        { if(a != compatibilite){yyerror("\n type incompatible!!!!!!!!! \n");
        } compatibilite=0;  quad (":=",$6.res,"",sauv_idf);
             inser_val(sauv_idf,$6.val);
             
        }
         | cro_o mc_aff ':' partie_gauche  vrgl chaine  mc_slashfin {  if(a != 4) yyerror("type incompatible"); }
         | cro_o mc_aff ':' partie_gauche  vrgl tchar  mc_slashfin   {  if(a != 3) yyerror("type incompatible"); }
         
; 

partie_gauche : idf { dec ($1); a = returntype($1);   sauv_idf=strdup($1);}
      | idf aco_o entier  aco_f  { dec ($1); a = returntype($1); veriftailletab($1,$3); sauv_idf=strdup($1); }
    ;

expr_ar: expr    {$$.res = $1.res; compatibilite=0; }

expr :       
            expr  plus   expr        
            {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; quad ("+",$1.res,$3.res,$$.res);}
            | expr     moins expr     
             {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; quad ("-",$1.res,$3.res,$$.res);}
            |expr     fois expr        
              {   sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; quad ("*",$1.res,$3.res,$$.res); }
            | expr     mc_slash expr      
              { sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; quad ("/",$1.res,$3.res,$$.res);
                  if ($3.val==0){  printf( "  ---- division sur 0 -----",$3.val);}
              }

            | idf    { dec ($1);        if(compatibilite == 0) {compatibilite = returntype(strdup($1)) ;  } 
                                         else { 
                                                 if(compatibilite != returntype(strdup($1))) { yyerror("type incompatible") ;}
                                              }  
                       $$.res=strdup($1);      $$.val=1;     
                       
                     }
            | idf aco_o  entier  aco_f  { dec ($1);  if(compatibilite == 0) {compatibilite = returntype(strdup($1)) ;} 
                                         else { 
                                                 if(compatibilite != returntype(strdup($1))) { yyerror("type incompatible") ;}
                                              }
                          

                        veriftailletab($1,$3);      sprintf(val, "%s[%d]",$1,$3); $$.res=strdup(val);  
             
             } 
            | entier {    
                      if(compatibilite == 0) {compatibilite = 1; }
                         else  { if (compatibilite != 1 )
                                                   { yyerror("type incompatible") ;}
                                                        }     
                            sprintf(val, "%d",$1); $$.res=strdup(val); $$.val=$1;  }
            | reel   {  if(compatibilite == 0) {compatibilite = 2;} 
            
                        else  { if (compatibilite != 2 )
                                                   { yyerror("type incompatible") ;}
                                                        }
            
             sprintf(val, "%f",$1); $$.res=strdup(val);        $$.val=$1;    
                         }

            |      mc_true {  if(compatibilite == 0) {compatibilite = 5;} 
            
                        else  { if (compatibilite != 5 )
                                                   { yyerror("type incompatible") ;}
                                                        }
            
             $$.res=strdup($1);         
                         }
            | mc_false  {  if(compatibilite == 0) {compatibilite = 5;} 
            
                        else  { if (compatibilite != 5 )
                                                   { yyerror("type incompatible") ;}
                                                        }
            
             $$.res=strdup($1);         
                         }
            | par_o  expr par_f  { $$.res=$2.res;   $$.val=$2.val;} 
            
         ;

    
condition : mc_sup par_o expr_ar vrgl expr_ar par_f 
             {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; createQuadCompare (6,$3.res,$5.res,$$.res);}

          | mc_inf par_o expr_ar vrgl expr_ar par_f
             {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; createQuadCompare (5,$3.res,$5.res,$$.res);}

          | mc_supe par_o expr_ar vrgl expr_ar par_f
          {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; createQuadCompare (3,$3.res,$5.res,$$.res);}
          | mc_infe par_o expr_ar vrgl expr_ar par_f 
           {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; createQuadCompare (4,$3.res,$5.res,$$.res);}
          | mc_egale par_o expr_ar vrgl expr_ar par_f
          {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; createQuadCompare (1,$3.res,$5.res,$$.res);}
          | mc_dif par_o expr_ar vrgl expr_ar par_f
          {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; createQuadCompare (2,$3.res,$5.res,$$.res);}
          | mc_and par_o condition  vrgl condition  par_f
           {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; createQuadLogic (3,$3.res,$5.res,$$.res);}
          | mc_or par_o condition  vrgl condition  par_f 
           {sprintf(tempC, "T%d",nTemp);nTemp++;$$.res=strdup(tempC);tempC[0]='\0'; createQuadLogic (2,$3.res,$5.res,$$.res);}
          |  expr_ar
          ;
          
       

 
%% 
yyerror(char*msg)           
 {
 printf(" %s a la ligne %d et a la colonne %d \n",msg, nb_ligne, col);
  exit ;
 }
 
main()
{
 init();

yyparse();
printf("\n \n");

afficherQuad();

optimisation();

printf("----------------------------------------\n");
afficherQuad();


assembler();

printf("\n \n");
//  table des mots clés et séparateurs
//afficher();    
printf("\n \n");
// table  IDF 
printHachTable();



}
yywrap()
{}
 