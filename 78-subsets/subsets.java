class Solution {
    public void helper(int i, int[] nums, List<Integer> subset, List<List<Integer>> ans) {
        // base case
        if (i == nums.length) {
            ans.add(new ArrayList<>(subset));
            return;
        }

        int num = nums[i];
        // take the number
        subset.add(num);
        helper(i + 1, nums, subset, ans);
        // backtracked and removed the added number so it doesnt affect dont take call.

        subset.removeLast();
        // Dont take the number
        helper(i + 1, nums, subset, ans);
        

    }

    public List<List<Integer>> subsets(int[] nums) {
        List<Integer> subset = new ArrayList<>();
        List<List<Integer>> ans = new ArrayList<>();

        helper(0, nums, subset, ans);

        return ans;
    }
}