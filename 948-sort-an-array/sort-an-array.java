class Solution {

    public static void mergeSort(int [] arr, int left, int right){
        if(left >= right)
            return;

        int mid = left + (right - left)/2;    

        mergeSort(arr, left, mid);    
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }

    public static void merge(int [] arr, int left, int mid, int right){
        int i = left;
        int j = mid + 1;
        ArrayList<Integer> temp = new ArrayList<>();

        while(i <= mid && j <= right){
            if(arr[i] <= arr[j]){
                temp.add(arr[i++]);
            }else{
                temp.add(arr[j++]);
            }
        }

        while(i <= mid){
            temp.add(arr[i++]);
        }
        while(j <= right){
            temp.add(arr[j++]);
        }

        int idx = 0;

        for(int start = left; start <= right; start++){
            arr[start] = temp.get(idx++);
        }

    }

    public int[] sortArray(int[] nums) {

        mergeSort(nums, 0, nums.length - 1);

        return nums;
    }
}