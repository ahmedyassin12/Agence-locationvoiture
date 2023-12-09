


#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
//-----------------------------------------------data structure-----------------------------------------------------------
   //---------------------------------data----------------------------//
typedef struct {
char mat[10];
char marque[15];
float px ;
char dfa [10];		
}voiture;
typedef struct {
	char cin[10];
	 char nom[25];
	 char ad[30];
	 int tlf;
}client;
typedef struct {
	int idLoc;
	char idvoit[10];
	char cin [10];
	char DS[10];
	char DR[10];
	float mnt ;	
}location;
    //-------------------------------linked list-----------------------------------------//
 
  typedef struct linked{
  	struct linked *suiv;
  	voiture v;
  	client c;
  	location l ;
  }Linked;
  typedef struct {
  	Linked *head;
  	int taille; 
  }List;
  
//---------------------------------------------------Functions-------------------------------------------------------------
void titre();
void Mmenu(int *choix);
void menu1(int *choix1);
void menu2(int *choix1);
void menu3(int *choix1);
void OP1(List *L,int c1 );
void OP2(List *L,int c1 );
void OP3(List *L );
void ajjtri(List *L,int c1);
void aff(List L,int c1,char m[10]);
void supp(List *L,char a[10],int c1);
void modifier(List *L,int c1);
void chercher (List L ,int c1);
void cher(Linked *omk ,Linked *ptr,int *s,int c1);
int sob(Linked *ptr,Linked *omk , List*L , int s );

//--------------------------------------------------- Main ----------------------------------------------------------------

main()
{
	int c1;
	List L1,L2,L3;
	L1.head=NULL;
	L2.head=NULL;
    L3.head=NULL;

	titre();
	do{
		
		Mmenu(&c1);
		
		
		switch(c1){
			
			case 1 :
			
			 OP1(&L1,c1);
			         
			
			break;
			
			case 2 :
			
			OP2(&L2,c1);
			
			break;
			
			case 3 : 
			OP3(&L3);
			break;
		
		}		
	}while(c1!=4);
}

//--------------------------------------------------- Main ----------------------------------------------------------------


//---------------------------------------------------Function-------------------------------------------------------------
void titre(){
	int r , q;
	printf("\n\n\n");
 
	system("color F0");
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\n                                            \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
    printf("\n                                            \xba                                  \xba");                                             
    printf("\n                                            \xba             GOODRENT             \xba");
    printf("\n                                            \xba                                  \xba");
    printf("\n                                            \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    printf("                                                                                                 27/02/2022    ");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    
    printf("                                                                                                  v1.0.0 ");

                for(r=1;r<=20;r++)
		    	for(q=0;q<=100000000;q++);
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n");
    printf("\n                                            \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                                            \xba                                  \xba");                                             
	printf("\n                                            \xba  agence de location des voitures \xba");
	printf("\n                                            \xba                                  \xba");
	printf("\n                                            \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	printf("\n\n\n");
           
                
	
	  printf("\n\n\n\n\n\n\n\n\n");
                 printf("                                             loading...");
                for(r=1;r<=20;r++)
				{
                for(q=0;q<=100000000;q++);
                printf("%c",177);}
                printf("\n");
                system("cls");
	
	printf("\n\n\n");
 
	printf("\n                                            \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                                            \xba                                  \xba");                                             
	printf("\n                                            \xba  agence de location des voitures \xba");
	printf("\n                                            \xba                                  \xba");
	printf("\n                                            \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	printf("\n\n\n");

	printf("                                                        press start!!                                       \n                                                        ");
 getch();
	system("cls");
	
}

//--------------------------------------------------------------------------------------------------------------------

void Mmenu(int *choix){
	system("cls");
    printf("\n\n\n\n\n\n\n");
	printf("\n                                      \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                                      \xba                                                 \xba");
	printf("\n                                      \xba    MENU:                                        \xba");
	printf("\n                                      \xba    [1] gestion des voitures:                    \xba");
	printf("\n                                      \xba    [2] gestion des clients:                     \xba");
	printf("\n                                      \xba    [3] gestion des operations de location:      \xba");                                                  
	printf("\n                                      \xba    [4] quitter:                                 \xba");
	printf("\n                                      \xba                                                 \xba");
	printf("\n                                      \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	do
	{
	printf("                                                                        >> ");
	scanf("%d",choix);
	if(*choix>4||*choix<1) printf("                                                     choix invalide!!\n ");
	}while(*choix<1 || *choix>4);
     system("cls");
}

//--------------------------------------------------------------------------------------------------------------------

void menu1(int *choix1){
	
	
	   system("cls");       	
	printf("\n                                              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba      GESTION DES VOITURESS        \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba    [1] ajouter une voiture:       \xba");
	printf("\n                                              \xba    [2] supprimer une voiture:     \xba");
	printf("\n                                              \xba    [3] modifier une voiture:      \xba");
	printf("\n                                              \xba    [4] afficher une voiture:      \xba");
	printf("\n                                              \xba    [5] chercher une voiture:      \xba");
	printf("\n                                              \xba    [6] retour:                    \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	do
	{
	printf("                                                                                      >> ");
	scanf("%d",choix1);
	if(*choix1>6||*choix1<1) printf("                                                     choix invalide!!\n ");
	}while(*choix1<1 || *choix1>6);
	system("cls");
	
	
}

//--------------------------------------------------------------------------------------------------------------------

void menu2(int *choix1)
{  system("cls");       	
	printf("\n                                              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba      GESTION DES CLIENTS          \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba    [1] ajouter un client:         \xba");
	printf("\n                                              \xba    [2] supprimer un client  :     \xba");
	printf("\n                                              \xba    [3] modifier un client  :      \xba");
	printf("\n                                              \xba    [4] afficher un client  :      \xba");
	printf("\n                                              \xba    [5] chercher unclient   :      \xba");
	printf("\n                                              \xba    [6] retour:                    \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	do
	{
	printf("                                                                                      >> ");
	scanf("%d",choix1);
	if(*choix1>6||*choix1<1) printf("                                                     choix invalide!!\n ");
	}while(*choix1<0 || *choix1>6);
	system("cls");
}

//--------------------------------------------------------------------------------------------------------------------

void menu3(int *choix1){
system("cls");       	
	printf("\n                                              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba      GESTION DES VOITURESS        \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba    [1] ajouter une loaction:      \xba");
	printf("\n                                              \xba    [2] supprimer une loaction:    \xba");
	printf("\n                                              \xba    [3] modifier une location:     \xba");
	printf("\n                                              \xba    [4] afficher uneloaction:      \xba");
	printf("\n                                              \xba    [5] chercher une location:     \xba");
	printf("\n                                              \xba    [6] retour:                    \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	do
	{
	printf("                                                                                      >> ");
	scanf("%d",choix1);
	if(*choix1>6||*choix1<1) printf("                                                     choix invalide!!\n ");
	}while(*choix1<0 || *choix1>6);
	system("cls");
}
//--------------------------------------------------------------------------------------------------------------------

void OP1(List * L , int c1 ){
	int k1 ;

	do{
		menu1(&k1);
		switch(k1){
			case 1 : ajjtri(L,c1);
			
			break;
			case 2 :char a[10];
	printf("donner matricul   :");
	scanf("%s",a); 
	supp(L,a,c1);
			break;
			case 3 : modifier(L,c1);
			break;
			
			case 4 :char F[10];
			printf("enter matricul : ");
			scanf("%s",F);
			 aff(*L,c1,F);
			break;
			
			case 5 :
				chercher(*L,c1);
				break;
				case 6 :
				printf("retourne : \n ");
		}
		
		
		
		
		
	}while(k1!=6);
	
	
	
	
	
	
	
}


//--------------------------------------------------------------------------------------------------------------------

int sob(Linked *ptr,Linked *omk , List*L , int s ){
	
			if(s==-1 ){
			if(ptr->suiv!=L->head){
				omk->suiv=ptr;
			}//keni fel wost tethat na3mlo hekom 
			else{
			L->head=ptr; 			
			}//keni tethat 9bal lhead na3mlo hekom 
				return 1 ;
	}
	else{
		if(s==1&&ptr->suiv->suiv==NULL){
			ptr->suiv->suiv=ptr;
			ptr->suiv=NULL;
return 1 ;
		} //keni chen7otoha ba3d il queue ..
		
	}
}

//--------------------------------------------------------------------------------------------------------------------

void cher(Linked *omk ,Linked *ptr,int *s,int c1 ){
	

		do{
		omk=ptr->suiv;
		if(*s!=0) { // lena l s sta3maltha  just bech n5ali omk yo93ed wra l ptr ya3ni ptr dima seba9 omk
ptr->suiv=ptr->suiv->suiv;
		} 
		if(c1==1) *s=strcmp(ptr->v.mat,ptr->suiv->v.mat);
		
		if(c1==2){
			*s=strcmp(ptr->c.cin,ptr->suiv->c.cin); // hedhy n9aren ptr o ptr suivant eli hiya 3amelha 9olchaaleha conteur 
	                                             	// ken ptr akber ya3tini 1 snn -1
		}
		
	                                         	

	}while(*s==1&&ptr->suiv->suiv!=NULL );//keni akber o zeda lconter mawsselech le5er ka3ba -> lconteur te3na n9admouh
		
		
	
	
	
}


//--------------------------------------------------------------------------------------------------------------------



void ajjtri(List *L,int c1){//ajj trié 3al CIN client o zeda ken CIN tet3awed yhothech ...
	int i =0,a=0 ,s=0;
	Linked *ptr,*omk;
	ptr=(Linked*)malloc(sizeof(Linked));
	if(c1==2){
		
			printf("donner CIN de client :  ");
	scanf("%s",ptr->c.cin);
	printf("checking CIN .... \n\n ");
	// da5el CIN barek taw ken l9itha mawjouda nfassa5ha lptr snn nkamel  n3amer lo5rin
		
	}
	if(c1==1){
		printf("donner matricul :  ");
	scanf("%s",ptr->v.mat);
	printf("checking matricul  .... \n\n ");
	}
ptr->suiv=L->head;                
	if(L->head==NULL){
		L->head=ptr;
		ptr->suiv=NULL;	
		a=1;	//hedhy keni 1 ya3ni mba3ed nkamel n3amer ken le ya3ni n3amarech nfassa5
	}
	else{
		cher(omk,ptr,&s,c1);
 a=sob(ptr,omk,L,s);
	}
		if(a==1)// ken l a==1 nkamlo n3amro lo5rin yaani el ID eli hatineha jdida
	{
		if(c1==2){
			printf("donner  nom  : ");
		//na9ssa fnc lel cntrl de saisie 
		scanf("%s",ptr->c.nom);
			printf("donner adresse : ");
					//na9ssa fnc lel cntrl de saisie 
		scanf("%s",ptr->c.ad);
				//na9ssa fnc lel cntrl de saisie 

			printf("donner tlf : ");
		scanf("%d",&ptr->c.tlf);
			
		}
	if(c1==1){
	
		/*char mat[10];
char marque[15];
float px ;
char dfa [10];
		*/
				printf("donner  marque  : ");
		//na9ssa fnc lel cntrl de saisie 
		scanf("%s",ptr->v.marque);
			printf("donner date fin assurance : ");
					//na9ssa fnc lel cntrl de saisie 
		scanf("%s",ptr->v.dfa);
				//na9ssa fnc lel cntrl de saisie 
			printf("donner prix : ");
		scanf("%f",&ptr->v.px);
		}
			
	}
	else {
		if(c1==2){
		printf("CIN  %s  est deja existé \n",ptr->c.cin);
		
		}
		if(c1==1){
					printf("matricul  %s  est deja existé \n",ptr->v.mat);

		}
		free (ptr);
	}// snn nfass5o il ptr 3ala 5ater il id deja mawjoud menha


}

//--------------------------------------------------------------------------------------------------------------------

void aff(List L,int c1,char m[10] ){
	if(L.head!=NULL){
	int b=0;
	Linked *ptr = L.head,*omk;
	do{
		omk=ptr;
		if(b!=0)	ptr=ptr->suiv;
		if(c1==2)
		b=strcmp(m,ptr->c.cin);
		else{
				b=strcmp(m,ptr->v.mat);
		}
		}while(b==1&&ptr->suiv!=NULL);
	if(b==0){
		if(c1==2){	
		printf("les information de client '%s' sont  :\n " ,ptr->c.nom);
		printf(" CIN : %s \n ",ptr->c.cin);
		printf(" l'adresse = %s \n ",ptr->c.ad);
		printf(" num = %d \n ",ptr->c.tlf);	
		}
			if(c1==1){
						printf("les information de voiture '%s' sont  :\n " ,ptr->v.mat);
		printf(" marque : %s \n ",ptr->v.marque);
		printf(" date de  fin d'assurance  = %s \n ",ptr->v.dfa);
		printf(" prix = %f \n ",ptr->v.px);
			} 
	}
	
	}
	else printf("u gotta enter 1 data at least : \n");
	printf("\n\n\n\n");
	printf("                                                       press any bottom to continue !!                                       \n                                                        ");
	getch();
}
//--------------------------------------------------------------------------------------------------------------------

void supp(List *L,char a[10],int c1){

	if(L->head!=NULL){
		
	
	int b=0;
	Linked *ptr = L->head,*omk;
	do{
		omk=ptr;
		if(b!=0)	ptr=ptr->suiv;
		if(c1==2)
		b=strcmp(a,ptr->c.cin);
		else{
				b=strcmp(a,ptr->v.mat);
		}
		}while(b==1&&ptr->suiv!=NULL);
		if(b==0){
			if(ptr==L->head) {
				L->head=ptr->suiv;
				free(ptr);
			}
			else{
				if(ptr->suiv==NULL) {
					omk->suiv=NULL;
					free(ptr);
				}
				else{
					omk->suiv=ptr->suiv;
					free(ptr);
				}
			}
			printf(" removed successfully : ",a);
		}
		}
			else printf("u gotta enter 1 data  at least!!");
	printf("\n\n\n\n");
	printf("                                                       press any bottom to continue !!                                       \n                                                        ");
	getch();
				}


//--------------------------------------------------------------------------------------------------------------------

void chercher (List L,int c1){
	
	if(L.head!=NULL){
		char a[10],b=0;
	int c;
	Linked *ptr = L.head;
	if(c1==2){
		printf("donner CIN   :");
	scanf("%s",a);
	}
	if(c1==1){
		printf("donner matricule   :");
	scanf("%s",a);
	}
	
	
	do{
		
		if(b!=0) ptr=ptr->suiv;
		if(c1==2)
		b=strcmp(a,ptr->c.cin);
		
		if(c1==1) b=strcmp(a,ptr->v.mat);		
		
		}while(b==1&&ptr->suiv!=NULL);
				
		if(b==0){	 	
		
		system("cls");
	printf("\n                                              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba              founded :             \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba    [1] affiche :                  \xba");
	printf("\n                                              \xba    [2] quiter:                    \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");	

			do{
					printf("                                                                        >> ");
                    scanf("%d",&c);
			}while(c>2||c<1);
					system("cls");

			if(c==1){
				if(c1==2) aff(L, c1,ptr->c.cin);
				
				
				
				if(c1==1) 				aff(L, c1,ptr->v.mat);

			}
			system("cls");
		 
		}
	
		
	}
	
	else printf("u gotta enter 1 data  at least!!");
	printf("\n\n\n\n");
	printf("                                                       press any bottom to continue !!                                       \n                                                        ");
	getch();
				}
				
				

//--------------------------------------------------------------------------------------------------------------------

void modifier(List *L,int c1){
	if(L->head!=NULL){
		
	char a[10];
	int c,b=0,d=0;
	if(c1==2){
		printf("donner CIN   :");	
		scanf("%s",a);
	}
	if(c1==1){
		
				printf("donner matricul   :");
		scanf("%s",a);

	}
	Linked *ptr = L->head;
	do{
		
		if(b!=0)	ptr=ptr->suiv;
		
		if(c1==2)
		b=strcmp(a,ptr->c.cin);
	
	if(c1==1) 		b=strcmp(a,ptr->v.mat);

		
		}while(b==1&&ptr->suiv!=NULL);
	if(b==0){
		
		do{
	
		
		system("cls");      
		
			

		 	if(c1==2){
			 
	printf("\n                                              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba             modifier client:      \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba    [1] modf cin:                  \xba");
	printf("\n                                              \xba    [2] modf nom:                  \xba");
	printf("\n                                              \xba    [3] modf adresse:              \xba");
	printf("\n                                              \xba    [4] modf tlf:                  \xba");
	printf("\n                                              \xba    [5] retour:                    \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
		}		
		if(c1==1){
			printf("\n                                              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba            modifier voiture:      \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xba    [1] modf matricul:             \xba");
	printf("\n                                              \xba    [2] modf marque:               \xba");
	printf("\n                                              \xba    [3] modf prix de loc:          \xba");
	printf("\n                                              \xba    [4] modf date fin d'ass':      \xba");
	printf("\n                                              \xba    [5] retour:                    \xba");
	printf("\n                                              \xba                                   \xba");
	printf("\n                                              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
			
		}
		do{
	printf("                                                                        >> ");

    scanf("%d",&c);
	if(c>5||c<1) printf("                                                     choix invalide!!\n ");
	}while(c<1||c>5);
		switch(c){	
		case 1 : 
		Linked *ktr,*omk;
		ktr=(Linked*)malloc(sizeof(Linked));
	ktr->suiv=L->head;
	if(c1==2){
		printf("enter new cin : ");
		         scanf("%s",ktr->c.cin);
	}
		 if(c1==1){
		 	printf("enter new matricul : ");
		         scanf("%s",ktr->v.mat);
		 }
		         cher(omk,ktr,&b,c1);
		       d=  sob(ktr,omk,L,b);
		       if(d==1){
		       	if(c1==2){
		       		memcpy(ktr->c.ad,ptr->c.ad,sizeof(ktr->c.ad));
		       			       	memcpy(ktr->c.nom,ptr->c.nom,sizeof(ktr->c.nom));
		       			       	ktr->c.tlf=ptr->c.tlf;
		       			 supp(L,ptr->c.cin,c1);      	
				   }
		       	if(c1==1){
		       		memcpy(ktr->v.dfa,ptr->v.dfa,sizeof(ktr->v.dfa));
		       			       	memcpy(ktr->v.marque,ptr->v.marque,sizeof(ktr->v.marque));
		       			       	ktr->v.px=ptr->v.px;
		       				       			 supp(L,ptr->v.mat,c1);      	

				   }
            	       	
			   }
			   else{
			   	printf(" deja existé \n");
			   	free(ktr);
			   } 
		       
		         
		break;
	
				case 2 :
					if(c1==2){
						 printf("enter new nom : ");
		         scanf("%s",ptr->c.nom);
					}
					if(c1==1){
						 printf("enter new marque : ");
		         scanf("%s",ptr->v.marque);
					}
			
			break;
		case 3 :
			if(c1==2){ printf("enter new adresse  : ");
		         scanf("%s",ptr->c.ad);
			}
			if(c1==1){ printf("enter new prix  : ");
		         scanf("%f",&ptr->v.px);
			}
			
		break;
		
		case 4 : 
		if(c1==2){
			printf("enter new tlf : ");
		         scanf("%d",&ptr->c.tlf);
		}
		 if(c1==1){
		 	printf("enter new date  : ");
		         scanf("%s",ptr->v.dfa);
		 }
		}
		
			
	
		
		}while(c!=5);
	}
	
	else{
		
		printf(" n'existe pas  ");
	}
}
else{
	printf("u should add 1 data at least!!");
	
}

printf("\n\n\n\n");
	printf("                                                       press any bottom to continue !!                                       \n                                                        ");
	getch();	
}

//--------------------------------------------------------------------------------------------------------------------


void OP2(List *L,int c1 ){
		int k1 ;
	do{
		menu2(&k1);
		switch(k1){
			case 1 : ajjtri(L,c1);
			
			break;
			case 2 : char a[10];
	printf("donner CIN   :");
	scanf("%s",a);
			supp(L,a,c1);
			break;
			case 3 : modifier(L,c1);
			break;
			case 4 :  char m[10];
			printf("enter cin : ");
			scanf("%s",m);
			 aff(*L,c1,m);
			break;
			case 5 : chercher(*L,c1);
			break;
				case 6 :
				printf("retourne : \n ");
		}	
	}while(k1!=6);
}

//--------------------------------------------------------------------------------------------------------------------

void OP3(List *L){
		int c1 ;
	do{
		menu3(&c1);
		switch(c1){
			
			/*
			yoo chat can u finish those for me : Opérations d’ajout, suppression, modification et de recherche.
? Affichage des clients qui ont loué une voiture donnée.
? Affichage des voitures louées par un client donné.
? Affichage des voitures disponibles après une date donnée.
			
			
			
			*/
			case 1 : 
			break;
			case 2 : 
			break;
			case 3 : 
			break;
			case 4 : 
			break;
			case 5 :
				break;
				case 6 :
				printf("retourne : \n ");
		}
		
	}while(c1!=6);
}


	
