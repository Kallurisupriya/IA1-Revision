#include<stdio.h>
int input_n()
{
  int n; 
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=1;i<=n;i++);
  {
   sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{ 
  int j;
  for(j=1;j<=n;j++);
  printf("%d+", j);
  printf("%dis%d",n, sum);
}
int main()
{
  int n, sum, i;
  n=input_n();
  sum=sum_n(n);
  output(n,sum); 
  return 0; 
}