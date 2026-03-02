#include <stdio.h>

void sistema() {
    printf("Acesso autorizado\n");
}

void proxy(int senha) {
    if (senha == 1234) {
        sistema();
    } else {
        printf("Senha incorreta. Acesso negado.\n");
    }
}

int main() {

    int senha1 = 1234;
    int senha2 = 1111;

    printf("Tentativa 1:\n");
    proxy(senha1);

    printf("\nTentativa 2:\n");
    proxy(senha2);

    return 0;
}