#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
string encrypted_s;
int  main (int argc, string argv[])
{
     if(argc!=2)
     {
         printf("Invalid arguments!\n");
         return 1;
     }
     int k = atoi(argv[1]);
     string s;
     s = GetString();
     encrypted_s = s;
     int length = strlen(s);
     for(int i = 0; i < length; i++)
     {
         if(isalpha(s[i]))
         {
            if(isupper(s[i]))
            {
                 encrypted_s[i] = (((int)s[i] + k - 'A')%26)+'A';
                 printf("%c", encrypted_s[i]);
            }
            else if(islower(s[i]))
            {
                encrypted_s[i] = (((int)s[i] + k - 'a')%26)+'a'; 
                printf("%c", encrypted_s[i]);
            }
         }
         else
         {
             printf("%c",s[i]);
         }
     }
    printf("\n");
    return 0;
}

