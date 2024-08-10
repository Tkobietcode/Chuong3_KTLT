#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeExtraSpaces(char *str) {
    int i, x;
    for (i = x = 0; str[i]; ++i) {
        if (!isspace(str[i]) || (i > 0 && !isspace(str[i - 1]))) {
            str[x++] = str[i];
        }
    }
    if (x > 0 && isspace(str[x - 1])) {
        x--;
    }
    str[x] = '\0';
}

int main() {
    char str[100] = "  Đây   là  một   chuỗi.   ";
    printf("Trước: '%s'\n", str);
    removeExtraSpaces(str);
    printf("Sau: '%s'\n", str);
    return 0;
}
