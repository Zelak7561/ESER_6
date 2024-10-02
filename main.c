#include <stdio.h>

void fun(int i) {
    if (i != 0) {
        for (int j = 0; j < i; j++) {
            printf("\n");

            printf("*******************\n");
            printf("*                 *\n");
            printf("*                 *\n");
            printf("*                 *\n");
            printf("*                 *\n");
            printf("*                 *\n");
            printf("*******************\n");

            printf("\n");
        }
    }
}

int main(void) {
    int volte = 0;

    printf("Inserisci le volte :\n");
    scanf("%d", &volte);

    fun(volte);

    return 0;
}
