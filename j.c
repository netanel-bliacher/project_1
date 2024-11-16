#include <stdio.h>
#include <math.h>

int main()
{
    int year = 2024;
    int month = 11;
    int day = 16;
    int dif = -10;
    float min_jdn = 1721057.5000000;
    float max_jdn = 5373483.5000000;
    double JDN=2460631.000000;
    double JDN_g = JDN;
    int counter = 1;
        double a_g = JDN_g + 32044;
        double b = floor((4 * a_g+ 3) / 146097);
        double c = a_g - floor((146097*b)/ 4);
        double d = floor((4*c+3)/1461);
        double e = c-floor((1461*d)/4);
        double m_g=floor((5* e +2)/ 153);
        day= e- floor((153*m_g+2)/ 5)+1;
        month=m_g +3 -12*floor(m_g/10);
        year=100*b +d - 4800 +floor(m_g/10);
        printf("The origin date: %d.%d.%d\n", day, month, year);
    return 0;
}