class Solution {
    public void helper(int [] nums, List<Integer> store, List<List<Integer>> ans){
        if(nums.length == 0){
            ans.add(new ArrayList<>(store));
            return;
        }

        for(int i = 0; i < nums.length; i++){
            store.add(nums[i]);
            int val = nums[i];
            int [] arr = Arrays.stream(nums).filter(n -> n != val ).toArray();
            helper(arr, store,ans);
            store.removeLast();
        }
    }
    public List<List<Integer>> permute(int[] nums) {
        List<Integer> store = new ArrayList<>();
        List<List<Integer>> ans = new ArrayList<>();
        helper(nums, store, ans);
        return ans;
    }
}