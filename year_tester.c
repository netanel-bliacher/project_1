    int year;
    int month;
    int day;
    int test_year = 0;
    int test_mounth = 0;
    int test_day = 0;
    int max_days;

    do
    {
        printf("please enter day, mounth and year(spaces or enter between them)\n");
        scanf("%d %d %d", &day, &month, &year);
        printf("The origin date: %d.%d.%d\n", day, month, year);
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            max_days = 31;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            max_days = 30;
        }
        else if (month == 2 && year % 400 == 0)
        {
            max_days = 29;
        }
        else if (month == 2 && year % 100 == 0)
        {
            max_days = 28;
        }
        else if (month == 2 && year % 4 == 0)
        {
            max_days = 29;
        }
        else
        {
            max_days = 28;
        }
        test_year = (year>-1 && year <= 9999);
        test_mounth = (month > 0 && month <= 12);
        test_day =  (day <= max_days && day > 0);
         
        } while (!test_day || !test_mounth || !test_year);


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
        printf("plus %d :   invaled data\n", dif);
    }
    else
    {
    dif =abs(dif);
    printf("minus %d :   invaled data\n", dif);
    }
return 0;
}

    
   
