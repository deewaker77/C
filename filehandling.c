#include<stdio.h>
int main(){
    FILE *fp;
    char fp1[500];
    fp = fopen("C:\\Users\\Lenovo\\OneDrive\\Desktop\\khaginder\\Eng.txt","r");
    if(fp==NULL){
        printf("Error opening file");
    }
    else{
        while(fgets(fp1,500,fp)){
        printf("%s",fp1);
    }
    return 0;
}
}