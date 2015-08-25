/**
 * @input A : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
 #include <string.h>
 #include <stdio.h>
 #include <stdlib.h>

char* countAndSay(int A) {
    int count =0;
    char ch = '1';
    int i =0,j=0,k=0;
    char * str ,*newstr;
    str = (char *)malloc(sizeof(char)*10*A);
    newstr = (char *)malloc(sizeof(char)*10*A);
   // str = "1\0";
   strcpy(str,"1\0");
    
    while(i<(A-1))
    {
        while(*(str + j)!='\0')
        {
            
             if(*(str+j)!=ch)
            {
                *(newstr+k++) = count + 48;
                *(newstr+k++) = ch;
                count = 0;
                ch = *(str+j);
            }
            if(*(str+j)=='1')
                count++;
            if(*(str+j)=='2')
                count++;
            if(*(str+j)=='3')
                count++;
            j++;
        }
        *(newstr+k++) = count + 48;
        *(newstr+k++) = ch;
        count = 0;
         *(newstr+k++) = '\0';
         k=0;
        strcpy(str,newstr);
         k=0;
        strcpy(newstr,"\0");
        ch = str[0];
        j=0;
        i++;
    }
    return str;
}

int main()
{
    int n=9;
   // scanf("%d",&n);
   // - = (char *)malloc(sizeof(char)*10);
    char *st;
    st = countAndSay(n);
    printf("%s\n",st);
}
