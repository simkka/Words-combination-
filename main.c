#include <stdio.h>
#include <string.h>

int main()
{

    char text[1000];
    char seps[]   = " ,.;?!\n\r";

    printf("Enter the text:\n");
    
    
    gets(text);

    
    char* wrds[300];
    int num = 0;


    char *word = strtok(text, seps);
    while (word != NULL)
    {
        wrds[num++] = word;
        word = strtok(NULL, seps);
    }

        for (int i = 0; i < num; i++){
        char wrd_tmp[100];

        for (int j = 0; j < num; j++){
            if (i == j)continue;
            strcpy(wrd_tmp, wrds[j]);
            int len_tmp = (int)strlen(wrds[j]);
            int a = 0;

            int len = (int)strlen(wrds[i]);
            for (int x = 0; x < len; x++){
                char smb = wrds[i][x];
                for (int k = 0; k < len_tmp; k++){
                    if (smb == wrd_tmp[k]){
                        wrd_tmp[k] = 0;
                        a++;
                        break;
                    }
                }

            }

            if (a == strlen(wrds[i])) {
                printf("\n\t%s --> %s\n", wrds[i], wrds[j]);
            }

        }
    }


    return 0;

}
