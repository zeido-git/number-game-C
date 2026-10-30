#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int s = rand() % (100 - 0) + 0;
    int d;
    int tentative = 10;
    
    printf("enter ur number: \n");
    
    
    while (tentative >= 0)
    {
        if (scanf("%d",&d) != 1)
        {
            int c;

            while ( (c = getchar()) != '\n' && c != EOF )
            {
                //it will del
            }
            printf("enter a valid number!!!!!!\n");
        }
        else if (d > s)
        {
            printf("(attemp left: %d )\n",tentative);
            printf("%d > ???\n",d);
        }
        else if (d < s )
        {
            printf("(attemp left: %d )\n",tentative);
            printf("%d < ???\n",d);
        }
        else if (d == s)
        {
            printf("GG it was %d",s);
            break;
        }
        tentative = tentative - 1;
    }  

    if ( tentative < 0)
    {
        printf("You have no more attempts left..\nthe number was: %d",s);
        printf("\n(game ended)");
    }
    return 0;
}

 