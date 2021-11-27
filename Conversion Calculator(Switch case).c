#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    printf("Choose the operation you want to perform : \n 1. Time conversion \n 2. Distance conversion \n 3. Area conversion \n 4. Volume conversion \n 5. Temprature conversion \n 6. Letter case conversion \n Enter the number here :- ");
    int choice;
    scanf("%d", &choice);
    if (choice==1 && choice==2 && choice==3 && choice==4 && choice==5){
        float a;
            printf("Enter valid value you want to convert :- ");
            scanf("%f", &a);
        switch (choice){
            case 1:
                printf("__________TIME CONVERSION_________");
                printf("\nChoose the conversion you want : \n 1. Hours to Minutes \n 2. Minutes to Hours \n 3. Minutes to Seconds \n 4. Seconds to Minutes \n Enter number here --> ");
                int c1;
                scanf("%d",&c1);
                switch (c1){
                    case 1:
                        printf("\n %.2f Hours = %.2f Minutes.", a, a*60);
                        break;
                    case 2:
                        printf("\n %.2f Minutes = %.2f Hours.", a, a/60);
                        break;
                    case 3:
                        printf("\n %.2f Minutes = %.2f Seconds.", a, a*60);
                        break;
                    case 4:
                        printf("\n %.2f Seconds = %.2f Minutes.", a, a/60);
                        break;
                    default:
                        printf("\n Error!!! _____Please Enter Valid Case____");
                }
                break;
            case 2:
                printf("__________DISTANCE CONVERSION_________");
                printf("\nChoose the conversion you want : \n 1. Kilometres to Metres \n 2. Metres to Kilometres \n 3. Metres to Centimetres \n 4. Centimetres to Metres \n Enter number here --> ");
                int c2;
                scanf("%d",&c2);
                switch(c2){
                    case 1:
                        printf("\n %.2f Kilometres = %.2f Metres", a, a*1000);
                        break;
                    case 2:
                        printf("\n %.2f Metres = %.2f Kilometres", a, a/1000);
                        break;
                    case 3:
                        printf("\n %.2f Metres = %.2f Centimetres", a, a*100);
                        break;
                    case 4:
                        printf("\n %.2f Centimetres = %.2f Metres", a, a/100);
                        break;
                    default:
                        printf("\n Error!!! _____Please Enter Valid Case____");
                }
                break;
            case 3:
                printf("__________AREA CONVERSION_________");
                printf("\nChoose the conversion you want : \n 1. Sq. Feet to Sq. Metres  \n 2. Sq. Metres to Sq. Feet \n 3. Sq. Feet to Acre \n 4. Acre to Sq. Feet \n Enter number here --> ");
                int c3;
                scanf("%d",&c3);
                switch(c3){
                    case 1:
                        printf("%.2f Square Feet = %.2f Square Metres", a, a/10.764);
                        break;
                    case 2:
                        printf("%.2f Square Metres = %.2f Square Feet", a, a*10.764);
                        break;
                    case 3:
                        printf("%.2f Square Feet = %.2f Acre", a, a/43560);
                        break;
                    case 4:
                        printf("%.2f Acre = %.2f Square Feet", a, a*43560);
                        break;
                    default:
                        printf("\n Error!!! _____Please Enter Valid Case____");
                    }
                break;
            case 4:
                printf("__________VOLUME CONVERSION_________");
                printf("\nChoose the conversion you want : \n 1. Liters to Cubic Centimetres/Milliliters \n 2. Cubic Centimetres/Milliliters to Liters  \n 3. Liters to US Gallons \n 4. US Gallons to Liters \n Enter number here --> ");
                int c4;
                scanf("%d",&c4);
                switch(c4){
                    case 1:
                        printf(" %.2f Liters = %.2f Cubic Centimetres/Milliliters.", a, a*1000);
                        break;
                    case 2:
                        printf(" %.2f Cubic Centimetres/Milliliters = %.2f Liters .", a, a/1000);
                        break;
                    case 3:
                        printf(" %.2f Liters = %.2f US Gallons.", a, a/3.78541178);
                        break;
                    case 4:
                        printf(" %.2f US Gallons = %.2f Liters.", a, a*3.78541178);
                        break;
                    default:
                        printf("\n Error!!! _____Please Enter Valid Case____");
                }
                break;
            case 5:
                printf("__________TEMPERATURE CONVERSION_________");
                printf("\nChoose the conversion you want : \n 1. °Celcius to °Fahrenheit \n 2. °Fahrenheit to °Celcius \n 3. °Celcius to Kelvin \n 4. Kelvin to °Celcius \n Enter number here --> ");
                int c5;
                scanf("%d",&c5);
                switch(c5){
                    case 1:
                        printf("%.2f °Celcius = %.2f °Fahrenheit", a, (a*9/5)+32);
                        break;
                    case 2:
                        printf("%.2f °Fahrenheit = %.2f °Celcius", a, (a-32)*5/9);
                        break;
                    case 3:
                        printf("%.2f °Celcius = %.2f Kelvin", a, a+273.15);
                        break;
                    case 4:
                        printf("%.2f Kelvin = %.2f °Celcius", a, a-273.15);
                        break;
                    default:
                        printf("\n Error!!! _____Please Enter Valid Case____");
                }
                break;
                default:
                    printf("\n Error!!! _____Please Enter Valid Case____");
    }
    }
    else if (choice==6){
        char str[20],ch;
        int c, j=0;
        printf("Enter String --> ");
        scanf("%s", str);
        switch (choice){
            case 6:
                printf("\n What do you want to do? \n  1. Conversion from uppercase to lowercase. \n  2. Conversion of lowercase to uppercase \n  Enter choice here :- ");
                scanf("%d",&c);
                switch(c){
                    case 1:
                        while (str[j]) {
                		ch = str[j];
                		putchar(tolower(ch));
                        j++;
                	}
                    break;
                    case 2:
                        while (str[j]){
                        ch = str[j];
                        putchar(toupper(ch));
                        j++;
                        }
                    break;
                    default:
                        printf("Enter valid choice!!!");
                    }
                break;
        default:
            printf("\n Error!!! _____Please Enter Valid Case____");
        }
    }
}







