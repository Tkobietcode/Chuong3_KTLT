#include <stdio.h>
#include <string.h>

void findName(const char *fullName, const char *name) {
    if (strstr(fullName, name) != NULL) {
        printf("Tên này đã nhập đúng.\n");
    } else {
        printf("Đã nhập sai.\n");
    }
}

int main() {
    char fullName[100] = "Nguyen Van A";
    char name[50] = "Van";
    
    findName(fullName, name);
    return 0;
}
