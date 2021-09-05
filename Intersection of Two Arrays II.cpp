class Solution {
/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.*/

public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
stack<int>s;  
int i=0;
int j=0;  
int k=0;        
         sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
        
    while (i < nums1.size() && j <nums2.size()) {
      
        if (nums1[i]<nums2[j]){
            i++;
        }
         else if (nums1[i] > nums2[j]) {
            j++;
        }
        else{
          nums1[k++]=nums1[i];
  
            ++i, ++j;
        }

    }
      return vector<int>(nums1.begin(),nums1.begin()+k);
    }
};

