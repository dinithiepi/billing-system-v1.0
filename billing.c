#include <stdio.h>
#include <conio.h>
 

int main ()
{
   printf("................\n");
   printf("welcome to fruit house!\n");
   printf("................\n");
   printf("fruit code number and price :\n");
   printf("11. mango -50/=\n22. orange -60/= \n33. papaya -70/=\n44. apple -100/=\n55. banana -30/=\n");
   printf("................\n");
   printf("10 percent off for bills over 500/=\n");
   
   int a;
   int b;
   int c,d;
   int total=0;
   

   while (1)
   
   {
   printf("................\n");
   printf("enter code number:\n");
   scanf("%d" ,&a);
   printf("enter quantity:\n");
   scanf("%d" ,&b);
   printf("press 0 for exit and get the total or press 1 to continue entering\n");
   scanf("%d",&c);
   
   
   if (a==11)
   {
     total+=(50*b);
   }
   else if (a==22)
   {
     total+=(60*b);
   }
   else if (a==33)
   {
     total+=(70*b);
   }
   else if (a==44)
   {
     total+=(100*b);
   }
   else if (a==55)
   {
     total+=(30*b);
   }
   else
   {
    printf("Invalid code number entered.\n");
   }
   if (c==0)
   {
    break;
   }
   
   }
   
   printf("total bill is %d\n",total);
   if (total>500)
   {
    total-=((total/100)*10);
   }
   printf("total after discount :%d\n",total);
   printf("enter cash\n");
   scanf("%d",&d);
   printf("your balance is %d\n",d-total);
   printf("thank you!.come again..\n");
   getch();
   return(0);
   
   
}
