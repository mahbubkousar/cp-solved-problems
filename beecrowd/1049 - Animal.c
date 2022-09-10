//https://www.beecrowd.com.br/judge/en/problems/view/1049
//1049 - Animal
//Mahbub Kousar
#include <stdio.h>
#include <string.h>
int main()
{
    char n1[15],n2[15],n3[15];
    scanf("%s %s %s", &n1,&n2,&n3);
    if ((strcmp(n1, "vertebrado")==0) && (strcmp(n2, "ave")==0) && (strcmp(n3, "carnivoro")==0) )
    printf("aguia\n");

    else if ((strcmp(n1, "vertebrado")==0) && (strcmp(n2, "ave")==0) && (strcmp(n3, "onivoro")==0) )
    printf("pomba\n");

    else if ((strcmp(n1, "vertebrado")==0) && (strcmp(n2, "mamifero")==0) && (strcmp(n3, "onivoro")==0) )
    printf("homem\n");

    else if ((strcmp(n1, "vertebrado")==0) && (strcmp(n2, "mamifero")==0) && (strcmp(n3, "herbivoro")==0) )
    printf("vaca\n");

    else if ((strcmp(n1, "invertebrado")==0) && (strcmp(n2, "inseto")==0) && (strcmp(n3, "hematofago")==0) )
    printf("pulga\n");

    else if ((strcmp(n1, "invertebrado")==0) && (strcmp(n2, "inseto")==0) && (strcmp(n3, "herbivoro")==0) )
    printf("lagarta\n");

    else if ((strcmp(n1, "invertebrado")==0) && (strcmp(n2, "anelideo")==0) && (strcmp(n3, "hematofago")==0) )
    printf("sanguessuga\n");

    else if ((strcmp(n1, "invertebrado")==0) && (strcmp(n2, "anelideo")==0) && (strcmp(n3, "onivoro")==0) )
    printf("minhoca\n");

    return 0;
}
