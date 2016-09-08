#include <stdio.h>

int main()
{
    int numb=0, n=0;

    printf("Enter a positive integer between 2 and 1000000:\t");
    scanf("%d", &n);
    if (n<2||n>1000000)
        printf("invalid input. Enter a positive integer between 2<n<1000000");
    else
    {for(numb=2; numb<=(n-1); numb++)
    {
       if (n%numb==0)
      {
          printf("\nThe number %d is not a prime.\n", n);

          printf("%d = ", n);

          while(n!=0)
          {
              if(n%numb!=0)
                numb=numb+1;

              else
              {
                  n=n/numb;
                  printf("%d", numb);

                  if(n>1)
                    printf("x");

                  if(n==1)
                    break;
              }
          }
          printf("\n\n");
          break;
      }
   }

   printf("%d", n);
   if (numb==n)
      printf("\nThe number %d is a prime.\n\n", n);
    }

    return 0;
}
