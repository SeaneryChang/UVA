// 算一算每行有幾個字（word）。

// Word的定義是連續的字元（letter: A~Z a~z）所組成的字。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char s[5000];
int words = 0;
int main(void){   //void 參數為空
    while(gets(s) != NULL){
        for(int i = 0;i < strlen(s); i++){
            if(isalpha(s[i]) != 0){
                words++;
            }
            i++;
        }
        printf("%d\n",words);
        words = 0;
    }
    
}