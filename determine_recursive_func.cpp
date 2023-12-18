#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int containsForLoop() {
    FILE* file = fopen("solution.cpp", "r");

    if (file == NULL) {
        printf("Error: Could not open file %s\n", "solution.cpp");
        return 0;
    }

    char line[MAX_LINE_LENGTH];

    int ret = 0;
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if(strstr(line, "for") || strstr(line, "while")) ret = 1;
    }

    fclose(file);
    return ret;
}

extern void solve(int N);

int main(){
    if(containsForLoop())  printf("재귀함수를 사용하세요\n");

    int N;
    scanf("%d", &N);
    solve(N);
    
    return 0;
}
