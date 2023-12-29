# include<stdio.h>
 /// this is used for single line comments.
 /* This is used to create multiple
     lines of comment.*/

int main() {
    int age;
    printf("Enter age: ");
    float pi = 3.14;
    char hashtag = '#';
    scanf("%d", &age);
    printf("My age is %d \n",age);
    /// "/n" is used to create new line after that output.
    printf("Hello World, ");
    printf("Welcome to C Programming \n");
    printf("Value of pi is %f \n",pi);
    /// "/f" is used display the real values as it is float number.
    printf("Hashtag is %c \n",hashtag);
    /// "/c" is used to display the characters
    return 0;

    int a, b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    /// %d is used to take input.
    printf("enter the value of b: ");
    scanf("%d",&b);
    /// int sum =a + b;
    printf("The Total Value of a & b: %d",a * b);
    return 0;
}