//This is The Coding Area
//Hacktoberfest
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int mod(int x){
	if(x>0)
		return x;
	else
		return (-x);
}

int main()
{
  int rooms,r1,r2,tar,flag,notv,i,j,sum,patients;
  int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  
  flag=0;

  scanf("%d",&rooms);
  scanf("%d %d",&r1,&r2);
  scanf("%d",&tar);
  notv=rooms;

  while(notv>=1)
  { 
  	sum =0;
  	for(i=0;i<12;i++)
  	{
  		for(j=0;j<months[i];j++)
  		{
  			patients= pow(6-(i+1),2) + mod((j+1)-15);
  			
  			if(patients>rooms) {
  				patients = rooms;
  			}

  			sum = sum + notv*r2 + (patients-notv)*r1;

  			if(sum>=tar)
  			{
  				printf("%d",rooms-notv);
  				exit(0);
  			} 
  		}
  	} 
  	notv=notv-1;
  }  
  printf("%d",rooms);
  return 0;
}
