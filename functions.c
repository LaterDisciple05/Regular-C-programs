/*Program purpose:-to learn functions in c.
Program date:-
Program author:-Akshat Shah
Program flaws(if any):-NA*/
#include <stdio.h>
#include <math.h>
float exponent(float a, int b);

int main()
{
  int b;
  float a, ans;
  printf("Enter Base=");
  scanf("%f", &a);
  printf("Enter exponent=");
  scanf("%d", &b);
  ans = exponent(a, b);
  printf("%0.0f ^ %d = %0.0f", a, b, ans);

  return 0;
}
float exponent(float a, int b)
{
  float ans;
  ans = pow(a, b);
  return ans;
}