#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main(int argc, char *argv[]){
    if(argc == 2){
        int l = strlen(argv[1]);
        for(int i=0;i<26;i++){
            printf("Assuming key = %d :\n", i);
            char s[l+1];
            strncpy(s, argv[1], l);
            for(int j=0;j<l;j++){
                s[j] = (s[j]-'a'-i+26)%26 + 'a';
            }
            printf("%s\n", s);
        }
    }
    else{
        printf("Invalid input!!!");
        return -1;
    }
}

