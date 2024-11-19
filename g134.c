/*Raju and Ramu were playing a word game in which they both had to select unique words from the given strings. 



Help them write a program that takes a string as input and then separates it into words. The program stores these words in an array and removes any duplicate words, leaving unique words in the array.

Input format :
The input consists of a string S, representing a sentence with duplicate words.

Output format :
The output displays the set of words that are uniquely present in the given sentence, separated by sp*/


#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,k=0,a,minIndex=0,maxIndex=0,max=0,min=0;
    char str1[100]={0},substr[100][100]={0},c;
    scanf(" %[^\n]s",str1);
    while(str1[k]!='\0')
    {
        j=0;
        while(str1[k]!=' '&&str1[k]!='\0')
        {
            substr[i][j]=str1[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str1[k]!='\0')
        {
            k++;
        }
    }
    int len=i;

    for(i=0;i<len;i++)
    {
      for(j=i+1;j<len;)
       {
         if(strcmp(substr[i],substr[j])==0)
          {
             for(k=j;k<len;k++)
              {
                strcpy(substr[k],substr[k+1]);
              }
                len--;
           }
          else
           {
             j++;
           }
        }
     }
 for(i=0;i<len;i++)
 {
  printf("%s ",substr[i]);
 }

return 0;
}
