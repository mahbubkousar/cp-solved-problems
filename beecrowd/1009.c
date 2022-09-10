//https://www.beecrowd.com.br/judge/en/problems/view/1009
//1009 - Salary with Bonus
//Mahbub Kousar
#include<stdio.h>
int main()
{
      double salary,value,TOTAL;
      char name;
      scanf("%s %lf %lf",&name,&salary,&value);                               
      TOTAL = salary+value*.15;
      printf("TOTAL = R$ %.2lf\n",TOTAL);
      return 0; 
}
