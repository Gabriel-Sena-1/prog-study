#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Para usar a função strcmp
#define MAX_STRING 100

typedef struct {
    char nome[MAX_STRING];
    int pontos;
    int vitorias;
    int empates;
    int derrotas;
    int gols_marcados;
    int gols_sofridos;
} Time;

int main() {
    Time * times;
    char temp;
    int qtd_times = 0;

    printf("\n\nInsira quantos times:\n");
    scanf("%d", &qtd_times);
    scanf("%c", &temp);  // Consumir o caractere de nova linha deixado pelo scanf anterior

    times = (Time *) malloc(qtd_times*sizeof(Time));

    for (int i = 0; i < qtd_times; i++) {
        printf("Insira o nome do time %d:\n", i + 1);
        fgets(times[i].nome, MAX_STRING, stdin);
        times[i].nome[strcspn(times[i].nome, "\n")] = '\0';  // Remover a nova linha lida pelo fgets
    }

    int qtd_jogos = 0;

    printf("\n\nInsira quantos jogos terá o campeonato:\n");
    scanf("%d", &qtd_jogos);
    scanf("%c", &temp);  // Consumir o caractere de nova linha

    char time_1[MAX_STRING], time_2[MAX_STRING];
    int gols_time_1 = 0, gols_time_2 = 0;

    for (int i = 0; i < qtd_jogos; i++) {
        fgets(time_1, MAX_STRING, stdin);
        time_1[strcspn(time_1, "\n")] = '\0';  // Remover a nova linha
        fgets(time_2, MAX_STRING, stdin);
        time_2[strcspn(time_2, "\n")] = '\0';  // Remover a nova linha
        scanf("%d", &gols_time_1);
        scanf("%d", &gols_time_2);
        scanf("%c", &temp);  // Consumir o caractere de nova linha

        if (gols_time_1 > gols_time_2) {
            for (int j = 0; j < qtd_times; j++) {
                if (strcmp(time_1, times[j].nome) == 0) {  // Usar strcmp para comparar strings
                    times[j].pontos += 3;
                    times[j].vitorias += 1;
                    times[j].gols_marcados += gols_time_1;
                    times[j].gols_sofridos += gols_time_2;
                }
                if (strcmp(time_2, times[j].nome) == 0) {
                    times[j].derrotas += 1;
                    times[j].gols_marcados += gols_time_2;
                    times[j].gols_sofridos += gols_time_1;
                }
            }
        } else if (gols_time_2 > gols_time_1) {
            for (int j = 0; j < qtd_times; j++) {
                if (strcmp(time_2, times[j].nome) == 0) {
                    times[j].pontos += 3;
                    times[j].vitorias += 1;
                    times[j].gols_marcados += gols_time_2;
                    times[j].gols_sofridos += gols_time_1;
                }
                if (strcmp(time_1, times[j].nome) == 0) {
                    times[j].derrotas += 1;
                    times[j].gols_marcados += gols_time_1;
                    times[j].gols_sofridos += gols_time_2;
                }
            }
        } else {  // Empate
            for (int j = 0; j < qtd_times; j++) {
                if (strcmp(time_1, times[j].nome) == 0) {
                    times[j].pontos += 1;
                    times[j].empates += 1;
                    times[j].gols_marcados += gols_time_1;
                    times[j].gols_sofridos += gols_time_2;
                }
                if (strcmp(time_2, times[j].nome) == 0) {
                    times[j].pontos += 1;
                    times[j].empates += 1;
                    times[j].gols_marcados += gols_time_2;
                    times[j].gols_sofridos += gols_time_1;
                }
            }
        }
    }

    for (int i = 0; i < qtd_times; i++) {
        printf("%s,%d,%d,%d,%d,%d,%d\n", times[i].nome, times[i].pontos, times[i].vitorias, times[i].empates, times[i].derrotas, times[i].gols_marcados, times[i].gols_sofridos);
    }

    return 0;
}
