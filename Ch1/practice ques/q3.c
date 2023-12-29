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