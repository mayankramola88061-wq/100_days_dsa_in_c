//mirror the code name 
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);   

    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    printf("%s\n", str);
    return 0;
}
//reverse string
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}
