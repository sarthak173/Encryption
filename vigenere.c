#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

string encrypted_s;

int main (int argc, string argv[])
{
     if(argc!=2)
     {
         printf("No keyword specified!!\n");
         return 1;
     }
     
     
     
     int l1;
     
     string k = argv[1];
     int l = strlen(k);
     for(int i = 0; i < l; i++ )
     {
         if(!isalpha(k[i]))
         {
             printf("Invalid key!!");
             return 1;
         }
     }
     string s = GetString();
     l1 = strlen(s);
     encrypted_s = s;
     
     
         for(int i =0, j = 0; i<l1; i++)
         {
            int t = tolower(k[j%l]) - 'a';
            if(isalpha(s[i]))
            {
                if(isupper(s[i]))
                { 
                    printf("%c", 'A' + (s[i] - 'A' + t)%26);
                    j++;
                }
                else if(islower(s[i]))
                {
                    printf("%c", 'a' + (s[i] - 'a' + t)%26);
                    j++;
                }
            } 
         
                else    
                    printf("%c",s[i]);
 
        }    
        printf("\n");
        return 0;
}
