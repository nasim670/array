// A SIMPLE VOTING SYSTEM
#include<stdio.h>
int main()
{
    int a=0, b=0, no_result=0 , total_vote, choice ;
    printf("How many vote want to count \n");
    scanf("%d", &total_vote);

    for (int i = 1; i <= total_vote; i++)
    {
        printf("Welcome to the voting system: \n");
        printf("Enter 1 for suppor a: \n" );
        printf("Enter 2 for suppor b:\n " );
        printf("Enter 3 for suppor none: \n" );

        scanf("%d", &choice);

        if (choice==1)
        {
            a++;
        }
        else if (choice== 2)
        {
            b++;
        }
        else if (choice ==3)
        {
            no_result ++;
        }
        else
        {
            printf(" vote was not found");
        }
        
        
    }
    printf(" result of the vote:\n" );
    printf("a got %d vote \n", a);
    printf(" b got %d vote \n", b);
    printf(" natural got %d vote \n ", no_result);

    if (a>b && a>no_result)
    {
        printf(" ### a win the vote ###");
    }

    else if (b>a && b>no_result)
    {
        printf(" ### b win the vote ###");
    }

    else if (no_result>a && no_result>b)
    {
        printf(" natural vote got the majority vote \n ");
    }
    else
    {
        printf(" TIDE go for RUNOFF");
    }
    
    return 0 ;

}