#include <stdio.h>
#include <math.h> 

int main() {
    
    double a, b, c, delta, racine1, racine2;

    
    printf("Entrez le coefficient a : ");
    scanf("%lf", &a);
    printf("Entrez le coefficient b : ");
    scanf("%lf", &b);
    printf("Entrez le coefficient c : ");
    scanf("%lf", &c);

    
    delta = b * b - 4 * a * c;

    
    if (delta > 0) {
        
        racine1 = (-b + sqrt(delta)) / (2 * a);
        racine2 = (-b - sqrt(delta)) / (2 * a);
        printf("Les racines sont réelles et distinctes :\n");
        printf("Racine 1 = %.2lf\n", racine1);
        printf("Racine 2 = %.2lf\n", racine2);
    } 
    else if (delta == 0) {
        
        racine1 = -b / (2 * a);
        printf("Il y a une racine réelle double :\n");
        printf("Racine = %.2lf\n", racine1);
    } 
    else {
        
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        printf("Les racines sont complexes :\n");
        printf("Racine 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Racine 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

     system("pause"); 
    return 0;
}
