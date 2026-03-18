/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 typedef struct{
    int num;
    int idx;
    UT_hash_handle hh;
 } HashEntry;
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    HashEntry* idx_map = NULL;
    HashEntry* e;
    for(int i=0;;i++){
        int t = target-nums[i];
        HASH_FIND_INT(idx_map,&t,e);
        if(e){
            int* ans = malloc(2*sizeof(int));
            *returnSize = 2;
            ans[0] = e->idx;
            ans[1] = i;
            HashEntry* tmp;
            HASH_ITER(hh,idx_map,e,tmp){
                HASH_DEL(idx_map,e);
                free(e);
            }

            return ans;
        }
        HASH_FIND_INT(idx_map,&nums[i],e);
        if(e==NULL){
            e = malloc(sizeof(HashEntry));
            e->num = nums[i];
            e->idx = i;
            HASH_ADD_INT(idx_map,num,e);
        }

    }
}
