class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet<Integer> mp = new HashSet<>() ;
        for(int i = 0 ; i< nums.length ; i++){
            if(mp.contains(nums[i]))    return true;
            mp.add(nums[i]);
        }
        return false ;
    }
}