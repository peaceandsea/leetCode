/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){


int *result=malloc(2*sizeof(int));
*returnSize=2;
for (int i=0;i<numsSize;i++){
int k=nums[i];
for(int j=0;j<numsSize;j++){
 int m=nums[j];
   if (i==j){
continue;

   }
  
  if (k+m==target){
    
    
    result[0]=i;
    result[1]=j;
    
	return result;  
    }
}
}
return -1;


}
