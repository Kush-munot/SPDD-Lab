#ifndef AREAPERI_H_INCLUDED
#define AREAPERI_H_INCLUDED

#define pi 3.141592653589793238
#define circleArea(r) (pi*(r*r))
#define circlePerimeter(r) (2*pi*r)

#define sqArea(l,b) (l*b)
#define sqPerimeter(l,b) (2*(l+b))

#define s(a,b,c) ((a+b+c)/2)
#define triArea(a,b,c) (sqrt((s(a,b,c))*((s(a,b,c)-a)*((s(a,b,c)-b)*((s(a,b,c)-c))))))
#define triPerimeter(a,b,c) (a+b+c)


#endif // AREAPERI_H_INCLUDED
