#include<stdio.h>
int checkInt(float a)
{
	int b = (int) a;
	if (a==b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
   int temp,domsday,diff,d;
   enum{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
   int lasttwodigit, startcentuary,anchorday;
   int day,month,year,doms[13],flagleap,t;
   scanf("%d",&t);
   while(t--)
   {

                   scanf("%d%d%d",&day,&month,&year);
                   lasttwodigit = year % 100;
                   startcentuary = year - lasttwodigit;
                 //  printf("%d%d",startcentuary,sunday);
                    if(checkInt((float)(((float)((float)startcentuary-1100))/(float)400)+1))
                   {
                     anchorday = 3;
                   }
                   else if(checkInt((float)(((float)((float)startcentuary-1200))/(float)400)+1))
                   {
                     anchorday = 2;
                   }
                   else if (checkInt((float)(((float)((float)startcentuary-1300))/(float)400)+1)) 
                   {
                     anchorday = 0;
                   } 
                  else
                  {
                    anchorday = 5;
                  }
                  //printf("A:%d\n",anchorday );
                  if((year%4==0 && year%100 !=0 ) || ( year%400==0 ))  
                  {
                    doms[1]= 4;
                    doms[2] = 29;
                  }
                  else
                  {
                    doms[1] = 3;
                    doms[2] = 28;
                  }
                  doms[3] = 0;
                  doms[4] = 4;
                  doms[5] = 9;
                  doms[6] = 6;
                  doms[7] = 11;
                  doms[8] = 8;
                  doms[9] = 5;
                  doms[10] = 10;
                  doms[11] = 7;
                  doms[12] = 12;
                   
                  temp = ((lasttwodigit/12)+ (lasttwodigit%12) + ((lasttwodigit%12)/4))%7;
                  domsday = (temp+anchorday)%7;
                  //printf("\nD:%d\n",domsday );
                  if(day>=doms[month])
                  {
                     diff = day - doms[month];
                     d = (domsday +diff)%7;
                  }
                  else
                  {
                     diff = doms[month] - day;
                     d = domsday - (diff%7);
                     if(d<0)
                     {
                        d = 7+d;
                     }
                  }

                  
                  //printf("\n%d",diff );
                  switch(d)
                  {
                    case 0: printf("Sunday\n");
                      break;
                   
                    case 1 : printf("Monday\n");
                                   break;
                          case 2: printf("Tuesday\n");
                      break;
                   
                    case 3 : printf("Wednesday\n");
                                   break;
                         
                    case 4 : printf("Thursday\n");
                                   break;
                          case 5: printf("Friday\n");
                      break;
                   
                    case 6 : printf("Saturday\n");
                                   break;
                             
                     
                  }
   }


   
  return 0;
}
