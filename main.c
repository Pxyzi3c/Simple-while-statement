#include <stdio.h>
#define p printf
#define s scanf

int main()
{
    int number, sum=0;
    p(" Please Enter a Series of Number\n");
    p(" Enter (0) to end\n\n");

    while(number!=0)
    {
      p("\tEnter Number Here: ");
      s("%d",&number);
      sum=sum + number;
    }

    p("\n\tSUM: %d",sum);

    getch();
}
