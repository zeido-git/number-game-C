#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int s = rand();
    int d;
    int tentative = 10;
    
    while (tentative >= 0)
    {
        if (scanf("%d",&d) != 1)
        {
            int c;

            while ( (c = getchar()) != '\n' && c != EOF )
            {
                //sa va tt sup
            }
        }
        else if (d > s)
        {
            printf("%d > ???",d);
        }
        else if (d < s )
        {
            printf("%d < ???",d);
        }
        else if (d == s)
        {
            printf("GG it was %d",s);
        }
        tentative = tentative - 1;
    }  

    if ( tentative < 0)
    {
        printf("You have no more attempts left..");
        printf("\n(game ended)");
    }
    return 0;
}

 