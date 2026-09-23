#include<stdio.h>
int main()
{
char ch;
printf("pagal hai tu");
scanf("%s",&ch);

int lol= ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
printf("%d",lol);
}