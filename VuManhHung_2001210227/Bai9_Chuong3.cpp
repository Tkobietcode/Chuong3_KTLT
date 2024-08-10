#include <stdio.h>
#include <string.h>

void countCharacterFrequency(const char *str) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c': %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[100] = "Xin chao, the gioi!";
    
    countCharacterFrequency(str);
    return 0;
}
