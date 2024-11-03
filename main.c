#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int  difficolta;
    int numCasuale;
    int i;
    int numero;
    int tentativo = 0;
    int numeroIndovinato = 0;
    printf("--GuessTheNumber--");
    printf("\n");
    printf("difficolta facile: 7 tentativi , range tra 10 e 15");
    printf("\n");
    printf("difficolta media : 4 tentativi , range tra 10 e 20:");
    printf("\n");
    printf("difficolta challenge : 1 tentativo , range tra 10 e 100 : ");
    printf("\n");
    printf("Quindi , che difficolta vorresti usare (1=facile,2=medium,3=challenge) : ");
    scanf("%d", &difficolta);
    printf("\n");


    if (difficolta == 2 ) {
        const int MIN = 10;
        const int MAX = 20;

    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        numCasuale = rand() % (MAX - MIN + 1) + MIN;
        printf("inserisci il numero");
        scanf("%d", &numero);
        printf("il numero generato e:%d\n", numCasuale);
        if (numero <= MAX && numero >= MIN) {
            if (numero == numCasuale) {
                printf("bravo hai indovinato il numero \n");
                numeroIndovinato++;
                break;

            } else {
                tentativo++;
                printf("attenzione hai sbagliato!\n");
                if (tentativo > 5) {
                    printf("tentativi finiti\t");
                    break;
                }
            }
        } else {
            printf("non sei entrato nel range\n");
        }
    }
    }
    if (difficolta == 1 ) {
        const int MIN1 = 10;
        const int MAX1 = 15;

        srand(time(NULL));
        for (i = 0; i < 10; i++) {
            numCasuale = rand() % (MAX1 - MIN1 + 1) + MIN1;
            printf("inserisci il numero");
            scanf("%d", &numero);
            printf("il numero generato e:%d\n", numCasuale);
            if (numero <= MAX1 && numero >= MIN1) {
                if (numero == numCasuale) {
                    printf("bravo hai indovinato il numero \n");
                    numeroIndovinato++;
                    break;

                } else {
                    tentativo++;
                    printf("attenzione hai sbagliato!\n");
                    if (tentativo > 8 ) {
                        printf("tentativi finiti\t");
                        break;
                    }
                }
            } else {
                printf("non sei entrato nel range\n");
            }
        }
    }
    if (difficolta == 3) {
        const int MIN2 = 10;
        const int MAX2 = 100;

        srand(time(NULL));
        for (i = 0; i < 10; i++) {
            numCasuale = rand() % (MAX2 - MIN2 + 1) + MIN2;
            printf("inserisci il numero");
            scanf("%d", &numero);
            printf("il numero generato e:%d\n", numCasuale);
            if (numero <= MAX2 && numero >= MIN2) {
                if (numero == numCasuale) {
                    printf("bravo hai indovinato il numero \n");
                    numeroIndovinato++;
                    break;

                } else {
                    tentativo++;
                    printf("attenzione hai sbagliato!\n");
                    if (tentativo > 2) {
                        printf("tentativi finiti\t");
                        break;
                    }
                }
            } else {
                printf("non sei entrato nel range\n");
            }
        }
    }
    if (numeroIndovinato > 0) {
        printf("hai indovinato il numero  in %d tentativi \n", tentativo);
    } else {
        printf("non sei riuscito ad indovinare nessun numero ");
    }
    return 0;
}

