#ifndef PALINDROME_H_INCLUDED
#define PALINDROME_H_INCLUDED

#define checkPalindrome(num,revNum)({\
    string ans;\
    if(revNum == num)\
        ans = "Palindrome";\
    if(revNum != num)\
        ans = "Not a Palindrome";\
ans;})


#endif // PALINDROME_H_INCLUDED
