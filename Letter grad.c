#include<stdio.h>
int main()
{
double Math_1st,Math_2nd,Phy_1st,Phy_2nd,Che_1st,Che_2nd;

printf("Enter your Math 1st paper & 2nd paper marks are :");
scanf("%lf %lf",&Math_1st,&Math_2nd);

printf("Enter your Physics 1st paper & 2nd paper marks are :");
scanf("%lf %lf",&Phy_1st,&Phy_2nd);

printf("Enter your Chemistry 1st paper & 2nd paper marks are :");
scanf("%lf %lf",&Che_1st,&Che_2nd);
double math = Math_1st  + Math_2nd;
double phy = Phy_1st  + Phy_2nd ;
double che = Che_1st  + Che_2nd;
if(math>=160)
    printf("A+");
 else if(phy>=160)
    printf("A+");
 else if(che>=160)
    printf("A+");
    else
        printf("Other grade");
    getch();



}
