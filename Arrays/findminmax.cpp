class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        int min=INT_MAX;
         int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
            }
            if(a[i]>max){
                max=a[i];
            }
        }
        return{min,max};
    }
};
