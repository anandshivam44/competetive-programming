#include <stdio.h>
#include <cmath>
#include <iostream>

void update(int *a,int *b) {
    int c=(*a) - (*b);
    *a=*a + *b;
    int d=abs(c);
    *b=d;
    // std::cout <<"a    "<<a<< std::endl;
    // std::cout <<"b    "<<b<< std::endl;
    // std::cout <<"*a   "<<*a<< std::endl;
    // std::cout <<"*b   "<<*b<< std::endl;
    // std::cout <<"c    "<<c<< std::endl;
    // std::cout <<"d    "<<d<< std::endl;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}