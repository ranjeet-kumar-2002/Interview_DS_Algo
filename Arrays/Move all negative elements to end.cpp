*****************************************************************************8

    
class Solution{
    public:
    void segregateElements(int arr[],int n){
     vector<int>temp1;
     vector<int>temp2;
     for(int i =0;i<n;i++){
         if(arr[i]>=0) temp1.push_back(arr[i]);
     }
     for(int i =0;i<n;i++){
         if(arr[i]<0) temp2.push_back(arr[i]);
     }
     int j = 0;
     for(int i =0;i<temp1.size();i++){
         arr[j] = temp1[i];
         j++;
     }
     for(int i =0;i<temp2.size();i++){
         arr[j] =temp2[i];
         j++;
     }
     
    }
};
***********************************************************************************88

class Solution{
    public:
    void segregateElements(int arr[],int n){
        int temp[n];
        int j = 0;
        for(int i =0;i<n;i++){
            if(arr[i]>=0) {
                temp[j] = arr[i];
                j++;
            }
        }
        for(int i =0;i<n;i++){
            if(arr[i]<0) {
                temp[j] = arr[i];
                j++;
            }
        }
        for(int i = 0;i<n;i++){
            arr[i] =temp[i];
        }
    }
};
