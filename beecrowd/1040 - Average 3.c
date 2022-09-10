//https://www.beecrowd.com.br/judge/en/problems/view/1040
//1040 - Average 3
//Mahbub Kousar
#include <stdio.h>

int main()
{
    double n1,n2,n3,n4,avg;
    scanf("%lf %lf %lf %lf", &n1,&n2,&n3,&n4);
    avg = ((n1*2)+(n2*3)+(n3*4)+n4)/(2+3+4+1);
    printf("Media: %.1f\n", avg);

    if(avg>=7)
        printf("Aluno aprovado.\n");
    else if (avg<5)
        printf("Aluno reprovado.\n");
    else if (avg>=5 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        
        double n5, avgf;
        scanf("%lf", &n5);
        printf("Nota do exame: %.1f\n", n5);
        avgf = (avg + n5)/2.0;
        if (avgf>=5)
            printf("Aluno aprovado.\n");
        else if (avgf<=4.9)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", avgf);
    }


    return 0;
}
