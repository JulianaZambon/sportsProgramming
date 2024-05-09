#include <stdio.h>
 
int main() {
 
    //A entrada é dada por 8 inteiros separados por espaço em uma única linha. É garantido que cada inteiro é ou 0 ou 1.
    //Se você tem certeza que a mensagem foi corrompida, imprima apenas o caracter "S". Caso contrário, imprima "N?" (sem aspas).
    //Adicione uma quebra de linha ao final de sua resposta.
 
    //se o bit de segurança for 0 e o código da mensagem tem um número ímpar de bits 1, então com certeza a mensagem foi corrompida. 
    //Por outro lado, mesmo que não haja uma contradição na versão criptografada, o bit de segurança não garante que a mensagem 
    //captada condiz com a original, uma vez que pode ocorrer de mais de 1 bit ter sido comprometido.

    int a, b, c, d, e, f, g, h; // 8 inteiros

    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);

    int sum = a + b + c + d + e + f + g + h;

    if (sum % 2 == 0) {
        printf("N?\n");
    } else {
        printf("S\n");
    }

    return 0;
}