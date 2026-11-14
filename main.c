#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void calcul_init(int *a,int *b,char *calcul);
void MainMenu();

int main()
    {
        int x,y;
        char operation[15];
        int player_result,good_result = 0,bad_result = 0,action = 0;
        int on = 1;

        while (on == 1) {
            MainMenu();
            
            while (scanf("%d",&action) != 1)
            {
                printf("enter a valid option\n");
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
            }
            
            
            while (action == 1){
                printf("[good result: %d | bad result: %d]\n\n",good_result,bad_result);
                calcul_init(&x,&y,operation);
                int result = x*y;
                
                printf("%s\n",operation);
                printf("\n= ");
                while (scanf("%d",&player_result) != 1)
                {
                    printf("\nenter a valid option\n = ");
                    int c;
                    while ( (c = getchar()) != '\n' && c != EOF)
                    {
                    //cleaning buffer
                    }
                    
                }
                if (player_result == 6868){
                    action = 0;
                }
                else if (player_result == result){
                    good_result++;
                    continue;
                }
                else{
                    bad_result++;
                    continue;
                }
                }
        while (action == 2)
        {
            printf("tanks for testing the executable\n");
            on = 0;
            break;
            
        }

    }
    }
void calcul_init(int *a,int *b,char *calcul){
    srand(time(NULL));
    *a = rand() % 10;
    *b = rand() % 10;
    snprintf(calcul, sizeof(calcul), "  %d x %d",*a,*b);

}

void MainMenu(){
    printf(" --Calcul game--\n");
    printf("[1]. play the game\n");
    printf("[2]. quit\n");
    printf("(enter 6868 for open main menu)\n");
}