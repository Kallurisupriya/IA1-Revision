#include<stdio.h>
int input()
{
  int i;
  scanf("%d",&i);
  return i;
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c)
  return a;
  else
  if(b>c&&b>a)
  return b;
  else
  if(c>a&&c>b)
  return c;
}
void output(int a,int b,int c,int largest)
{
  printf("the greatest of the %d,%d and %d is %d", a, b, c, largest);
}
int main()
{
  int a, b, c, largest;
  printf("enter three numbers");
  a= input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}