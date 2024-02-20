class Solution
{
    public:
    void sort012(int a[], int n){
       int zerosCount = 0;
       int onesCount = 0;
       int twoCount = 0;
       for(int i =0;i<n;i++){
           if(a[i]==0) zerosCount++;
           else if(a[i]==1) onesCount++;
           else twoCount++;
       }
       int j = 0;
       while(zerosCount--){
           a[j] = 0;
           j++;
       }
       while(onesCount--){
           a[j] = 1;
           j++;
       }
        while(twoCount--){
           a[j] = 2;
           j++;
       }
    }
};
