#include <stdio.h>

int main() {
    int x = 97;
    long long big = 9223372036854775807;
    char c = x;
    char random_char;
    printf("long long: %lld, char: %c, random char: %c\n",big,c,random_char);
    ++big;
    printf("long long +1: %lld\n",big);
    printf("x: %d\n",x);
	++x;
    printf("x: %d\noverflow test:\n",x);
    unsigned int y = 3;
    for(int i = 0; i < 4; ++i){
        --y;
        printf("y: %u\n",y);
    }
    printf("SIZES:\tint: %ld, uint: %ld, char: %ld, long long: %ld\n", sizeof(x), sizeof(y), sizeof(c), sizeof(big));
	return 0;
}