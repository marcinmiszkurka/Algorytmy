#include <stdio.h>
int a, b;
int main ()
{
   printf ("Podaj a \n");
   scanf ("%d", &a);
   printf ("Podaj b \n");
   scanf ("%d", &b);
  
     if (a>b) 
	{
        printf("wieksza jest a %d", a);
	}
     else if (a<b)
        {
        printf("Wieksze jest b %d", b);
        }
     else  
        {
        printf("a i b sa rowne");
        }

 return(0);
}



