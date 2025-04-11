#include <stdio.h>
#include <stdlib.h>

void main() {
    int n1;
    int n2;
    int n3;
    int M;
    printf("Qual a primeira nota\n");
    scanf("%d",&n1);
    printf("Qual a segunda nota\n");
    scanf("%d",&n2);
    printf("Qual a terceira nota\n");
    scanf("%d",&n3);
    M = (n1+n2+n3)/3;
    if (M > 7) {
        printf("Com uma nota de %d, o aluno passou!\n",M);
    } else {
        printf("Com uma not de %d, o aluno reprovou.\n",M);
    }
}