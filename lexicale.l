%{
#include <stdio.h> 
#include<string.h>  
#include"syntax.tab.h" 
#include"ts.h"
extern YYSTYPE yylval;
extern nb_ligne;
extern col;
char val_s_par[10]="";
char b[10]="";

char e[]="(";
int i;
int j ;
// printf(" %s  ",yytext);
%}
%option yylineno

IDF [A-Z]([a-zA-Z0-9])*
entier  ([1-9][0-9]*|0)|(\(-[1-9][0-9]*\))  
reel  ([0-9]+\.[0-9]+)|(\(-[0-9]+\.[0-9]+\))
char  \'[a-zA-Z0-9]\'
chaine  \"[^"]*\"

space ("\t"|" ")+
saut "\n"+               

%%

"docprogram"  { printf(" %s  ",yytext);col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_docprg;}  

"SUB"         { printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_sub ;}  

"VARIABLE"    {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_variable ;}  

"body"        {printf(" %s  ",yytext);col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_body;} 

"AS"          {  printf(" %s  ",yytext);col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_as; }

"ARRAY"       { printf(" %s  ",yytext);col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_array;}

"CONSTANTE"    {printf(" %s  ",yytext);col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_const;}

"INT"         {printf(" %s  ",yytext);col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1);  return mc_int;}

"FLT"        {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1);  return mc_flt ;}

"CHR"         {printf(" %s  ",yytext); col =col+yyleng;  rechercher(yytext,"Mot cle",0,0, 1); return  mc_chr;}

"STR"        {printf(" %s  ",yytext); col =col+yyleng;  rechercher(yytext,"Mot cle",0,0, 1);  return  mc_str;}

"BOL"         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_bol;}

"TRUE"         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1);  yylval.str=strdup(yytext); return mc_true; }
"FALSE"        {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); yylval.str=strdup(yytext);  return mc_false; }

"*"            {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return fois ; }
"+"            {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return plus ; }
"-"            {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return moins ; }
"("            {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return par_o ; }
")"            {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return par_f ; }
"AND"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_and ;}
"OR"           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_or ; }
"NOT"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_not; }
"SUP"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_sup; }
"INF"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_inf; }
"SUPE"         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_supe; }
"INFE"         {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_infe; }
"EGA"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_egale; }
"DIF"          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_dif; }
"AFF"           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1); return mc_aff; }

"/>"              {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return mc_slashfin; }

"|"            { printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return sep_var; }

":"            {printf(" %s  ",yytext); col =col+yyleng;  rechercher(yytext,"Mot cle",0,0,2); return ':'; }

"="           { printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return egal ; }

"!"           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return  '!' ;}

"<"           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return cro_o;}

">"          {printf(" %s  ",yytext); col =col+yyleng;  rechercher(yytext,"Mot cle",0,0,2); return  cro_f;}

","          {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return  vrgl;}
    
"["           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2);  return  aco_o;}
"]"           {printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2);  return  aco_f;}

"/"          { printf(" %s  ",yytext); col =col+yyleng; rechercher(yytext,"Mot cle",0,0,2); return mc_slash ;}
"IF"      { printf(" %s  ",yytext);    col =col+yyleng; rechercher(yytext,"Mot cle",0,0, 1);  return mc_if; }
"THEN"    {printf(" %s  ",yytext);  col =col+yyleng;    rechercher(yytext,"Mot cle",0,0, 1); return mc_then; }
"ELSE"    { printf(" %s  ",yytext);  col =col+yyleng;  rechercher(yytext,"Mot cle",0,0, 1);  return mc_else; }
"INPUT"   { printf(" %s  ",yytext); col =col+yyleng;   rechercher(yytext,"Mot cle",0,0, 1); return mc_input; }
"OUTPUT"  { printf(" %s  ",yytext); col =col+yyleng;   rechercher(yytext,"Mot cle",0,0, 1); return mc_output; }
"FOR"     { printf(" %s  ",yytext); col =col+yyleng;   rechercher(yytext,"Mot cle",0,0, 1); return mc_for; }
"UNTIL"   { printf(" %s  ",yytext); col =col+yyleng;   rechercher(yytext,"Mot cle",0,0, 1); return mc_until; }
"DO"      { printf(" %s  ",yytext); col =col+yyleng;   rechercher(yytext,"Mot cle",0,0, 1); return mc_do; }
"WHILE"   { printf(" %s  ",yytext); col =col+yyleng;   rechercher(yytext,"Mot cle",0,0, 1); return mc_while; }


{IDF}        {printf(" %s  ",yytext); col =col+yyleng;  yylval.str=strdup(yytext);  return idf ;}
{entier}     { printf(" %s  ",yytext); col =col+yyleng;  

if( strncmp(yytext,e,1) == 0){
       j=0;
           for(i=1; i<(strlen(yytext)-1);i++)
	       {  
		      val_s_par[j]=yytext[i];   
                    
		      j++;
	       }   
           
           
          
                
		
     	  if( abs(atoi(val_s_par)) > 32767 ) {printf("%s erreur \n",yytext); }
             else{   
                        yylval.integer=atoi(val_s_par);   return entier ;
                 }
		  
		  }else{
          
       if( abs(atoi(yytext)) > 32767 ) {printf("%s erreur \n",yytext); }
             else{    
                    yylval.integer=atoi(yytext);  return entier;

                 } }


}

{reel}        {printf(" %s  ",yytext); col =col+yyleng;  yylval.f=atof(yytext);

                          j=0;
           if( strncmp(yytext,e,1)==0){ 
	     for(i=1;i<(strlen(yytext)-1);i++)
	         {
		      b[j]=yytext[i];
		      j++;
	         }   j=0;
		   yylval.f=atof(b);
		  } else{  

                  yylval.f=atof(yytext);
		  }
		  
          return reel ;
 }

{char}        {printf(" %s  ",yytext); col =col+yyleng;   yylval.str=strdup(yytext); return tchar;}
{chaine}       {printf(" %s  ",yytext); col =col+yyleng;   yylval.str=strdup(yytext);  return chaine;}

{space} {col =col+yyleng;  }
{saut}  {  col=1 ;  nb_ligne=nb_ligne+yyleng; printf("\n");} 

.  printf ("\t \t Entité lexicale %s non reconnue a ligne %d \n",yytext,yylineno);
