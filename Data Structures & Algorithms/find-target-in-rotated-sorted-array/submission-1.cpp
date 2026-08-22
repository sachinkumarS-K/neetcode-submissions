class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0 , h = n-1;
        while(l < h){
            int m = (l+h)/2;
            if(arr[m] > arr[h])
                l = m+1;
            else
                h = m;
        }
        int shift = l;
        l = 0 , h =n-1;
        while(l <= h){
            int m = (l+h)/2;
            int m1 = (m+shift)%n;
            cout<<m1<<" ";
            if (arr[m1] == target)
                return m1;
            else if (arr[m1] < target)
                l = m + 1;
            else
                h = m - 1;
        }
        return -1;
    }
};
