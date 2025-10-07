#include <stdio.h>


int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


void reverseString(char str[]) {
    int len = stringLength(str);
    char temp;
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}


int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; 
        }
        i++;
    }
    return 1; 
}

int main() {
    char str[25], copy[100];

    
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    
    int i = 0;
    while (str[i] != '\0') {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';

    
    int len = stringLength(str);
    printf("Length of the string: %d\n", len);

    
    reverseString(str);
    printf("Reversed string: %s\n", str);

    
    return 0;
}