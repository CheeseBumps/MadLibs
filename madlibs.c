#include<stdio.h>
int main(void){
    char holiday[25];
    char noun[25];
    char place[25];
    char person[25];
    char adj1[25];
    char bodypart[25];
    char verb[25];
    char adj2[25];
    char noun2[25];
    char food[25];
    char pluralnoun[25];
    printf("Enter name of a holiday:\n ");
    scanf("%s",holiday);
    printf("Enter a noun:\n ");
    scanf("%s",noun);
    printf("Enter name of a place:\n ");
    scanf("%s",place);
    printf("Enter name of a character:\n ");
    scanf("%s",person);
    printf("Enter a adjective:\n ");
    scanf("%s",adj1);
    printf("Enter a plural bodypart:\n ");
    scanf("%s",bodypart);
    printf("Enter a verb:\n ");
    scanf("%s",verb);
    printf("Enter another adjective:\n ");
    scanf("%s",adj2);
    printf("Enter another noun:\n ");
    scanf("%s",noun2);
    printf("Enter name of a food:\n ");
    scanf("%s",food);
    printf("Enter a plural noun:\n ");
    scanf("%s",pluralnoun);
    


    
    printf("\nI can't believe its already %s!\nI can't wait to put on my %s and visit every %s in my neighborhood.\nThis year, I am going to dress up as a %s with %s %s.Before I %s,\n I make sure to grab my %s %s to hold all of my %s.\n Finally, all of my %s are ready to go!  " ,holiday,noun,place,person,adj1,bodypart,verb,adj2,noun2,food,pluralnoun);
    printf("\nType f ");
    scanf("%s", noun);
}