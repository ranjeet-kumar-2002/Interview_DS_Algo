void rev(int i,int j,int arr[]){
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void rotate(int arr[], int n){
   int k =1;
   rev(0,n-1,arr);
   rev(0,k-1,arr);
   rev(k,n-1,arr);
}
