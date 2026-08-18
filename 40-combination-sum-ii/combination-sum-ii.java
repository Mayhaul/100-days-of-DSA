class Solution {

    public void helper(int[] arr, int target, int sum, List<Integer> nums, List<List<Integer>> ans) {
        if (sum == target) {
            ans.add(new ArrayList<>(nums));
            return;
        }
        if (arr.length == 0)
            return;

        if (sum > target)
            return;

        sum += arr[0];
        nums.add(arr[0]);
        helper(Arrays.copyOfRange(arr, 1, arr.length), target, sum, nums, ans);
        sum -= arr[0];
        nums.removeLast();

        int idx = 1;
        // if we have duplicate adjacent elements then we must skip them.
        while (idx < arr.length && arr[idx] == arr[0]) {
            idx++;
        }
        helper(Arrays.copyOfRange(arr, idx, arr.length), target, sum, nums, ans);
    }

    public List<List<Integer>> combinationSum2(int[] arr, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> nums = new ArrayList<>();
        // sort once and skip duplicates later.
        Arrays.sort(arr);
        int sum = 0;
        helper(arr, target, sum, nums, ans);
        return ans;

    }
}