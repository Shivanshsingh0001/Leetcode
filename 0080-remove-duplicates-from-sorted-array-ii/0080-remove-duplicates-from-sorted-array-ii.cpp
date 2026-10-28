class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int k=2;
        int n=arr.size();
        if(n<=2) return n;
        for (int i=2;i<n;i++){
            if(arr[i]!=arr[k-2]){
                arr[k]=arr[i];
                k++;
            }
        }
        return k;
    }
};


