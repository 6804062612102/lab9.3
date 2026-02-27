#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]); 

int main() {
    char login[5][64] = {"user1", "user2", "user3", "user4", "user5"};
    char password[5][64] = {"pass1", "pass2", "pass3", "pass4", "pass5"};

    char input_login[100], input_password[100];

    printf("Login: ");
    scanf("%s", input_login);
    printf("Password: ");
    scanf("%s", input_password);

    
    if (checkLogin(input_login, input_password, login, password)) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    return 0;
}

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]) {
    for (int i = 0; i < 5; i++) {
        if (!strcmp(login, logindb[i])) {
            if (!strcmp(passwd, passdb[i])) {
                return 1;
            }
        }
    }
    return 0;
}