//Ben Clark
//A very simple brute-force program for 4-digit pins

#include <stdio.h>

int main(void)
{
	int pin = 10000;
	int x = 0;
	int i = 0;
	
    while (pin > 9999 || pin < 0)
    {
        printf("Enter a 4-digit, numerical pin: ");
        scanf("%d", &pin);
    }
    printf("\nYour pin is #### (obscured)\n");
    printf("Enter (1) to crack pin: ");
    scanf("%d", &x);
    
    while (i != pin)
    {
       printf("\nTrying pin: %1.4d", i);
       i++;
    }
    
    printf("\n\n------------Pin cracked!------------\n\n");
    printf("Your pin is %1.4d", i);
}