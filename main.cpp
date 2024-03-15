#include <iostream>
#include "math.h"
#include "cmath"
#include <stdio.h>
using namespace std;
int main() {

    cout << "PROBLEM 1" << endl;

    int intNumber = 23;
    cout << "Value of Integer is " << intNumber << ". Size is " << sizeof(intNumber) << endl;
    float floatNumber = 3.14;
    cout << "Value of Float is " << floatNumber << ". Size is " << sizeof(floatNumber) <<endl;
    double doubleNumber = 45.1234;
    cout<< "Value of Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber) <<endl;
    char charName = 'A';
    cout << "Value of char is " << charName << ". Size is " << sizeof(charName) << endl;
    bool boolean = true;
    cout << "Value of Bool is " << boolean << ". Size is " << sizeof(boolean) << endl;

    cout << " PROBLEM 2" << endl;
    cout << " Namanxonova Muqaddasxon " <<  endl;
    cout << " 230166 " << endl;
    cout << " Lullaby " << endl;
    cout << " Novda " << endl;
    cout << " PROBLEM 3" << endl;

    cout << "\"I\'m standing\" on the edge of some crazy cliff.\n"
            "What I have to do, I have to catch everybody\\\n"
            "if they start to go over the cliff—I mean\\\n"
            "\\if they're running and they don't look\n"
            "where they're going I have to come out\n"
            "from somewhere and \tcatch them.";

    cout << "PROBLEM 4" << endl;
    int a = 189;
    char  b= 'B';

    float  A = (float)a/3;
    int B= b;
    float C = ((a+b)/5);
    char D = b + (char)(a/10) -1;
    cout << A << ' ' << B << ' ' << C <<' '<<  D << endl;


    cout << "PROBLEM 5" << endl;
    int x ;
    int y ;
    int sum = x + y;
    int product = x * y;
    cout << " Sum=" << sum << endl;
    cout << " Product=" << product<< endl;


    cout << "PROBLEM 6" << endl;
    int value1 = 38, value2 = 73;
    int sum1 = value1 + value2;
    cout <<"sum: " << value1 << " + " << value2 << " = " << sum1 << endl;

    cout << "PROBLEM 7" << endl;
    float X = 2, Y = 5;
    float t = 3*(X*X + 3)/(Y/4 + 3);
    cout << " t = " << t << endl;

    cout << "PROBLEM 8" << endl;
    float diameter = 6.9;
    float pi = 3.14;
    float area = (3/4)*(pi)*(diameter);
    cout<< "Area:" <<  (4)*(pi * (diameter*diameter/4)) << endl;


    cout << "PROBLEM 9 " << endl;
    int v1 , v2 ,T ;
    cout << " Please enter v1 :";

    cin >> v1;
    cout << " Please enter v2 :";
    cin >> v2;
    cout << " Please enter T :";
    cin >> T ;
    cout << " Acceleration is " << (v1-v2)/T;




    cout << "PROBLEM 10 " << endl;
    float TheDistanceToDrive = 900.5;
    float TheFuelEfficiency = 25.5;
    float ThePricePerGallon = 3.55;

    cout << "The cost of driving is " << ThePricePerGallon/TheFuelEfficiency*TheDistanceToDrive << endl;

    cout << "PROBLEM 11 " << endl;

    double pr11_var1 = 1.533e4;
    double pr11_var2 = 424e-3;
    cout << pr11_var1 << ' ' << pr11_var2 << endl;

    cout << "PROBLEM 12 " << endl;
    int Student_Number = 241;
    int Group_Number = 11;
    float Members = Student_Number/Group_Number;
    cout << " In the first group " << Student_Number/Group_Number<< endl;
    cout << " In the last group " << Student_Number/Group_Number - 1 << endl;


    cout << "PROBLEM 13 " << endl;

    int s;
    cout<<  " Please enter value for s " << endl;
    cin>> s;
    int Area = 3 * sqrt(3)/2 * s * s ;
    cout << " The area of hexagon is  " << Area << endl;

    cout << "PROBLEM 14 " << endl;
    int num ;
    cout << " Please enter a value for num" << endl;
    cin >> num ;
    cout << num++ << endl;
    cout << num * 3 << endl;
    cout <<  14/num << endl;

    cout << num/14 << endl;
    cout << num-- << endl;
    cout << num % 9 << endl ;



    cout << "PROBLEM 15 " << endl;
    char p15_v1='A';
    cout<<char(p15_v1+7)<<char(p15_v1+4)<<char(p15_v1+11)<<char(p15_v1+11)<<char(p15_v1+14)<<char(p15_v1-32)<<endl;

    cout << "PROBLEM 16 " << endl;
 int p16_var1 = 17;
 int p16_var2 = 1;
 int z = (p16_var1 +p16_var1++)/(p16_var2 + (p16_var2++)*(p16_var2++));
         cout << z <<  endl;

    cout << "PROBLEM 17 " << endl;
    int var1, var2;
    cin >> var1 >> var2 ;
    bool result = ( var1 == var2 );
    cout << result << endl;


    cout << "PROBLEM 18 " << endl;
    int p18 , p19 ;
    cout << " Please enter value for p18 " << endl;
    cin >> p18;
    cout << " Please enter value for p19 " << endl;
    cin >> p19 ;
    int result1 = (a < 140 && a < b) ? 1 : 0;
    cout << result1 << endl;
    cout << "PROBLEM 19 " << endl;
    int p19_var1, p19_var2 , p19_var3;
    cout << " Please enter a value for p19_var1 " << endl;
    cin >> p19_var1;
    cout << " Please enter a value for p19_var2 " << endl;
    cin >> p19_var2;
    cout << " Please enter a value for p19_var3 " << endl;
    cin >> p19_var3;
   cout << ( p19_var1 != p19_var2, p19_var3  ) ;
    cout << "PROBLEM 20 " << endl;
    int m1, m2 , m3 , m4 , m5;
    cout << " Enter values for m1,m2,m3,m4,m5" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    cout << (m1 >= 0 || m2 >= 0 || m3 >= 0 || m4 >= 0 || m5 >= 0) << endl;
    cout << "PROBLEM 21 " << endl;
     int  b1 , b2 ;
     cout << "Enter values for b1, b2" << endl ;
     cin >> b1 >>b2;
     int condition1 = (a + b > 30 && a * b > 30) ? 1 : 0;
    int condition2 = ((a + (b - 10) > 30) || (a * (b - 10) > 30)) ? 1 : 0;
    int condition3 = ((a > 30) || (b > 30)) ? 1 : 0;
    cout << condition1 << endl;
    cout << condition2 << endl;
    cout << condition3 << endl;
    cout << "PROBLEM 22 " << endl;
    double ft = 30.48;
    int SardorHeight , MikeHeight;
    cout << "Please enter value for SardorHeight" << endl;
    cin >> SardorHeight;
    cout << "Please enter value for MikeHeight" << endl;
    cin >> MikeHeight;
    MikeHeight = MikeHeight * ft;
    bool result2 = (MikeHeight > SardorHeight);























































    return 0;
}