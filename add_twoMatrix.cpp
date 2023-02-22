class Solution {
public:
    double findMedianSortedArrays(vector<double>& nums1, vector<double>& nums2) {
        double size1=nums1.size();
        double size2=nums2.size();
        double index1(0),index2(0);
        double arr[size1+size2];
        double st(0);
        while(index1<size1 && index2<size2){
            if(nums1[index1]<nums2[index2]){
                arr[st++]=nums1[index1++];
            }
            else{
                arr[st++]=nums2[index2++];
            }
        }
        while(index1<size1){
            arr[st++]=nums1[index1++];
        }
        while(index2<size2){
            arr[st++]=nums2[index2++];
        }
        double n=size1+size2;
        if(n%2==0){
            double temp1(0);
            double temp2(0);
            temp1=n/2;
            temp2=(n/2)+1;
            return (arr[temp1-1]+arr[temp2-1])/2;
        }
        else{
            double temp=(n+1)/2;
            return arr[temp-1];
        }
        // return 1;
    }
};