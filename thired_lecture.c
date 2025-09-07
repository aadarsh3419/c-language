int main(){
    /* Format specifier = Special tokens that begin with a %,symbol
                            followed by a character that specifies the data type
                            and optional mofifiers (width, precision, flags).
                            They control how data is displayued or interpreted.*/
    int age = 25;
    float price =19.99;
    double pi = 3.14159226535;
    char currencey = '&';
    char name[] = "bro code";


    printf("%d\n",age);
    printf("%f\n",price);
    printf("%lf\n",pi);
    printf("%c\n", currencey);
    printf("%s\n",name);
    return 0;
}

#include <stdio.h>
int main(){
    /* Format specifier = Special tokens that begin with a %,symbol
                            followed by a character that specifies the data type
                            and optional mofifiers (width, precision, flags).
                            They control how data is displayued or interpreted.*/
    //width we add after % -----> numbers to give gaps before and after the digits or characters like %5d(it 
    // it will give 5 gaps before the digit and if write -5 then it reomeve 5 space from left)

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    print("%3d\n",num1);
    print("%3d\n",num2);
    print("%3d\n",num3);
}

#include<stdio.h>
int main(){
    /* Format specifier = Special tokens that begin with a %,symbol
                            followed by a character that specifies the data type
                            and optional mofifiers (width, precision, flags).
                            They control how data is displayued or interpreted.*/
    // if we want to display only some decimals then we use digit with F 
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    print("%.2f\n", price1);
    print("%.2f\n", price2);
    print("%.2f\n", price3);


}


#include<stdio.h>
int main(){
    /* Format specifier = Special tokens that begin with a %,symbol
                            followed by a character that specifies the data type
                            and optional mofifiers (width, precision, flags).
                            They control how data is displayued or interpreted.*/
    // if we want to display gaps before the decimals then we use digit after % (%7)
    // and if we want to show (+,-) sign of a digit then we use (+,-)sign after % (%+7.2f) 
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    print("%+7.2f\n", price1);
    print("%+7.2f\n", price2);
    print("%+7.2f\n", price3);


}