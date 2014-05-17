#include <stdio.h>

int main ()
{
 int i,j ;
 printf("<!DOCTYPE html>\n");
 printf("<meta charset=\"UTF-8\">\n");
 printf("<title>99</title>\n");
 printf("<hi>99</hi>\n");
 printf("<table>\n");
 
　for (int i = 0;i<10;i++)
　{ 
  　printf("<tr>"\n);
   for (int j = 0;j<10;j++)
   { 
     if(i==0)
　　{
　　　printf("<th>");
　　}else{
	printf("<th>%d",j)
   }
 }


	
 return 0 ;
}