#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{
    // declare variables
    float a;
    float b;
    float c;

    // get user input
    printf("Give me the variables a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);

    /* calculate the discriminant   <-- this is a comment for multiple lines
     the discriminant is: b² - 4ac
    */
   float d=b*b-4*a*c;

    // according to the value of the discriminant, calculate the roots and print the results
    float m1=(-b+sqrt(b*b-4*a*c))/(2*a);
    float m2=(-b-sqrt(b*b-4*a*c))/(2*a);
    if (d>0)
    {
      printf("There are two solutions: x1=%f x2=%f",m1,m2);  
    }
    if (d==0)
    {
      printf("There is one solution: x12=%f",m1);
    }
    if (d<0)
    {
      printf("There are no solutions");
    }

    return 0;
}