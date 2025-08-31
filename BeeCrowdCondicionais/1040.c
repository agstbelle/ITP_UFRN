#include <stdio.h>

int main(){

    float n1, n2, n3, n4, media, exame, media_pf;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media= ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);

    if (media >= 7){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5 && media <= 6.9){
        scanf("%f", &exame);
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", exame);
        media_pf = (media + exame)/2;
        if (media_pf >= 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media_pf);
        }     
    }
    else if (media < 5){
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }

    return 0;
}