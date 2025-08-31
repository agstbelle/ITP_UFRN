#include <stdio.h>

int main() {
    int di, df;
    int hi, mi, si;
    int hf, mf, sf;

    scanf("Dia %d", &di);
    scanf(" %d : %d : %d", &hi, &mi, &si);
    scanf(" Dia %d", &df);           
    scanf(" %d : %d : %d", &hf, &mf, &sf);

    long inicio = (long)di * 24 * 3600 + hi * 3600 + mi * 60 + si;
    long fim    = (long)df * 24 * 3600 + hf * 3600 + mf * 60 + sf;

    long dur = fim - inicio;

    int dias = (int)(dur / (24 * 3600)); dur %= (24 * 3600);
    int horas = (int)(dur / 3600);       dur %= 3600;
    int minutos = (int)(dur / 60);
    int segundos = (int)(dur % 60);

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
