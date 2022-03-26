#include<stdio.h>
int main(void){
    char emotion[25];
    char colour[25];
    char weather[25];

    char clothing[25];
    char adj1[25];
    char footware[25];
    char verb[25];
    char vehicle[25];

    char city[25];
    char direction[25];
    char adj2[25];
    char pluralnoun[25];
    char adj3[25];
    char noun[25];

    char food[25];
    char food2[25];
    char temperature[25];
    char verb1[25];
    char animal[25];
    char furniture[25];
    char adj4[25];

    printf("Enter an emotion:\n ");
    scanf("%s",emotion);
    printf("Enter a colour:\n ");
    scanf("%s",colour);
    printf("Enter a type of a weather:\n ");
    scanf("%s",weather);
    printf("Enter a type of clothing:\n ");
    scanf("%s",clothing);
    printf("Enter an adjective:\n ");
    scanf("%s",adj1);
    printf("Enter a type of footware:\n ");
    scanf("%s", footware);
    printf("Enter a verb:\n ");
    scanf("%s",verb);
    printf("Enter a type of vehicle:\n ");
    scanf("%s",vehicle);
    printf("Enter name of a city/town:\n ");
    scanf("%s",city);
    printf("Enter a direction:\n ");
    scanf("%s",direction);
    printf("Enter an adjective:\n ");
    scanf("%s",adj2);
    printf("Enter a plural noun:\n ");
    scanf("%s",pluralnoun);
    printf("Enter another adjective:\n ");
    scanf("%s",adj3);
    printf("Enter another noun:\n ");
    scanf("%s",noun);
    printf("Enter type of food:\n ");
    scanf("%s",food);
    printf("Enter another type of food:\n ");
    scanf("%s",food2);
    printf("Enter a type of temperature(hot,cold etc):\n ");
    scanf("%s",temperature);
    printf("Enter a verb:\n ");
    scanf("%s",verb1);
    printf("Enter an animal:\n ");
    scanf("%s",animal);
    printf("Enter a type of furniture:\n ");
    scanf("%s",furniture);
    printf("Enter an adjective:\n ");
    scanf("%s",adj4);

    printf("\nOne day I got up feeling %s, and I knew\nit was going to be a special day. The sky was %s and the weather was %s,\nso I hopped out of bed, put on my %s and my %s %s,\nand I was ready to %s.\nOutside, i caught the first %s,\nwhich took me straight into %s.\nI went %s until I came to a store selling %s %s, where I bought\n the perfect %s %s!\nNext, I treated myself to a %s snack at a %s restaurant.\nIt was very %s, but it was still good enough to %s.\nFinally, I went home. I fed the %s \nthen sat down on the %s,\n and thought,\n'What a %s day!' ",  emotion,colour,  weather,  clothing,  adj1,  footware,  verb,  vehicle,city,  direction,  adj2,  pluralnoun,  adj3,  noun,food,  food2,  temperature,  verb1,  animal,  furniture,  adj4);
    system("pause");
}
