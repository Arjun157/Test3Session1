#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef _fraction Fraction
Fraction input_fraction()
{
  int f1;
  printf("Enter a num\n");
  scanf("%d",&f1);
  return f1;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  if(f1<f2&&f1<f3)
  return f1;
  else if(f2<f1&&f2<f3)
  return f2;
  else
  return f3
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  printf("the smallest of three fractions is %d",largest);
}
int main()
{
  struct_fraction(a,b,c,d);
  a=input_fraction();
  b=input_fraction();
  c=input_fraction();
  largest_fraction(a,b,c);
  outout(a,b,c,d);
}