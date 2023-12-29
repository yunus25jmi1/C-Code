/// Program a) Write a program to calculate perimeter of rectangle.
# include<stdio.h>
/// perimeter = 2*(l+b)
int main() {
    int length;
    printf("Enter the value of length: ");
    scanf("%d",&length);
    int breadth;
    printf("Enter the value of breadth: ");
    scanf("%d",&breadth);
    printf("The Perimeter of rectangle: %d",2 * (length + breadth));
    return 0;
}

/// Program b) Write a program to take input of number from user and give the cube value.

# include<stdio.h>

int main() {
    int number;
    printf("Enter the desired number for cube: ");
    scanf("%d",&number);
    printf("The Cube of Number is : %d", number * number * number);
    return 0;
}