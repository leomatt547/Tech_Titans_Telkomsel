#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int foo(int x[], int a, int b, int i, int j){
    int k = j;
    int ct = 0;
    while (k > i-1){
        if ((x[k] <= b) && (x[k]>a)){
            ct++;
        }
        k-=1;
    }
    return ct;
}

int main(int argc, char **argv){
    int x[20];
    x[0] = 11;
    x[1] = 10;
    x[2] = 10;
    x[3] = 5;
    x[4] = 10;
    x[5] = 15;
    x[6] = 20;
    x[7] = 10;
    x[8] = 7;
    x[9] = 11;
    static int y[10000000000000000000];
    int m = 0;
    while (m < 10000000000000000000){
        y[m] = m;
        m++;
    }
    return 0;
}