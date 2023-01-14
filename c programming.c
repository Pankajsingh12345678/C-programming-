
#include<stdio.h>
void main() {
    int a,b;
    printf("Ente the first number\n");
    scanf("%d",&a);
    printf("Ente the second number\n");
    scanf("%d",&b);

    // using third variable
    int c;
    c = a;
    a = b;
    b = c;

    printf("Values after swaping are %d and %d\n\n",a,b);

    printf("Ente the first number\n");
    scanf("%d",&a);
    printf("Ente the second number\n");
    scanf("%d",&b);
    // without using third variable

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Values after swaping are %d and %d",a,b);

}
 //10  
//Eighteen.c
@@ -0,0 +1,10 @@
#include <stdio.h>
int main() {
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
 //34  
//Eleven.c
@@ -0,0 +1,34 @@
#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}
 //13  
//Fifteen.c
@@ -0,0 +1,13 @@
#include<stdio.h>
int main(){
   int side1, side2, side3;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   if(side1 == side2 && side2 == side3)
      printf("The Given Triangle is equilateral");
   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("The given Triangle is isosceles");
   else
      printf("The given Triangle is scalene");
   return 0;
}
// 12  
//Fiftyone.c
@@ -0,0 +1,12 @@
#include<stdio.h>
void main() {
    int a = 5;
    int b = 5;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++) {
            printf("*");
        }
        printf("\n");
    }
}
 //16  
//Fiftytwo.c
@@ -0,0 +1,16 @@
#include<stdio.h>
void main() {
    int a = 5;
    int b = 5;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++) {
            if(i==1 || j==1 || i==a || j == b) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
 //11  
//Five.c
@@ -0,0 +1,11 @@
#include<stdio.h>
#include<math.h>
void main() {
    float a;
    printf("Enter the number\n");
    scanf("%f",&a);
    float power = pow(a,2);
    printf("Squire of the number is %.3f\n",power);
    float squireroot = pow(a,0.5);
    printf("Squireroot of the number is %.3f\n",squireroot);
}
 //16  
//Four.c
@@ -0,0 +1,16 @@
#include <stdio.h> 
int main()
{
    int days, years, weeks;
    printf("Enter the number of Days");
    scanf("%d",&days);
    years = days/365; 
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0;
}
 //30  
//Fourteen.c
@@ -0,0 +1,30 @@
#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
        case 1:
            printf("%d is positive.", num);
        break;

        case 0:
            switch (num < 0)
            {
                case 1: 
                    printf("%d is negative.", num);
                    break;
                case 0:
                    printf("%d is zero.", num);
                    break;
            }
        break;
    }

    return 0;
}
 //10  
//Nine.c
@@ -0,0 +1,10 @@
#include<stdio.h>
void main()
{
    int a, b, c, big ;

    printf("Enter three numbers : ") ;
    scanf("%d %d %d", &a, &b, &c) ;
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
    printf("\nThe biggest number is : %d", big) ;
}
 //18  
//Nineteen.c
@@ -0,0 +1,18 @@
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}
 //18  
//One.c
@@ -0,0 +1,18 @@
#include<stdio.h>
void main() {
    int a,b;
    int c,d,e,f;
    int g;
    printf("Enter the two numbers - \n");
    scanf("%d%d",&a,&b);
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;
    g = a%b;
    printf("Addition of both numbers is - %d\n",c);
    printf("Substraction of both numbers is - %d\n",d);
    printf("Multiplication of both numbers is - %d\n",e);
    printf("Division of both numbers is - %d\n",f);
    printf("Reminder after deviding of both numbers is - %d\n",g);
}
 //14  
//Seventeen.c
@@ -0,0 +1,14 @@
#include <stdio.h>  
int main()  
{  
    int i, n, sum=0;  
    printf("Enter any number: ");  
    scanf("%d", &n);  
    for(i=2; i<=n; i+=2)  
    {  
        sum += i;  
        printf("%d\n",i);
    }  
    printf("Sum of all even numbers from 1 to %d: %d", n, sum);  
    return 0;  
}  
 //14  
//Six.c
@@ -0,0 +1,14 @@
#include<stdio.h>
void main() {
    float a,b,c,d,e;
    printf("Enter the marks of all five subjects\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float total = a+b+c+d+e;
    printf("Total of the Numbers is %.2f\n",total);
    float avg = total/5;
    printf("Average of the marks is %.2f\n",avg);
    float percentage = avg;
    printf("Percentage of the marks is %.2f\n",percentage);


}
 //14  
//Sixteen.c
@@ -0,0 +1,14 @@
#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num, i, sum = 0; 
    printf(" Enter a positive number: ");  
    scanf("%d", &num);  
    for (i = 1; i <= num; i++)  
    {  
        sum = sum + i;
        printf("%d\n",i);
    }    
    printf("Sum of the first %d number is: %d", num, sum);   
}  
 //23  
//Ten.c
@@ -0,0 +1,23 @@
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}
// 47  
//Thirteen.c
@@ -0,0 +1,47 @@
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        case 'I': 
            printf("Vowel");
            break;
        case 'O': 
            printf("Vowel");
            break;
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
    }

    return 0;
}
 //12  
//Three.c
@@ -0,0 +1,12 @@
#include<stdio.h>
void main() {
    int a,b,c;
    printf("Enter the first angle of the triangle \n");
    scanf("%d",&a);
    printf("Enter the second angle of the triangle \n");
    scanf("%d",&b);
    c = 180-a-b;
    printf("Third angle of the triangle is %d",c);


}
 //38  
//Twelve.c
@@ -0,0 +1,38 @@
#include <stdio.h>

int main()
{
    int week;

    printf("Enter week number : ");
    scanf("%d", &week);

    switch(week)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}
 //20  
//Twenty.c
@@ -0,0 +1,20 @@
#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
 //23  
//Twentyfive.c
@@ -0,0 +1,23 @@
#include <stdio.h>
int main() {

  int i, n;

  int t1 = 0, t2 = 1;

  int nextTerm = t1 + t2;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
 //41  
//Twentyfour.c
@@ -0,0 +1,41 @@
#include <stdio.h>

int main()
{
    int i, j, cur, lastDigit, end;
    long long fact, sum;

    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All Strong numbers between 1 to %d are:\n", end);

    for(i=1; i<=end; i++)
    {
        cur = i;

        sum = 0;

        while(cur > 0)
        {
            fact = 1ll;
            lastDigit = cur % 10;

            for( j=1; j<=lastDigit; j++)
            {
                fact = fact * j;
            }

            sum += fact; 

            cur /= 10;
        }

        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
 //36  
//Twentyone.c
@@ -0,0 +1,36 @@
#include <stdio.h>
#define BASE 10 

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];

    printf("Enter any number: ");
    scanf("%lld", &num);

    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }

    n = num; 

    while(n != 0)
    {
        lastDigit = n % 10;

        n /= 10;

        freq[lastDigit]++;
    }

    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<BASE; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}
 //25  
//Twentythree.c
@@ -0,0 +1,25 @@
#include<stdio.h>

int main(){

    int num,i,count,n;
    printf("Enter max range: ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }

         if(count==0 && num!= 1)
             printf("%d ",num);
    }

   return 0;
}
 //24  
//Twentytwo.c
@@ -0,0 +1,24 @@
#include <stdio.h>
int main() {
  int a, b, x, y, t, gcd, lcm;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  gcd = a;
  lcm = (x*y)/gcd;

  printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
  printf("Least common multiple of %d and %d = %d\n", x, y, lcm);

  return 0;
}
 //10  
//Two.c
@@ -0,0 +1,10 @@
#include<stdio.h>
void main() {
    float a ,b,c ;
    printf("Enter the hight of the triangle \n");
    scanf("%f",&a);
    printf("Enter the base of the triangle\n");
    scanf("%f",&b);
    c = 0.5*a*b;
    printf("Area of the triangle is %.3f",c);
}
