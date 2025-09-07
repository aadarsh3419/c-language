/*
we use variable  =A reusable container foa a value.
                behave as if it were the value it contains.
And to print the result we use printf
And to store a variable we use % sign we use character after that for differnt varibales to 
different character like
int = %d ( it use 4bytes in modern systems)
float = %f ( it use 4bytes)
double = %.15lf ( it use 8 bytes)
char = %c ( it use 1 bytes)
char[] = %c  array of characters( size varies)
bool = %d ( 1 bytes , requires <stdbool.h>)
    */
#include <stdio.h>

int main(){
    // variable  =A reusable container foa a value.
    //            behave as if it were the value it contains.
    // int is for integers value to access it 

    int age = 25;
    int year = 2025;
    int quantity = 1;

    
    printf("you are %d years old\n", age);
    printf("the year is %d \n",year);
    printf("the coffe quantity is %d",quantity);

    return 0;
}

#include <stdio.h>

int main(){
    // variable  =A reusable container foa a value.
    //            behave as if it were the value it contains.
    // float is for float values so we can access the float value in easy way

    float gpa = 2.5;
    float price = 19.9;
    float temperature = -10.1;
    
  // we can only store 6 to 7 digit after decimeal so we use different data type (double)
    printf(" the gpa is %f\n",gpa);
    printf("the price is $%f\n",price);
    printf("the temperature is %f°F\n",temperature);//for using digree sign you need to alt+0176

    
    
    return 0;
}
#include <stdio.h>

int main(){
    // variable  =A reusable container foa a value.
    //            behave as if it were the value it contains.
    // double is use when we need to put more digites after decimal above 6 to 7
    double pi =3.14159265358979;
    double e = 2.171828782884590;
    printf(" the pi is %.15lf\n",pi);
    printf("the value of e is %.15lf\n",e);

    
    
    return 0;
}
#include<stdio.h>
int main(){
    // variable  =A reusable container foa a value.
    //            behave as if it were the value it contains.
    // char is used for characters or we can say that we use it 
    //for strings and we use %c to store values 
    char grade = 'A';
    char symbol = '!';
    char currency = '$';


    printf("your grade is %c\n",grade);
    printf("my symbole is %c\n",symbol);
    printf("the currency is %c\n",currency);
    return 0;
}
#include<stdio.h>
int main(){
    // variable  =A reusable container foa a value.
    //            behave as if it were the value it contains.
    // in char[] this is an arry character which can contain more then one value
    char name[] = "hero hera lal";
    char food[] = "i love aalu paratha";
    char email[] = "fakeversion33@.gmail.com";


    printf("hello %s\n", name);
    printf("wow! %s\n",food);
    printf("my email is %c\n",email);
    
    return 0;
}

#include<stdio.h>
#include <stdbool.h>
int main(){
    // variable  =A reusable container foa a value.
    //            behave as if it were the value it contains.
    bool isOnline = true;//flase

    if(isOnline){
        printf("you are online\n");
    }
    else{
        printf("you are offline\n");
    }

    printf("%d", isOnline);
    
    bool forsale = false;

    if(forsale){
        printf("this is for sale\n");
    }
    else{
        printf("sold out\n");
    }

    printf("%d", forsale);
    return 0;
}




