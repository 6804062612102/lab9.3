#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main ()
{
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0;
 
    printf("Enter First string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter Second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
 
    int count = 0;
    for (i = 0; str1[i]!= '\0'; i++){
        for (j = 0; str2[j] != '\0'; j++){
            if (str1[i] == str2[j]){
                count++;
                continue;
            }
            else{
                str_rem[k] = str2[j];
                k++;
            }
        }
        str_rem[k] = '\0';
        strcpy(str2, str_rem);
        k = 0;
        printf("%c : %d\n",str1[i],count);
        count = 0;
    }
 
    printf ("On removing characters from second string we get: %s\n", str_rem);
 
    return 0;
}