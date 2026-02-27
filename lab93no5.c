#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count(char *);

int main(){

    char input[100];
    printf("Enter input: "); fgets(input, sizeof(input), stdin);
    printf("Sum of digit char: %d", count(input));

    return 0;
}

int count(char *w){
    int sum = 0;
    for(int i=0; i<strlen(w); i++){
        if(isdigit(w[i])){
            sum += (w[i] - '0');
        }
    }
    return sum;
}