# include <stdio.h>

int _pow(int a, int b)
{
  while (b!=0)
  {
    a=a*a;
    b--;
  }
}
int main()
{
  int x = _pow(10,2);
  printf("%d",x);
  return 0;
}