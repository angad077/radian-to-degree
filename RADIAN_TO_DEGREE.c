/* CONVERT RADIAN TO DEGREE
      ___      .__   __.   _______      ___       _______  
     /   \     |  \ |  |  /  _____|    /   \     |       \ 
    /  ^  \    |   \|  | |  |  __     /  ^  \    |  .--.  |
   /  /_\  \   |  . `  | |  | |_ |   /  /_\  \   |  |  |  |
  /  _____  \  |  |\   | |  |__| |  /  _____  \  |  '--'  |
 /__/     \__\ |__| \__|  \______| /__/     \__\ |_______/                                                            */
                                                          
#include <stdio.h>
#include <math.h>
void printline();

int main()
{
    float radian;
    float degree;

    printf("Enter your radian --> ");
    scanf("%f", &radian);

    degree = 1 * radian * (180 / M_PI);
    printf("\nMade by Angad:) \n\n");
    printline();
    printf("\nYour degree is %.3f\n", degree);
    printline();
    return 0;
}
void printline()
{
    int i;
    for (i = 1; i <= 24; i++)
    {
        printf("*");
    }
}