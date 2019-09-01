#include <stdio.h>
#include <stdlib.h>

/*Faça um programa onde o usuário informa a quantidade de alunos na sala, em seguida receba a idade de
todos os alunos da sala e exiba TODAS AS IDADES em ordem crescente.*/

int main()
{
    int qtdAlunos;

    printf("Informe a quantidade de alunos na sala de aula: ");
    scanf("%d", &qtdAlunos);
    printf("\n");

    int alunos[qtdAlunos];
    int i, j, trocaPosicaoVertor;

    for(i = 0; i < qtdAlunos; i++){
        printf("Digite a idade do aluno %d: ", i);
        scanf("%d", &alunos[i]);
    }

    //Trocando as posições dos vetores do menor para o maior
    for(i = 0; i < qtdAlunos; i++){
        for(j = i; j < qtdAlunos; j++){
            if(alunos[i] > alunos[j]){
                trocaPosicaoVertor = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = trocaPosicaoVertor;
            }
        }
    }
    printf("\n*********** Idades em ordem crescente ***********\n");
    for(i = 0; i < qtdAlunos; i++){
        printf("\nIdade do aluno %d e %d", i, alunos[i]);
    }
    printf("\n");

    return 0;
}
