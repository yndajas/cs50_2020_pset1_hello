#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("hello, %s\n", get_string("What is your name?\n")); //prompts user for their name and interpolates this into a greeting
}