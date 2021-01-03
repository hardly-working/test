#include <stdio.h>

int reverse (int x ){//Çó·´ĞòÊı

    int revx = 0 ;
    while(x != 0) {
        revx *= 10;
        revx += x % 10  ;
        x /= 10 ;
    }

    return revx;

}
int main(){


    for(int i = 1000 ; i<= 9999 ; i++){
        if (i * 9 == reverse(i)){
            printf("%d",i);
        }
    }
    return 0;

}
