class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n=arr.size();
        int srt=1,end=n-2;

        while(srt<=end)
        {
            int mid=srt+(end-srt)/2;
            
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
            {
                return mid;
            }

            if(arr[mid]<arr[mid+1])
            {
                 srt=mid+1;
            }
            else
            {
                end=mid-1;
            }

        }

        return -1;
        
    }
};