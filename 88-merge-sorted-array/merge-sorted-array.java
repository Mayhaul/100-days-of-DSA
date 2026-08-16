class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int [] temp = new int[m+n];
        int i = 0;
        int j = 0;
        int idx = 0;
        while(i <= m - 1 && j <= n - 1){
            if(nums1[i] <= nums2[j]){
                temp[idx++] = nums1[i++];
            }else{
                temp[idx++] = nums2[j++];
            }
        }

        while(i <= m - 1){
            temp[idx++] = nums1[i++];
        }
        while(j <= n - 1){
            temp[idx++] = nums2[j++];
        }

       for (int k = 0; k < m + n; k++) {
            nums1[k] = temp[k];
        }
    }
}