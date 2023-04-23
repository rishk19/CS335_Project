#include "../Includes.hpp"

using namespace std;


void flag_extractor(int argc, char** argv, char** input_file, char** output_file, int* help_flag, int* verbose_flag)
{
    int z = 0;
    FILE* fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    
    fp = fopen("temp.txt","w");
    int i;
    for(i=1; i<argc; i++){
        fprintf(fp,"%s ",argv[i]);
    }
    fclose(fp);

        /* Help Mode */

    system("grep -o '[-][-]help' temp.txt > help.txt");

    fp = fopen("help.txt","r");

    if((read = getline(output_file, &len, fp)) != -1) {
        if(read > 0){
            *help_flag = 1;
        }
    }

    fclose(fp);
    system("rm help.txt");
    
        /* Verbose Mode */

    system("grep -o '[-][-]verbose' temp.txt > verbose.txt");

    fp = fopen("verbose.txt","r");

    if((read = getline(output_file, &len, fp)) != -1) {
        if(read > 0){
            *verbose_flag = 1;

        }
        
    }

    fclose(fp);
    system("rm verbose.txt");

        /* Finding Input File */

    system("grep -o '[-][-]input[ ]*=[ ]*[a-zA-Z0-9._/]*' temp.txt > output1.txt");


    fp = fopen("output1.txt","r");
    if((read = getline(input_file, &len, fp)) != -1) {
        if(read > 0){
            while((*input_file)[0]!= '='){
                *input_file += 1;
            }
            *input_file +=1;
            while((*input_file)[0] == ' '){
                *input_file +=1;
            }
            int k = 0;
            while((*input_file)[k]!='\n')k++;
            (*input_file)[k]='\0';
        }
        else{ 
            printf("No input file specified.\n");
            return ;
        }
    }
    system("rm output1.txt");


       /* Finding Output File */

    system("grep -o '[-][-]output[ ]*=[ ]*[a-zA-Z0-9._/]*' temp.txt > output2.txt");

    fp = fopen("output2.txt","r");
    if((read = getline(output_file, &len, fp)) != -1) {
        if(read > 0){
            while((*output_file)[0]!= '='){
                *output_file += 1;
            }
            *output_file +=1;
            while((*output_file)[0] == ' '){
                *output_file +=1;
            }
            int k = 0;
            while((*output_file)[k]!='\n')k++;
            (*output_file)[k]='\0';

        }
        else{
            printf("No output file specified.\n");
            return ;
        }
    }
     

    system("rm output2.txt");
    system("rm temp.txt");

    //cout << *input_file <<endl;
}

void help()
{
    system("clear");
    system("cat ../doc/Help.txt");
}