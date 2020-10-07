#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char * f (char * a){
    char *s="";
    int i = 0;
    while (i<strlen(a)-1){
        s[strlen(s)] = a[i+1];
        s[strlen(s)+1]='\0';
        i += 1;
    }
    return s;
}

char * g(char * a, int b){
    if (b==0){
        return a;
    }
    f(a)[strlen(f(a))] = a[0];
    f(a)[strlen(f(a))+1]='\0';
    return f(a);
}

int main(int argc, char *argv[]){
    const char *s = "0123456789";
    int i = 0;
    while (i < 7){
    int j = 0;
    while (j < 100000000){
        s = g(s, 9000000);
        j++;
    }
    s = g(s,9);
    i++;
    }
    printf("%s", s);
    return 0;
}
