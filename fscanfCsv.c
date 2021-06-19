#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *fp;
    fp = fopen("patient.csv","r");
    if(fp==NULL){
        printf("Error 404! File not found!");
        exit(1);
    }

    char pname[10],phoneno[15],disease[10];
    char PID[6],age[5];
    while(!feof(fp)){
        fscanf(fp, "%s,%s,%s,%s,%s",PID,pname,age,phoneno,disease);
        printf("PID : %s Pname : %s Age : %s Phoneno : %s Disease : %s\n",PID,pname,age,phoneno,disease);
    }
    fclose(fp);
    return 0;
}