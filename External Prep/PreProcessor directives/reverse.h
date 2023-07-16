#ifndef REVERSE_H_INCLUDED
#define REVERSE_H_INCLUDED

#define ReverseNum(nm)({\
    int rev=0;\
    int n = nm;\
    while(n!=0){\
    int digit = n%10;\
    rev = rev*10+digit;\
    n/=10;\
    };\
rev;})



#endif // REVERSE_H_INCLUDED
