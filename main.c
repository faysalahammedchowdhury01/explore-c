#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int n = 1;

    /* while(n<=10){
        printf("5 X %d = %d\n",n,5*n);
        n++;
    } */

    /* int i=1;
    for(;i<=10;i++){
        printf("5 X %d = %d\n",i,5*i);
    } */

    /* int i;
    int n=5;
    int res=0;
    for(i=1;i<=10;i++){
        res = res+n;
        printf("%d X %d = %d\n",n,i,res);
    } */

    /* int i=1;
    int n=1;
     for(n=1;n<=20;n++){
        int result = 0;
        for(i=1;i<=10;i++){
            result = result + n;
            printf("%d X %d = %d\n",n,i,result);
        }
    } */

    /* int n=1;
    while(n<=20){
        int result = 0;
        int i = 1;
        while(i<=10){
            result = result + n;
            printf("%d X %d = %d\n",n,i,result);
            i++;
        }
        n++;
    } */

    /* int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            for(c=1;c<=3;c++){
                if(a != b && b != c && a != c){
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    } */


    /* int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            if(a!=b){
                for(c=1;c<=3;c++){
                    if(b!=c && a!=c){
                        printf("%d %d %d\n",a,b,c);
                    }
                }
            }
        }
    } */

    /* int x, y, x_plus_y, x_minus_y;
    x_plus_y = 20;
    x_minus_y = 10;

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("X is %d\n",x);
    printf("Y is %d\n",y); */


    /* int a1 = 4;
    int b1 = 5;
    int c1 = 14;
    int a2 = 5;
    int b2 = 6;
    int c2 = 17; */

    //  অপনয়ন পদ্ধতি
    // int x = ((c1*b2)-(c2*b1)) / ((a1*b2)-(a2*b1));
    // int y = ((c1-(a1*x)) / b1);

    // প্রতিস্থাপন পদ্ধতি
    // int y = ((a1*c2)-(a2*c1)) / ((a1*b2)-(a2*b1));
    // int x = (c1-(b1*y)) / a1;

    // আড়্গুণণ/বজ্রগুণণ পদ্ধতি
    /* int x = ((b2*c1)-(b1*c2)) / ((a1*b2)-(a2*b1));
    int y = ((a1*c2)-(a2*c1)) / ((a1*b2)-(a2*b1)); */

    /* int d = ((a1*b2)-(a2*b1));

    if(d == 0){
        printf("Wrong");
    } else{
        int x = ((b2*c1)-(b1*c2)) / d;
        int y = ((a1*c2)-(a2*c1)) / d;
        printf("x = %d\n",x);
        printf("y = %d\n",y);
    } */


    /* double loan_amount = 10000;
    double interest_rate = 35;
    int number_of_years  = 5;
    double total_amount = loan_amount + (loan_amount * interest_rate * number_of_years / 100);

    int number_of_months  = number_of_years * 12;

    double monthly_amount = total_amount / number_of_months;

    printf("You have to pay total = %0.2lf\n",total_amount);
    printf("Per month = %0.2lf\n",monthly_amount); */


    /* int v,t;
    printf("v = ");
    scanf("%d",&v);
    printf("t = ");
    scanf("%d",&t);

    printf("2t seconds e geche = %d\n",2*t*v); */

    /* int n =1000;
    printf("sum of 1 to %d numbers = %d\n",n,(n*(n+1))/2);

    int sum = 0;
    for(int i=1;i<=1000;i++){
        sum = sum + i;
    }
    printf("%d",sum); */

    /* int n = 6;
    printf("Sum of first %d even numbers is %d\n",n,n*(n+1));
    printf("Sum of first %d odd numbers is %d\n",n,n*n); */

    /* double c = 36;
    double f = (c*1.8)+32;
    printf("%0.2lf deg celcius = %0.2lf deg farenheit\n",c,f); */

    /* double f = 96.8;
    double c = (f-32)/1.8;

    printf("%0.2lf",c); */


    /* int a,b,x;

    a=5;
    b=78;

    if(a<b){
        x=a;
    } else{
        x=b;
    }

    int hcf=x;

    for(int i=2;i<=x;i++){
        if(a%hcf == 0 && b%hcf ==0){
            break;
        } else{
            hcf=x/i;
        }
    }

    int lcm = (a*b) / hcf;

    printf("The HCF of %d and %d is %d\n",a,b,hcf);
    printf("The LCM of %d and %d is %d\n",a,b,lcm); */

    /* int a = 6;
    int b = 8;
    int x;
    int hcf;

    if (a==0){
        hcf = b;
    } else if(b==0){
        hcf = a;
    } else{
        while(b != 0){
            x = b;
            b = a % b;
            a = x;
        }
    }

    hcf = a;

    printf("%d\n",hcf); */

    /* int a,b,x;

    a=6;
    b=40;

    if(a>b){
        x=a;
    } else{
        x=b;
    }

    int lcm = x;

    for(int i=2;;i++){
        if(lcm%a==0 && lcm%b==0){
            break;
        }else{
            lcm=x*i;
        }
    }

     printf("The LCM of %d and %d is %d\n",a,b,lcm); */



    return 0;
}
