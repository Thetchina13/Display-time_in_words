#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* timeInWords(int h, int m)
{
    char* s1=malloc(50 *sizeof(char));
    char* s2=malloc(50 *sizeof(char));
    char* s3=malloc(50 *sizeof(char));
    char* result=malloc(100 *sizeof(char));
   
    if(m==0)
    {
        strcpy(s2," o' clock");
         switch(h)
    { 
        case 1:
            {
              strcpy(s3,"one");
                break;
            }
      case 2:
            {
              strcpy(s3,"two");
                break;
            }
      case 3:
            {
              strcpy(s3,"three");
                break;
            }
      case 4:
            {
              strcpy(s3,"four");
                break;
            }
      case 5:
            {
              strcpy(s3,"five");
                break;
            }
      case 6:
            {
              strcpy(s3,"six");
                break;
            }
      case 7:
            {
              strcpy(s3,"seven");
                break;
            }
      case 8:
            {
              strcpy(s3,"eight");
                break;
            }
      case 9:
            {
              strcpy(s3,"nine");
                break;
            }
      case 10:
            {
              strcpy(s3,"ten");
                break;
            }
      case 11:
            {
              strcpy(s3,"eleven");
                break;
            }
      case 12:
            {
              strcpy(s3,"twelve");
                break;
            }
    }
        strcat(s3,s2);
        strcpy(result,s3);
    }
    else 
    {  
        if(m==1 ||m==59)
            strcpy(s1,"one minute");
        else if(m==2 ||m==58)
            strcpy(s1,"two minutes");
        else if(m==3 ||m==57)
            strcpy(s1,"three minutes");
        else if(m==4 ||m==56)
            strcpy(s1,"four minutes");
        else if(m==5 ||m==55)
            strcpy(s1,"five minutes");
        else if(m==6 ||m==54)
            strcpy(s1,"six minutes");
        else if(m==7 ||m==53)
            strcpy(s1,"seven minutes");
        else if(m==8 ||m==52)
            strcpy(s1,"eight minutes");
        else if(m==9 ||m==51)
            strcpy(s1,"nine minutes");
        else if(m==10 ||m==50)
            strcpy(s1,"ten minutes");
        else if(m==11 ||m==49)
            strcpy(s1,"eleven minutes");
        else if(m==12 ||m==48)
            strcpy(s1,"twelve minutes");
        else if(m==13 ||m==47)
            strcpy(s1,"thirteen minutes");
        else if(m==14 ||m==46)
            strcpy(s1,"fourteen minutes");
        else if(m==15 ||m==45)
            strcpy(s1,"quarter");
        else if(m==16 ||m==44)
            strcpy(s1,"sixteen minutes");
        else if(m==17 ||m==43)
            strcpy(s1,"seventeen minutes");
        else if(m==18 ||m==42)
            strcpy(s1,"eighteen minutes");
        else if(m==19 ||m==41)
            strcpy(s1,"nineteen minutes");
        else if(m==20 ||m==40)
            strcpy(s1,"twenty minutes");
        else if(m==21 ||m==39)
            strcpy(s1,"twenty one minutes");
        else if(m==22 ||m==38)
            strcpy(s1,"twenty two minutes");
        else if(m==23 ||m==37)
            strcpy(s1,"twenty three minutes");
        else if(m==24 ||m==36)
            strcpy(s1,"twenty four minutes");
        else if(m==25 ||m==35)
            strcpy(s1,"twenty five minutes");
        else if(m==26 ||m==34)
            strcpy(s1,"twenty six minutes");
        else if(m==27 ||m==33)
            strcpy(s1,"twenty seven minutes");
        else if(m==28 ||m==32)
            strcpy(s1,"twenty eight minutes");
        else if(m==29 ||m==31)
            strcpy(s1,"twenty nine minutes");
        else if(m==30)
            strcpy(s1,"half");
        if(m<=30)
        {
            strcpy(s2," past ");
        strcat(s1,s2);
          
    }
        else
        {
          strcpy(s2," to ");
            strcat(s1,s2);
            h++;
        }
    
     switch(h)
    { 
        case 1:
            {
              strcpy(s3,"one");
                break;
            }
      case 2:
            {
              strcpy(s3,"two");
                break;
            }
      case 3:
            {
              strcpy(s3,"three");
                break;
            }
      case 4:
            {
              strcpy(s3,"four");
                break;
            }
      case 5:
            {
              strcpy(s3,"five");
                break;
            }
      case 6:
            {
              strcpy(s3,"six");
                break;
            }
      case 7:
            {
              strcpy(s3,"seven");
                break;
            }
      case 8:
            {
              strcpy(s3,"eight");
                break;
            }
      case 9:
            {
              strcpy(s3,"nine");
                break;
            }
      case 10:
            {
              strcpy(s3,"ten");
                break;
            }
      case 11:
            {
              strcpy(s3,"eleven");
                break;
            }
      case 12:
            {
              strcpy(s3,"twelve");
                break;
            }
    }
              strcat(s1,s3);
            strcpy(result,s1);
    }
return result;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* h_endptr;
    char* h_str = readline();
    int h = strtol(h_str, &h_endptr, 10);

    if (h_endptr == h_str || *h_endptr != '\0') { exit(EXIT_FAILURE); }

    char* m_endptr;
    char* m_str = readline();
    int m = strtol(m_str, &m_endptr, 10);

    if (m_endptr == m_str || *m_endptr != '\0') { exit(EXIT_FAILURE); }

    char* result = timeInWords(h, m);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
