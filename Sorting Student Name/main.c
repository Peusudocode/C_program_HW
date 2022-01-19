#include <stdio.h>
#include <string.h>
#define MAX_LEN_NAME 100
int main() {
    int n;
    scanf("%d", &n);
    char k = getchar();
    char name_array[100][100], temp[100];
    for (int i = 0;i < n; i++){
        fgets(name_array[i], MAX_LEN_NAME, stdin);
    }
    for(int i=0;i < n;i++){
        for(int j=i+1;j< n;j++){
            if(strcmp(name_array[i],name_array[j])>0){
                strcpy(temp,name_array[i]);
                strcpy(name_array[i],name_array[j]);
                strcpy(name_array[j],temp);
            }
        }
    }
    for(int i = 0; i < n; i++){
        int j = 0;
        while(name_array[i][j] != '\n'){
            printf("%c", name_array[i][j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}
