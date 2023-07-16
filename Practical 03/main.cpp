#include <bits/stdc++.h>
#include <math.h>
#include "areaperi.h"
#include "reverse.h"
#include "sumOfDigits.h"
#include "palindrome.h"
using namespace std;

int main()
{
    cout<<endl;
    int a=3,b=4,c=5;

    cout<<"Triangle Perimeter : "<<triPerimeter(a,b,c)<<endl;
    cout<<"Triangle Area : "<<triArea(a,b,c)<<endl;

    int r = 1;
    cout<<"Circle Perimeter : "<<circlePerimeter(r)<<endl;
    cout<<"Circle Area : "<<circleArea(r)<<endl;

    int l=4,w=5;
    cout<<"Square Perimeter : "<<sqPerimeter(l,w)<<endl;
    cout<<"Square Perimeter : "<<sqArea(l,w)<<endl;

    int num = 12321;
    cout<<endl;
    cout<<"Number is : "<<num<<endl;
    cout<<"Reversed Number is : "<<ReverseNum(num)<<endl;

    cout<<endl;
    cout<<"Sum of Digits is: "<<Sum(num)<<endl;

    cout<<endl;
    int revnum = ReverseNum(num);
    cout<<checkPalindrome(num,(revnum))<<endl;

    return 0;
}
