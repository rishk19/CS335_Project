#include <stdio.h>
#include "string.h"
#include "stdlib.h"

char* concatenate_string(char* s, char* s1)
{
    char* c = (char*) malloc(sizeof(char)*100);
    int i;
    
    int j = 0;

    while(s[j]!= '\0'){
        c[j] = s[j];
        j+=1;
    }

    printf("%c\n",s[j]);
 
    for (i = 0; s1[i] != '\0'; i++) {
        c[i+j] = s1[i];
     }
 
    c[i + j] = '\0';
 
    return c;
}

int main(int argc, char** argv)
{   
    FILE* fp;
    char * line = NULL;
    char * input_file = NULL;
    char * output_file = NULL;
    size_t len = 0;
    ssize_t read;
    int help_flag = 0;
    int verbose_flag = 0;
    fp = fopen("temp.txt","w");
    int i;
    for(i=1; i<argc; i++){
        fprintf(fp,"%s ",argv[i]);
    }
    fclose(fp);
    system("grep -o '[-][-]input[ ]*=[ ]*[a-zA-Z0-9.]*' temp.txt > output1.txt");
    fp = fopen("output1.txt","r");
    while ((read = getline(&input_file, &len, fp)) != -1) {
        if(read > 0){
            while(input_file[0]!= '='){
                input_file += 1;
            }
            input_file +=1;
            while(input_file[0] == ' '){
                input_file +=1;
            }
            printf("%s \n",input_file);
        }
        else{
            printf("No input file specified.\n");
            return 0;
        }
    }
    fclose(fp);
    system("rm output1.txt");

    system("grep -o '[-][-]output[ ]*=[ ]*[a-zA-Z0-9.]*' temp.txt > output2.txt");

    fp = fopen("output2.txt","r");
    while((read = getline(&output_file, &len, fp)) != -1) {
        //printf("%s", output_file);
        if(read > 0){
            while(output_file[0]!= '='){
                output_file += 1;
            }
            output_file +=1;
            while(output_file[0] == ' '){
                output_file +=1;
            }
            printf("%s \n",output_file);
        }
        else{
            printf("No output file specified.\n");
            return 0;
        }
    }

    fclose(fp);

    system("rm output2.txt");

    system("grep -o '[-][-]help' temp.txt > help.txt");

    fp = fopen("help.txt","r");

    if((read = getline(&output_file, &len, fp)) != -1) {
        //printf("%s", output_file);
        if(read > 0){
            help_flag = 1;
        }
    }

    fclose(fp);
    system("rm help.txt");

    
    system("grep -o '[-][-]verbose' temp.txt > verbose.txt");

    fp = fopen("verbose.txt","r");

    if((read = getline(&output_file, &len, fp)) != -1) {
        //printf("%s", output_file);
        if(read > 0){
            verbose_flag = 1;
        }
    }

    fclose(fp);
    system("rm verbose.txt");

    if(help_flag){
        printf("Welcome to help mode !\n");
    }

    if(verbose_flag){
        printf("Welcome to verbose mode! \n");
    }

    return 0;
}