class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int i=0,j=0,m1=0,m2=0;
        for(int c=0;c<=(n1+n2)/2;c++){
            m2=m1;
            if(i!=n1&&j!=n2){
                if(nums1[i]>nums2[j]){
                    m1=nums2[j++];
                }
                else{
                    m1=nums1[i++];
                }
            }
            else if(i!=n1)m1=nums1[i++];
            else m1=nums2[j++];
        }
        if((n1+n2)%2!=0)return (double)m1;
        return ((double)m1+(double)m2)/2.0;
    }
};
