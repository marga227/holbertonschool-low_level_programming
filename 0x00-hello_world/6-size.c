/*Made by Aura Margarita Zambrano*/
#include<stdio.h>
/**
 *main -Entry point
 *
 *Return: Alwais 0 (Sucess)
 */
int main(void)
{
char char_type
int int_type;
long int long_int_type;
long long type long2_type;
float float_type;

    /*sizeof evaluates the size of a variable*/
printf("Size of a char: %zu byte(s)\n", sizeof(char_type));
printf("Size of a int: %zu byte(s)\n", sizeof(int_type));
printf("Size of a long int: %zu byte(s)\n", sizeof(long_int_type));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long2_type));
printf("Size of a float: %zu byte(s)\n", sizeof(float_type));
return (0);
}
