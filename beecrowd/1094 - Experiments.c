//https://www.beecrowd.com.br/judge/en/problems/view/1094
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int i,n,total=0,rabit=0,rat=0,frog=0,a;
    char name;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&a,&name);
        if(name == 'C')
        {
            rabit+=a;
            total+=a;
        }
        else if(name == 'R')
        {
            rat+=a;
            total+=a;
        }
        else if(name == 'S')
        {
            frog+=a;
            total+=a;
        }
    }
  float prat,pfrog,prabit;
  prat= (float)(rat)/(float)(total)*100;
  prabit= (float)(rabit)/(float)(total)*100;
  pfrog= (float)(frog)/(float)(total)*100;

  printf("Total: %d cobaias\n",total);
  printf("Total de coelhos: %d\n",rabit);
  printf("Total de ratos: %d\n",rat);
  printf("Total de sapos: %d\n",frog);
  printf("Percentual de coelhos: %.2f %%\n",prabit);
  printf("Percentual de ratos: %.2f %%\n",prat);
  printf("Percentual de sapos: %.2f %%\n",pfrog);
    return 0;
}
