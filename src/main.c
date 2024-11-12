#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {  // La signature correcte pour main
    if (argc == 4 || (argc == 3 && strcmp(argv[1], "car") == 0)) {  // Vérifier les bons arguments
        char *op = argv[1];  // Utilisation correcte du type char * pour les opérations
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = add(atof(argv[2]), atof(argv[3]));  // Utilisation des fonctions sans underscore
            printf("%.2lf\n", r);  // Formatage du résultat avec 2 décimales
        }
        else if (strcmp(op, "sub") == 0) {
            r = sub(atof(argv[2]), atof(argv[3]));
            printf("%.2lf\n", r);
        }
        else if (strcmp(op, "mul") == 0) {
            r = mul(atof(argv[2]), atof(argv[3]));
            printf("%.2lf\n", r);
        }
        else if (strcmp(op, "div") == 0) {
            if (atof(argv[3]) == 0) {  // Vérification pour éviter la division par zéro
                printf("Erreur : division par zéro\n");
            } else {
                r = div(atof(argv[2]), atof(argv[3]));
                printf("%.2lf\n", r);
            }
        }
        else if (strcmp(op, "car") == 0 && argc == 3) {  // Calcul du carré
            r = car(atof(argv[2]));
            printf("%.2lf\n", r);
        }
        else {
            printf("Erreur de paramètres\n");
        }
    }
    else {
        printf("Erreur de paramètres\n");
    }
    return 0;
}
