/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {

    *returnSize=n+1;
    int *a=malloc((n + 1)*sizeof(int));
    int count=0,i,x;
    for(i=0;i<=n;i++){
        x=i;
       while(x!=0)
       {
        if((x&1)==1)
            count++;
        x=x>>1;
       }
       a[i]=count;
       count=0;
    }
    return (a);}
    
