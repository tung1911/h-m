#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
   int ctr;
   void b1k1(void);
   void b1k2(void);
   void main(void)
   {
   	ctr=10;
   	b1k1();
   }
   void b1k1(void)
   {
   	int rtc;
   		if(ctr>8)
   		{
   			rtc=rtc+1;
   			b1k2();
		}
   }
   void b1k2(void)
   {
   	int ctr;
   	ctr=0;
   }
   void addgen(int i,int j)
   {
   	return (i+j);
   }
   int i,j;
   void addspe(void)
   {
   	return (i+j);
   }