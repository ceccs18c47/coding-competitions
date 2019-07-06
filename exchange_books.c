//This is The Coding Area
#include<stdio.h>
#include<conio.h>

void main()
{
  int in;
  scanf("%d",in);
  if(in <= 1)
    printf("%d",0);
  else if(in == 2)
    printf("%d",1);
 /* else if(in ==3)
    printf("%d",2);
  else if(in==4)
    printf("%d",9);*/
  else
    printf("%d",(in-1)**(in-2));
}