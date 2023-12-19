#include<stdio.h>
#include"utils.h"

int main()
{
double degree;
double red;
printf("enter the degreee\n");
scanf("%lf",& degree);

red= degreestoredian(degree);
printf("the degrees in red is=%lf\n",red);


double distance;
double olatitude;
double olongitude;
printf("origin in degrees\n");
printf("latitude :\n");
scanf("%lf",&olatitude);
printf("longitude :\n");
scanf("%lf",&olongitude);

double dlatitude;
double dlongitude;

printf("Distination in degrees\n");
printf("latitude :\n");
scanf("%lf",&dlatitude);
printf("longitude :");
scanf("%lf",&dlongitude);
distance=airdistance(olatitude ,dlatitude ,olongitude , dlongitude);

printf("origin : %lf,%lf\n",olatitude,olongitude);
printf("distination :%lf,%lf\n",dlatitude,dlongitude);
printf("Air distance :%lf\n",distance);

 
    double t;

    printf("Enter the time\n");
   
    scanf("%lf",&t);

    double percentageoflight;
  
    printf("Enter percentage of speed of light\n");
    scanf("%lf",&percentageoflight);

    printf("The time dilation of the object is %.2lf",lorentzTimeDilation(t,percentageoflight));

    return 0;















}