class Solution {
    public int largestInteger(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();

        int left = 0;
        int right = k - 1;
        int n = nums.length;

        for (int i = 0; i <= n - k; i++) {
            Set<Integer> uniqueInSubarray = new HashSet<>();
            for (int temp = i; temp < i + k; temp++) {
                uniqueInSubarray.add(nums[temp]);
            }
            // Increment count once per subarray for each unique number. before it was counting duplicate elements in the same subarray n times. but for one subarray we must count the elements only once even if they appear multiple times in one sub array.
            
            for (int num : uniqueInSubarray) {
                map.put(num, map.getOrDefault(num, 0) + 1);
            }
        }

        int ans = Integer.MIN_VALUE;
        for (int i : map.keySet()) {
            if (map.get(i) == 1) {
                ans = Math.max(i, ans); // Fixed: track key 'i', not frequency count
            }
        }
        return ans == Integer.MIN_VALUE ? -1 : ans;
    }
}