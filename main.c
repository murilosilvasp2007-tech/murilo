#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2, media;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\nNome do aluno: %s", nome);
    printf("Media: %.2f\n", media);

    if (media >= 7) {
        printf("Resultado: Parabéns, Aprovado\n");
    } 
    else if (media >= 5 && media <= 6.9) {
        printf("Resultado: Recuperação\n");
    } 
    else {
        printf("Resultado: Reprovado\n");
    }

    return 0;
}
