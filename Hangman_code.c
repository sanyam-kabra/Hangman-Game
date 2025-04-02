#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
void letters3(char a[3],int *nextround) //function to execute the round if the word is of 3 letters.
{
    char x[3]={'_','_','_'};
    int r,lives=7;
    char guess;
    printf("_ _ _\n");
        for(;lives>0;)
        {
            r=0;
            printf("Enter your guess:");
            scanf(" %c", &guess);
            for(int i=0;i<3;i++)
            {
                if(guess==a[i])
                {
                    r=1;
                    x[i]=guess;
                }
            }
            if(r==1)
            {
                printf("Right guess.\n");
                printf("current status: %c %c %c\n", x[0],x[1],x[2]);
                printf("lives: %d\n", lives);
            }
            else
            {
                printf("Wrong guess.");
                printf("\t\t\t\t|\n");
                printf("current status: %c %c %c", x[0],x[1],x[2]);
                if(lives<=6)
                {
                    printf(" \t\t\tO");
                }
                printf("\n");        
                printf("lives: %d", lives-1);
                if(lives<=5)
                {
                    printf("\t\t\t        |");
                }
                if(lives<=4)
                {
                    printf("\b\b/");
                }
                if(lives<=3)
                {
                    printf("|\\");
                }
                printf("\n");
                if(lives<=2)
                {
                    printf("\t\t\t\t       /");
                }
                if(lives<=1)
                {
                    printf(" \\\n");
                }
                lives--;
            }
            if(lives>0)
            {
                *nextround=1;
            }
            else
            {
                *nextround=0;
            }
            if(lives==0)
            {
                printf("You Lost");
            }
            printf("\n");
            if(x[0]==a[0]&&x[1]==a[1]&&x[2]==a[2])
            {
                printf("\b\b\b\b\b\b\b");
                printf("GOOD\n");
                break;
            }
        }
}
void letters4(char a[4],int *nextround)  //function to execute the round if the word is of 3 letters.
{
    char x[4]={'_','_','_','_'};
    int r,lives=7;
    char guess;
    printf("_ _ _ _\n");
        for(;lives>0;)
        {
            r=0;
            printf("Enter your guess:");
            scanf(" %c", &guess);
            for(int i=0;i<4;i++)
            {
                if(guess==a[i])
                {
                    r=1;
                    x[i]=guess;
                }
            }
            if(r==1)
            {
                printf("Right guess.\n");
                printf("current status: %c %c %c %c\n", x[0],x[1],x[2],x[3]);
                printf("lives: %d\n", lives);
            }
            else
            {
                printf("Wrong guess.");
                printf("\t\t\t\t|\n");
                printf("current status: %c %c %c %c", x[0],x[1],x[2],x[3]);
                if(lives<=6)
                {
                    printf(" \t\tO");
                }
                printf("\n");        
                printf("lives: %d", lives-1);
                if(lives<=5)
                {
                    printf("\t\t\t        |");
                }
                if(lives<=4)
                {
                    printf("\b\b/");
                }
                if(lives<=3)
                {
                    printf("|\\");
                }
                printf("\n");
                if(lives<=2)
                {
                    printf("\t\t\t\t       /");
                }
                if(lives<=1)
                {
                    printf(" \\\n");
                }
                lives--;
            }
            if(lives>0)
            {
                *nextround=1;
            }
            else
            {
                *nextround=0;
            }
            if(lives==0)
            {
                printf("You Lost");
            }
            printf("\n");
            if(x[0]==a[0]&&x[1]==a[1]&&x[2]==a[2]&&x[3]==a[3])
            {
                printf("\b\b\b\b\b\b\b");
                printf("GOOD\n");
                break;
            }
        }
}
void letters5(char a[5],int *nextround)  //function to execute the round if the word is of 3 letters.
{
    char x[5]={'_','_','_','_','_'};
    int r,lives=7;
    char guess;
    printf("_ _ _ _ _\n");
        for(;lives>0;)
        {
            r=0;
            printf("Enter your guess:");
            scanf(" %c", &guess);
            for(int i=0;i<5;i++)
            {
                if(guess==a[i])
                {
                    r=1;
                    x[i]=guess;
                }
            }
            if(r==1)
            {
                printf("Right guess.\n");
                printf("current status: %c %c %c %c %c\n", x[0],x[1],x[2],x[3],x[4]);
                printf("lives: %d\n", lives);
            }
            else
            {
                printf("Wrong guess.");
                printf("\t\t\t\t|\n");
                printf("current status: %c %c %c %c %c", x[0],x[1],x[2],x[3],x[4]);
                if(lives<=6)
                {
                    printf(" \t\tO");
                }
                printf("\n");        
                printf("lives: %d", lives-1);
                if(lives<=5)
                {
                    printf("\t\t\t        |");
                }
                if(lives<=4)
                {
                    printf("\b\b/");
                }
                if(lives<=3)
                {
                    printf("|\\");
                }
                printf("\n");
                if(lives<=2)
                {
                    printf("\t\t\t\t       /");
                }
                if(lives<=1)
                {
                    printf(" \\\n");
                }
                lives--;
            }
            if(lives>0)
            {
                *nextround=1;
            }
            else
            {
                *nextround=0;
            }
            if(lives==0)
            {
                printf("You Lost");
            }
            printf("\n");
            if(x[0]==a[0]&&x[1]==a[1]&&x[2]==a[2]&&x[3]==a[3]&&x[4]==a[4])
            {
                printf("\b\b\b\b\b\b\b");
                printf("GOOD\n");
                break;
            }
        }
}
void questions(int num,int *nextround,int N) //function to display questions and hints for different rounds
{
    char a[3]={'d','o','g'};
    char b[3]={'h','a','t'};
    char c[4]={'b','e','a','n'};
    char d[5]={'t','i','g','e','r'};
    char e[4]={'g','r','o','w'};
    char f[4]={'l','a','m','p'};
    char g[5]={'a','p','p','l','e'};
    char h[4]={'g','o','l','f'};
    char i[4]={'f','o','o','t'};
    char j[4]={'b','o','w','l'};
    if(num==1)
        {
            printf("\nRound %d-\n\n", N);
            printf("Hint:Animal\n");
            letters3(a,nextround);
        }
        else if(num==2)
        {
            printf("\nRound %d-\n\n",N);
            printf("Hint:Clothes\n");
            letters3(b,nextround);  
        }
        else if(num==3)
        {
            printf("\nRound %d-\n\n",N);
            printf("Hint:Vegetables\n");
            letters4(c, nextround);
        }
        else if(num == 4)
        {
            printf("\nRound %d-\n\n",N);
            printf("Hint:Animals\n");
            letters5(d, nextround);
        }
        else if(num==5)
        {
            printf("\nRound %d-\n\n", N);
            printf("Hint:Verbs\n");
            letters4(e, nextround);
        }
        else if(num==6)
        {
            printf("\nRound %d-\n\n", N);
            printf("Hint:Household items\n");
            letters4(f,nextround);
        }
        else if(num==7)
        {
            printf("\nRound %d-\n\n", N);
            printf("Hint:Fruits\n");
            letters5(g,nextround);
        }
        else if(num==8)
        {
            printf("\nRound %d-\n\n", N);
            printf("Hint:Sports\n");
            letters4(h,nextround);
        }
        else if(num==9)
        {
            printf("\nRound %d-\n\n", N);
            printf("Hint:Body Parts\n");
            letters4(i,nextround);
        }
        else if(num==10)
        {
            printf("\nRound %d-\n\n", N);
            printf("Hint:Kitchen Tools\n");
            letters4(j,nextround);
        }
}
int main()
{
    int n,nextround;
    printf("Welcome to Hangman\n\n");
    menu:
    printf("Press 1 to play.\nPress 2 for game instructions.\n");
    scanf("%d", &n);
    if(n==1)
    {
        printf("\nPROTECT THE MAN FROM BEING HANGED.\nLets go\n\n");
        int u=10,l=1,num,i,j,k,q,r,s,x,y,z;
        srand(time(0));
        num=rand() % (u-l+1) + l;  //this is used to randomise the questions in each round
        questions(num, &nextround,1);
        if(nextround==1)
        {
            i=num;
            for(;;)
            {
                num=rand() % (u-l+1) + l; 
                if(num!=i)
                {
                    break;
                }
            }  
            questions(num, &nextround,2);
        }
        if(nextround==1)
        {
            j=num;
            for(;;)
            {
                num=rand() % (u-l+1) + l; 
                if(num!=i && num!=j)
                {
                    break;
                }
            }  
            questions(num, &nextround,3);
        }
        if(nextround==1)
        {
            k=num;
            for(;;)
            {
                num=rand() % (u-l+1) + l; 
                if(num!=k && num!=i && num!=j)
                {
                    break;
                }
            }  
            questions(num, &nextround,4);
        }
        if(nextround==1)
        {
            q=num;
            for(;;)
            {
                num=rand() % (u-l+1) + l; 
                if(num!=q && num!=k && num!=i && num!=j)
                {
                    break;
                }
            }  
            questions(num, &nextround,5);
        }
        if(nextround==1)
        {
            r=num;
            for(;;)
            {
                num=rand() % (u-l+1) + l; 
                if(num!=r && num!=q && num!=k && num!=i && num!=j)
                {
                    break;
                }
            }  
            questions(num, &nextround,6);
        }
        if(nextround==1)
        {
            s=num;
            for(;;)
            {
                num=rand() % (u-l+1) + l; 
                if(num!=s && num!=r && num!=q && num!=k && num!=i && num!=j)
                {
                    break;
                }
            }  
            questions(num, &nextround,7);
        }
        if(nextround==1)
        {
            x=num;
            for(;;)
            {
                num=rand() % (u-l+1) + l; 
                if(num !=x && num!=s && num!=r && num!=q && num!=k && num!=i && num!=j)
                {
                    break;
                }
            }  
            questions(num, &nextround,8);
        }
        if(nextround==1)
        {
            y=num;
            for(;;)
            {
                num=rand() % (u-l+1) + l; 
                if(num!=y && num!=x && num!=s && num!=r && num!=q && num!=k && num!=i && num!=j)
                {
                    break;
                }
            }  
            questions(num, &nextround,9);
        }
        if(nextround==1)
        {
            z=num;
            for(;;)
            {
                num=rand() % (u-l+1) + l; 
                if(num!=z && num!=y && num !=x && num!=s && num!=r && num!=q && num!=k && num!=i && num!=j)
                {
                    break;
                }
            }  
            questions(num, &nextround,10);
        }
        if(nextround==1)
        {
            printf("You are a genius.\nYou have completed all the rounds and protected the man.\nYou won");
        }
    }
    if(n==2)
    {
        int x;
        printf("\n1.You have to guess the word using the hint provided and the number of letter in the word.\n");
        printf("2.If you guess a write letter it will be shown on its designated place and other places will be   shown blank.\n");
        printf("3.If you guess the whole word within the given lives, you will reach the next round.\n");
        printf("4.If you are not able to guess the word within given lives the man will be hanged completely and  you will lose.\n");
        printf("5.If you complete all the rounds, you will win.\n");
        printf("6.Please do not use capital letters as it will result in a wrong guess.\n");
        printf("Press 1 to go to menu:");
        scanf("%d", &x);
        if(x==1)
        {
            printf("\n");
            goto menu;
        }
    }
return 0;
}