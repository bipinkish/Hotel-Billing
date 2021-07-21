#include<stdio.h>
#include<conio.h>
void main()

{

int ch,T=0,P,a,i;
label:
clrscr();
printf("\t\t\t\tHOTEL GOWRAVAM (A/c)\n");
printf("                             |________________________|                         \n");


printf("Available Food Items:\n_________________________________________________________________\n                   VEG VARIETIES                   \n-----------------------------------------------------------------\n1.Dosa - 30\t        2.Special Dosa - 40\n3.Veg Parotta - 50\t4.Veg Noodles - 60\n5.Chinese Pasta - 70\t6.Paneer Tika - 80\n7.Pongal - 35\t        8.Vada - 10\n_________________________________________________________________\n		  NON VEG VARIETIES                   \n-----------------------------------------------------------------\n9.Parotta Set - 30\t10.Chicken Parotta - 45\n11.Egg Parotta - 40\t12.Chicken Noodles - 80\n13.Egg Noodles - 75\t14.Chicken Shawarma - 90\n15.Tandoori - 130\t16.Lollipop - 110\n17.Pepper Chicken - 110\t18.Finger Chicken - 95\n19.Burma Parotta - 40\t20.Paper Parotta - 50\n");

scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*30;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 2:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*40;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 3:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*50;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 4:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*60;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 5:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*70;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 6:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*80;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 7:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*35;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 8:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*10;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 9:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*30;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 10:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*45;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 11:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*40;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 12:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*80;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 13:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*75;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 14:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*90;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 15:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*130;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 16:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*110;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 17:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*110;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 18:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*95;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 19:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*40;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
case 20:
	printf("Enter the quantity:");
	scanf("%d",&a);
	P=a*50;
	T=T+P;
	printf("\nPrice=%d",P);
	break;
default:
	printf("Enter the required choice!");
}
printf("\n1.Add 2.Next\t\n");
scanf("%d",&i);
if(i==1)
{
 goto label;
}
else if(i==2)
clrscr();
{
 printf("\n\n\n\t\t\t\tYou have to pay Rs.%d\n\n\t\t\t\t\n\n\t\t\t\tCollect your Receipt\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t     -----------THANK YOU COME AGAIN!----------- ",T);
}
getch();
}