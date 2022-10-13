class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
       int j=0;
       int i=0;
       for(i=0;i<n && j<n;)
       {
           while(a[j]==a[j+1])
           {
               j++;
           }
           a[i+1]=a[j+1];
           i++;j++;
       }
       return (i);
       
    }
};
