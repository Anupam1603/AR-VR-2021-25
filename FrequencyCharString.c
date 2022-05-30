#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char str[20];
    printf("Enter string");
    gets(str);
    printf("%s",str);
    char c;
    int count = 0;
    printf("Enter character");
    scanf("%c",&c);
    int n;
    n = strlen(str);
    for(int i = 0; i< n; i++){
        if(str[i]== c){
            count = count + 1;
        }
    }
    printf("Occurance of %c\t",c);
    printf("%d",count);
}