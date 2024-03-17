//You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .
#include <stdio.h>
#include <string.h>


int main() 
{
     char ch;
    char s[24];
    char t[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    getchar();
    scanf("%[^\n]%*c", t);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", t);
       
    return 0;
}