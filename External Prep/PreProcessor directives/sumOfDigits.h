#ifndef SUMOFDIGITS_H_INCLUDED
#define SUMOFDIGITS_H_INCLUDED

#define Sum(nm)({\
    int sum=0;\
    int n = nm;\
    while(n!=0){\
        int digit = n%10;\
        sum+=digit;\
        n/=10;\
    };\
sum;})

#endif // SUMOFDIGITS_H_INCLUDED
