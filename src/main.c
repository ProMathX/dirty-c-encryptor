#include <stdio.h>

int get_bitflip (char* key){
    int hash = 0;
    while (*key) {
        hash += (*key++);
    return hash;

    }

}

int encrypt(int c, char* key){
        int bitflip = get_bitflip(key);
        return c ^ bitflip;

}

int main(int argc, char* argv[]){
    int c;
    while ((c = getchar()) != EOF) {
        putchar(encrypt(c, argv[1]));
    }

}
