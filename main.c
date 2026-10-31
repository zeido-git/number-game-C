#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){
    srand(time(NULL));
    int min = 0;
    int max = 100;
    int s = rand() % (100 - 0 + 1) + 0;
    int d;
    int tentative = 10;
    char action[50];
    int ready = 0;
    
     printf("//////////NUMBER GAME//////////  \n");

    while (1){

        printf("\n\n1. change attempts number\n");
        printf("2. change number interval\n");
        printf("3. play\n");
        printf("4. see setting\n");
        printf("5. quit..\n");
        
        scanf("%49s",action);
        
        while (
                strcmp(action,"1") != 0 &&
                strcmp(action,"2") != 0 &&
                strcmp(action,"3") != 0 &&
                strcmp(action,"4") != 0 &&
                strcmp(action,"5") != 0

        )
        {   
            printf("enter a valid option:\n");
            scanf("%49s",action);
        }

        if (strcmp(action,"1") == 0)
        {
            printf("how much attemp you want ?\n");
            scanf("%d",&tentative);
        }

        else if (strcmp(action,"2") == 0)
        {
            printf("minimum number : ");
            scanf("%d",&min);
            printf("maximum number : ");
            scanf("%d",&max);

            s = rand() % (max - min + 1) + min;

        }

        else if (strcmp(action,"3") == 0)
        {
            printf("game started\n\n");
            ready = 1;
            printf("enter your number : ");
        }

        else if (strcmp(action,"4") == 0)
        {
            printf("\n///SETTING///\n\n");
            printf("min number : %d\n",min);
            printf("max number : %d\n",max);
            printf("attempt : %d\n",tentative);


        }

        else if (strcmp(action,"5") == 0)
        {
            break;
        }
    
    
        while (ready == 1 && tentative >= 0)
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
    
        ready = 0;

        if ( tentative < 0)
            {
            printf("You dont have any attempts left..\nthe number was: %d",s);
            printf("\n(game ended)");
            tentative = 10;
            }

        }

    
    

    
    
    return 0;
}

 