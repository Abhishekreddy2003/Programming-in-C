#include <stdio.h>
int main()
{
    printf("Choose the operation you want to perform : \n 1. Time conversion \n 2. Distance conversion \n 3. Area conversion \n 4. Volume conversion \n 5. Temprature conversion \n Enter the number here :- ");
    int choice;
    scanf("%d", &choice);
    if (choice==1){
        printf("__________TIME CONVERSION_________");
        printf("\nChoose the conversion you want : \n 1. Hours to Minutes \n 2. Minutes to Hours \n 3. Minutes to Seconds \n 4. Seconds to Minutes \n Enter number here --> ");
        int c1;
        scanf("%d",&c1);
        if (c1==1){
            int h,m;
            printf("\nEnter Hours here :- ");
            scanf("%d",&h);
            m=h*60;
            printf("No. of Minutes in %d Hours = %d Minutes.", h, m);
            return 0;
        }
        else if (c1==2){
            float h1,m1;
            printf("\nEnter Minutes here :- ");
            scanf("%f",&m1);
            h1=m1/60;
            printf("No. of Hours in %.2f Minutes = %.2f Hours.", m1, h1);
            return 0;
        }
        else if (c1==3){
            float m2,s;
            printf("\nEnter Minutes here :- ");
            scanf("%f",&m2);
            s=m2*60;
            printf("No. of Seconds in %.2f Minutes = %.2f Seconds.", m2, s);
            return 0;
        }
        else if (c1==4){
            float m3,s1;
            printf("\nEnter Minutes here :- ");
            scanf("%f",&s1);
            m3=s1/60;
            printf("No. of Minutes in %.2f Seconds = %.2f Minutes.", s1, m3);
            return 0;
        }
        else{
            printf("\n Enter Valid Number. \n THE END");
        }
        
    }
    else if (choice==2){
        printf("__________DISTANCE CONVERSION_________");
        printf("\nChoose the conversion you want : \n 1. Kilometres to Metres \n 2. Metres to Kilometres \n 3. Metres to Centimetres \n 4. Centimetres to Metres \n Enter number here --> ");
        int c2;
        scanf("%d",&c2);
        if (c2==1){
            float k,m;
            printf("\n Enter Kilometres here --> ");
            scanf("%f",&k);
            m=k*1000;
            printf("%.2f Kilometres = %.2f Metres", k, m);
            return 0;
        }
        else if (c2==2){
            float k1,m1;
            printf("\n Enter Metres here --> ");
            scanf("%f",&m1);
            k1=m1/1000;
            printf("%.2f Metres = %.2f Kilometres", m1, k1);
            return 0;
        }
        else if (c2==3){
            float cm,m2;
            printf("\n Enter Metres here --> ");
            scanf("%f",&m2);
            cm=m2*100;
            printf("%.2f Metres = %.2f Centimetres", m2, cm);
            return 0;
        }
        else if (c2==4){
            float cm1,m3;
            printf("\n Enter Centimetres here --> ");
            scanf("%f",&cm1);
            m3=cm1/100;
            printf("%.2f Centimetres = %.2f Metres", cm1, m3);
            return 0;
        }
        else{
            printf("\n Enter Valid Number. \n THE END");
        }
    }
    else if (choice==3){
        printf("__________AREA CONVERSION_________");
        printf("\nChoose the conversion you want : \n 1. Sq. Feet to Sq. Metres  \n 2. Sq. Metres to Sq. Feet \n 3. Sq. Feet to Acre \n 4. Acre to Sq. Feet \n Enter number here --> ");
        int c3;
        scanf("%d",&c3);
        if (c3==1){
            float sf,sm;
            printf("\nEnter no. of Square Feet here --> ");
            scanf("%f",&sf);
            sm=sf/10.764;
            printf("%.2f Square Feet = %.2f Square Metres", sf, sm);
            return 0;
        }
        else if (c3==2){
            float sf1,sm1;
            printf("\nEnter no. of Square Metres here --> ");
            scanf("%f",&sm1);
            sf1=sm1*10.764;
            printf("%.2f Square Metres = %.2f Square Feet", sm1, sf1);
            return 0;
        }
        else if (c3==3){
            float Acre,sf2;
            printf("\nEnter no. of Square Feet here --> ");
            scanf("%f",&sf2);
            Acre=sf2/43560;
            printf("%.2f Square Feet = %.2f Acres", sf2, Acre);
            return 0;
        }
        else if (c3==4){
            float sf3,Acre1;
            printf("\nEnter no. of Acres here --> ");
            scanf("%f",&Acre1);
            sf3=Acre1*43560;
            printf("%.2f Acres = %.2f Square Feet", Acre1, sf3);
            return 0;
        }
        else{
            printf("\n Enter Valid Number!! \n THE END");
        }
    }
    else if (choice==4){
        printf("__________VOLUME CONVERSION_________");
        printf("\nChoose the conversion you want : \n 1. Liters to Cubic Centimetres/Milliliters \n 2. Cubic Centimetres/Milliliters to Liters  \n 3. Liters to US Gallons \n 4. US Gallons to Liters \n Enter number here --> ");
        int c4;
        scanf("%d",&c4);
        if (c4==1){
            float l,cc;
            printf("\n Enter Volume in Liters --> ");
            scanf("%f",&l);
            cc=l*1000;
            printf(" %.2f Liters = %.2f Cubic Centimetres.", l, cc);
            return 0;
        }
        else if (c4==2){
            float l1,cc1;
            printf("\n Enter Volume in Cubic Centimetres --> ");
            scanf("%f",&cc1);
            l1=cc1/1000;
            printf(" %.2f Cubic Centimetres = %.2f Liters.", cc1, l1);
            return 0;
        }
        else if (c4==3){
            float l2,g;
            printf("\n Enter Volume in Liters --> ");
            scanf("%f",&l2);
            g=l2/3.78541178;
            printf(" %.2f Liters = %.2f US Gallons.", l2, g);
            return 0;
        }
        else if (c4==4){
            float l3,g2;
            printf("\n Enter Volume in US Gallons --> ");
            scanf("%f",&g2);
            l3=g2*3.78541178;
            printf(" %.2f US Gallons = %.2f Liters.", g2, l3);
            return 0;
        }
        else{
            printf("\n Enter Valid Number!! \n THE END");
        }
    }
    else if (choice==5){
        printf("__________TEMPERATURE CONVERSION_________");
        printf("\nChoose the conversion you want : \n 1. °Celcius to °Fahrenheit \n 2. °Fahrenheit to °Celcius \n 3. °Celcius to Kelvin \n 4. Kelvin to °Celcius \n Enter number here --> ");
        int c5;
        scanf("%d",&c5);
        if (c5==1){
            float ce,fa;
            printf("Enter Temprature in °Celcius here --> ");
            scanf("%f",&ce);
            fa=(ce*9/5)+32;
            printf("%.2f °Celcius = %.2f °Fahrenheit", ce, fa);
            return 0;
        }
        else if (c5==2){
            float ce1,fa1;
            printf("Enter Temprature in °Fahrenheit here --> ");
            scanf("%f",&ce1);
            ce1=(fa1-32)*9/5;
            printf("%.2f °Fahrenheit = %.2f °Celcius", fa1, ce1);
            return 0;
        }
        else if (c5==3){
            float ce2,ke;
            printf("Enter Temprature in °Celcius here --> ");
            scanf("%f",&ce2);
            ke=ce2+273.15;
            printf("%.2f °Celcius = %.2f Kelvin", ce2, ke);
            return 0;
        }
        else if (c5==4){
            float ce3,ke1;
            printf("Enter Temprature in Kelvin here --> ");
            scanf("%f",&ke1);
            ce3=ke1-273.15;
            printf("%.2f Kelvin = %.2f °Celcius", ke1, ce3);
            return 0;
        }
        else{
            printf("\n Enter Valid Number!! \n THE END");
        }
    }
    else{
        printf("\n Enter Valid Number and try again. \n ____________THE END_____________");
    }
}

