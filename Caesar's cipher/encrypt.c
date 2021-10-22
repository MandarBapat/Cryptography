#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char* argv[]){
    if(argc == 3){
        int l = strlen(argv[1]);
        int k = atoi(argv[2]);
        for(int i=0;i<l;i++){
            argv[1][i] = (argv[1][i]-'a'+k)%26 + 'a';
        }
        printf("%s", argv[1]);
    }
    else{
        printf("Invalid input!!!");
        return -1;
    }
}
