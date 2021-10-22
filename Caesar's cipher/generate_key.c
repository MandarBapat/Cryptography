#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    printf("%d", rand()%26);
}

