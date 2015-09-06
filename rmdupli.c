/*int removeDuplicates(int* A, int n1) {
    int i,j=0,dup=A[0],dupl = n1;
    for(i=1;i<dupl;i++)
    {
        if(A[i]==A[i-1])
        {
            for(j=i;j<dupl;j++)
            {
                A[j-1]=A[j];
            }
            dupl--;
            i--;
        }
    }
    return dupl;
    
}
*/
int removeDuplicates(int* A, int n1) {
    int p=0,i=1;
    
    for(i=1;i<n1;i++)
    {
        if(A[i-1]!=A[i])
        {
            A[p]=A[i-1];
            p++;
        }
    }
    A[p]=A[n1-1];
    return p+1;
}
