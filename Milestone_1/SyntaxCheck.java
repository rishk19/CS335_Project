class Solution {
    public int[] twoSum(int[] nums, int target) {
           int totalSoFar = 0;
           int resultArray[] = new int[2];
           
           if(nums!=null && nums.length>0) {
               for(int i=0;i<nums.length;i++) {
                   int complement = target-nums[i];
                   if(containsWithValue(setOfElements,complement)!=null) {
                       resultArray[0] = containsWithValue(setOfElements,complement).getPositon();
                       resultArray[1] = i;
                       return resultArray;
                   } else {
                       setOfElements.add(new ElementNamePositon(i,nums[i]));
                   }
               }
           }
           return resultArray;
       }
       
}
