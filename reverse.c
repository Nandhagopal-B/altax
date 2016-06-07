#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,l;
  char a[20],b[20];
  printf("Enter a string:");
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
    l++;
  }
  j=0;
  for(i=l;i!=-1;i--)
  {
    b[j]=a[i];
    j++;
  }
  printf("Reversed string:",b);
  getch();
}
