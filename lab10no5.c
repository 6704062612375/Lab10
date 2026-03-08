#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

int checkLogin(char *login, char *passwd, hoststd users[], int size);

int main() {
    hoststd cs[5] = {
        {"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
        {"66-040627-2687-0", "MR.B", {"user2", "passwd2"}},
        {"66-040628-2688-1", "MR.C", {"user3", "passwd3"}},
        {"66-040629-2689-2", "MR.D", {"user4", "passwd4"}},
        {"66-040630-2690-3", "MR.E", {"user5", "passwd5"}}
    };
    
    char inputLogin[64], inputPass[64];
    int result;
    
    printf("Enter login: ");
    gets(inputLogin);
    printf("Enter password: ");
    gets(inputPass);
    
    result = checkLogin(inputLogin, inputPass, cs, 5);
    
    if(result == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
    
    return 0;
}

int checkLogin(char *login, char *passwd, hoststd users[], int size) {
    for(int i = 0; i < size; i++) {
        if(strcmp(login, users[i].stdACC.loginname) == 0 && 
           strcmp(passwd, users[i].stdACC.password) == 0) {
            return 1;
        }
    }
    return 0;
}