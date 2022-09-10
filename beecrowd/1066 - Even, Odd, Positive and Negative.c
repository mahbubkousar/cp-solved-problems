//https://www.beecrowd.com.br/judge/en/problems/view/1066
//Mahbub Kousar
#include <stdio.h>

int main()
{
        int a,n;
        int ev=0,od=0,pos=0,neg=0;
        for(a=1;a<=5;a++){
            scanf("%d",&n);
            if(n%2==0){
                ev++;
            }
            if(n%2!=0){
                od++;
            }
            if(0<n){
                pos++;
            }
            if(0>n){
                neg++;
            }

       }
        printf("%d valor(es) par(es)\n",ev);
        printf("%d valor(es) impar(es)\n",od);
        printf("%d valor(es) positivo(s)\n",pos);
        printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}
