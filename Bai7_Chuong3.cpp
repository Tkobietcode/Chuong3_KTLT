#include <stdio.h>
#include <string.h>

void insertWord(char *str, const char *word, int pos) {
    int len = strlen(str);
    int wordLen = strlen(word);
    
    for (int i = len; i >= pos; i--) {
        str[i + wordLen] = str[i];
    }
    
    for (int i = 0; i < wordLen; i++) {
        str[pos + i] = word[i];
    }
}

int main() {
    char str[100] = "Xin chao the gioi!";
    char word[50] = "dep ";
    int pos = 9;
    
    printf("Trước: '%s'\n", str);
    insertWord(str, word, pos);
    printf("Sau: '%s'\n", str);
    return 0;
}
