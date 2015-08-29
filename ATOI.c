/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
 #include <string.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <limits.h>
/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
int matoi(const char* A) {
    int num =0,f=1,r=10,minus = 1,i=0,flag =0;
    int len = strlen(A);
    char *copy;
    copy = (char *)malloc(sizeof(char)*len);
    strcpy(copy,A);
    
    while(*(A+i)==' ')
    {
        i++;
    }
    
    if(*(copy+i)=='-')
    {
        minus = -1;   
        i++;
    }
    else if(*(copy+i)=='+')
    {
        i++;
    }
    
    strcpy(copy,copy+i);
   i=0;
   
    while(*(copy+i)!='\0'&&*(copy+i)>='0'&&*(copy+i)<='9')
    {
        if(num <= INT_MAX/r)
            num = (r*num) + (*(copy + i) - 48);
        else
        {
            flag = 1;
            break;
        }
        i++;
    }
    
    if(flag == 1)
    {
        if(minus == -1)
            return INT_MIN;
        else
            return INT_MAX;
    }
    else
        return num*minus;
}


int main()
{
    char *p;
    int n=0;
    p = (char *)malloc(sizeof(char)*100);
    strcpy(p,"-38457328572394");
    n=matoi(p);
    printf("%d\n",n);
    
   

}
