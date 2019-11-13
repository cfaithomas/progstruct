#include <stdio.h>

/**************************prototype***********************/
int divise(int ,int);
int trouveplusgrand(int,int);
void menuDAB();
/************************definition*************************/
void menuDAB() {
    printf("1-Déposer\n");
    printf("2-Retirer\n");
    printf("3-Virer\n");
    printf("4-Solde des comptes\n");

}

int trouveplusgrand(int nb1, int nb2) {
 if(nb1>nb2)
     return nb1;
 else
     return nb2;
}

int divise(int nb1, int nb2) {
    return nb1%nb2;
}

int main() {
    menuDAB();
    printf("%d\n",divise(4,2));
    printf("%d",trouveplusgrand(1,2));
    return 0;
}