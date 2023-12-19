#include<stdio.h>
#include<math.h>
double degreestoredian(double degree);
double airdistance(double olatitude , double dlatitude , double olongitude , double dlongitude);
double lorentzTimeDilation(double t, double percentC);




double degreestoredian(double degree)
{


double red;
red=((degree*3.14)/180);

return red;

}




double airdistance(double olatitude , double dlatitude , double olongitude , double dlongitude)


{

const float pi =3.14;
const int earthrad = 6371;


double a = ( pi *olatitude)/180;


double b = ( pi * dlatitude)/180;


double c = ( pi * olongitude)/180;


double d = ( pi * dlongitude)/180;

float difference=d-c;

float distance=acos(sin(a)*sin(b)+cos(a)*cos(b)*cos(difference))*(earthrad);

return distance;

}
    
 double lorentzTimeDilation(double t, double percentC)
 {
        double percentage;
       

        percentage = percentC/100;

       


        double dilatedtime = (t/sqrt(1.0 - pow(percentage,2)));
        
        return dilatedtime;


 }