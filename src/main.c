#include <stdio.h>

int main()
{
    int myNum = 42;
    float myFloatNum = 59.99;
    char myLetter = 'J';
    printf("Hello World!\n");
    printf("this is a second line\n");
    printf("this is a third line\n");
    //this is a comment
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("The answer is always %d\n", myNum);
    printf("The number %d and the letter %c are both very important", myNum, myLetter);
    return 0;
}