#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *fp;
    fp = fopen("writeCsv.csv","r+");
    if(fp==NULL){
        printf("Error 404! File not found!");
        exit(1);
    }

    //char pname[10],phoneno[15],disease[10];
    //char PID[6],age[5];
    char name[20];
    //int acc,bal;
    while(!feof(fp)){
        fgets(name,sizeof name,fp);
        //fscanf(fp,"%d, %d",&acc,&bal);
        printf("%s",name);
    }
    fclose(fp);
    return 0;
}