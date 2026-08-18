class Solution {
    void helper(int[] arr, int target, List<List<Integer>> ans , List<Integer> nums, int x){
        if(x == target){
            ans.add(new ArrayList<>(nums));
            return;
        }
        if(arr.length == 0)
            return;

        if( x > target){
            return;
        }
        x += arr[0];
        nums.add(arr[0]);
        helper(arr, target, ans, nums, x);
        x-= arr[0];
        nums.removeLast();
        helper(Arrays.copyOfRange(arr, 1, arr.length), target, ans,nums, x);
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> nums = new ArrayList<>();
        int x = 0;
        helper(candidates, target, ans, nums, x);

        return ans;
    }
}