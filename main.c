#include <stdio.h>
#include <stdlib.h>

                                            struct contact {
char numerotelephone[10];
char nom[10];
char prenom[10];
char email[40];
char instagram[20];
};
struct contact contacts[10];
int numeroContacts=0;
                                           void ajouter() {
    printf("Enter phone number:");scanf("%s",contacts[numeroContacts].numerotelephone);
    printf("Enter name:");scanf("%s",contacts[numeroContacts].nom);
    printf("Enter first name:");scanf("%s",contacts[numeroContacts].prenom);
    printf("Enter email:");scanf("%s",contacts[numeroContacts].email);
    printf("Enter Instagram username:");scanf("%s",contacts[numeroContacts].instagram);
    numeroContacts=numeroContacts+1;
    printf("Contact ajoute.\n");
}

                                           void suprimer() {
    char numerotelephone[10];
    int i, k;
printf("entrez un numero our suprimer:");
    scanf("%s", numerotelephone);
for (i=0;i<numeroContacts;i++) {
    if ((numerotelephone, contacts[i].numerotelephone)==0){
        for (k=i;k<numeroContacts-1;k++) {
        contacts[k]=contacts[k+1];}
        numeroContacts--;
        printf("Contact suprimer\n");
        return;}}
    printf("n a pas de contact\n");
}

                                         void modifier() {
    char numerotelephone[10];
    int i;
printf("Enter phone number to edit:");
    scanf("%s",numerotelephone);

for (i=0; i<numeroContacts;i++) {
    if ((numerotelephone,contacts[i].numerotelephone)==0) {
    printf("Entrezle nouveau nom:");scanf("%s", contacts[i].nom);
    printf("entrez le nouveau prenom:");scanf("%s",contacts[i].prenom);
    printf("Entrez le nouveau email:");scanf("%s",contacts[i].email);
    printf("entrezle nouveau insta:");scanf("%s",contacts[i].instagram);

    printf("Contact modifier\n");
return;
}
}

printf("n a pasde contact");
}

                                        void afficher(){
    int i;
if (numeroContacts==0) {
    printf("n' a pas de contact");
        return;
    }
    printf("numero\tnom\tprenom\tEmail\tInsta\n");
    for (i = 0; i < numeroContacts; i++) {
        printf("%s\t%s\t%s\t%s\t%s\n", contacts[i].numerotelephone, contacts[i].nom, contacts[i].prenom, contacts[i].email, contacts[i].instagram);
    }
}

                                        int main() {

        int choice;

 while (1) {
        printf("\nbonjour dans les contact\n");
        printf("1. ajouter\n2. suprimer\n3. modifier\n\n4. afficher\n5. quiter\nentrer ton choix : ");
        scanf("%d", &choice);
switch (choice) {
case 1:ajouter();break;
case 2:suprimer();break;
case 3:modifier();break;
case 4:afficher();break;
case 5:quiter(0);
default:
printf("erreur\n");
        }
    }
    return 0;
}
