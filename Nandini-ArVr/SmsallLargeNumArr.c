#include<stdio.h>
#include<conio.h>

void main(){
    int n, lnum=0, snum;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("Enter number\n");
        scanf("%d",&arr[i]);
        if(arr[i]>lnum){
            lnum=arr[i];
        }
    snum = arr[0];
    for(int j=1; j<n; j++){
        if(arr[i]<snum){
            snum=arr[i];
        }
    }   
    }
    printf("Smallest num%d\n",snum);
    printf("Largest num%d",lnum);

}



//{34,45,6}
//snum=6
//lnum=45

