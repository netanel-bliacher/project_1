#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int year = 2000;
    int month = 2;
    int day = 29;
    int dif = 10;
    float min_jdn = 1721057.5000000;
    float max_jdn = 5373483.5000000;
    double JDN;
    double a = floor((14 - month) / 12);
    double y = year + 4800 - a;
    double m = month + 12 * a - 3;
    JDN = day + floor((153 * m + 2) / 5) + 365 * y + floor(y / 4) - floor(y / 100) + floor(y / 400) - 32045;
    do
    {
        JDN = JDN + dif;
        if (JDN > min_jdn && JDN < max_jdn)
        {
            double a_g = JDN + 32044;
            double b = floor((4 * a_g + 3) / 146097);
            double c = a_g - floor((146097 * b) / 4);
            double d = floor((4 * c + 3) / 1461);
            double e = c - floor((1461 * d) / 4);
            double m_g = floor((5 * e + 2) / 153);
            day = e - floor((153 * m_g + 2) / 5) + 1;
            month = m_g + 3 - 12 * floor(m_g / 10);
            year = 100 * b + d - 4800 + floor(m_g / 10);
            if (dif > 0)
            {
                printf("plus %d :    %d.%d.%d\n", dif, day, month, year);
            }
            else
            {
                int diferent = abs(dif);
                printf("minus %d :    %d. %d.%d\n", dif, day, month, year);
            }
            dif = dif * (-10);
        }
        else
        {
            break;
        }
    }while (JDN > min_jdn && JDN < max_jdn);
    if (dif > 0)
    {
        printf("plus %d :   invailed data\n", dif);
    }
    else
    {
    dif =abs(dif);
    printf("minus %d :   invailed data\n", dif);
    }
}
