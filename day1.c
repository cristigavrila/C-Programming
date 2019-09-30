///LESSON REVISION
/**
to output a message we use:printf("...message...")
to read a variable we use :scanf("<type_of_variable>",<name_of_variable)
to output a variable we use:print("<message+type_of_variable>,name_of_variable)
for using an integer variable we use: %d
for using a cahr variable we use: %c
for using a float variable we use: %f
for using a double variable we use:%lf
for using a short integer we use: %hd
for using an unsigned integer we use: %u
for using a long integer we use: %li
for using an unsigned long integer we use: %lu
for using an ungned long long integer we use: %llu
for using a signed char we use: %c
for using an unsigned char we use: %c
for using a long char we use: %Lf
**/

///general strucure of a c code
/*
#include<stdio.h>
int main()
{

}
*/

///print of a message in c
/*
#include<stdio.h>
int main()
{
    printf("My first lesson of C programing");
}
*/

///reading and printing a number
/*
#include<stdio.h>
int main(){
    int a;
    printf("the number is:");
    scanf("%d",& a);
    printf("the number you entered is= %d" ,a);
    return 0;
}
*/

///reading and priting a float and double variabile
/*
#include<stdio.h>
int main()
{
    float a;
    double b;

    printf("Enter a number: ");
    scanf("%f",&a);
    printf("another number: ");
    scanf("%lf",&b);

    printf("number1= %f\n",a);
    printf("number2= %lf",b);
    return 0;
}
*/

///ASCII value
/*
#include<stdio.h>
int main(){
char chr;
printf("Enter a charater: ");
scanf("%c", &chr);

printf("you entered %c. So the ASCII value is %d",chr,chr);
return 0;

}
*/
///END OF DAY1
