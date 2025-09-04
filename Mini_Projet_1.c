#include <stdio.h>

int nombre_etudiant;
float moyenne;


float calculerMoyenne(float notes[], int nombre_etudiant){
    float somme=0;
    int i;
    for(i=0;i<nombre_etudiant;i++){
        somme +=notes[i];
    }
    
    return somme / nombre_etudiant;
}

int main(){
    
    int i;

    printf("le max d'etudiant 30\n");
    do{
    printf("Enter nombre d'etudiants: ");
    scanf("%d",&nombre_etudiant);

    if(nombre_etudiant > 30)
    printf("donner un nombre inferieur ou egal a 30 \n");

    if(nombre_etudiant <= 0)
    printf("donner un nombre superieur a 0 \n");
    

    }while(nombre_etudiant > 30 || nombre_etudiant < 1);
    
    float notes[nombre_etudiant];

    for(i=0;i<nombre_etudiant;i++){
        do{
            printf("Enter note d'etudiant %d: ",i+1);
            scanf("%f",&notes);
            if(notes[i] < 0)
            printf("donner un note superieur ou egal a 0 \n");

            if(notes[i] > 20)
            printf("donner un note inferieur ou egal a 20 \n");

        }while(notes[i] < 0 || notes[i] > 20);



            
    }
    
    float result = calculerMoyenne(notes,nombre_etudiant);
    printf("moyenne de la classe est %.2f",result);
    return 0;
}