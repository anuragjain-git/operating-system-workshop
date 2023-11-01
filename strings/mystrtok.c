# include <stdio.h>
# include <stdlib.h>

char* strtok(char*, const char*);


int main(int argc, char const *argv[])
{
    char str[50] = "Hello good morning everyone!";
    char del[2] = " ";
    char* token;
    token = strtok(str, del);

    while (token)
    {
        printf("Token : %s\n", token);
        printf("String : %s\n", str);
        token = strtok(NULL, del);
    }
    
    return 0;
}

char* strtok(char* str, const char* del){

    static char* inputstr;
    if (str)
        inputstr = str;

    if(*inputstr == 0)
        return NULL;

    char* prev = inputstr;

    while(*inputstr){

        if (*inputstr == *del)
        {
            *inputstr = 0;
            inputstr++;
            return prev;
        }
        
        inputstr++;
    }

    return prev;    
}
