#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char argv[]) {
    if (argc == 4 || (argc == 3 && strcmp(argv[1], "car") == 0)) {
        char op = argv[1];
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = _add(atof(argv[2]), atof(argv[3]));
            printf("%lf", r);
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(argv[2]), atof(argv[3]));
            printf("%lf", r);
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(argv[2]), atof(argv[3]));
            printf("%lf", r);
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(argv[2]), atof(argv[3]));
            printf("%lf", r);
        }
        else if (strcmp(op, "car") == 0 && argc == 3) {
            r = _car(atof(argv[2]));
            printf("%lf", r);
        }
        else {
            printf("Erreur de paramètres");
        }
    }
    else {
        printf("Erreur de paramètres");
    }
    return 0;
}	
