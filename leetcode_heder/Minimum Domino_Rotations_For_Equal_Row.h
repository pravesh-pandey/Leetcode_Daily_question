//java header
class Solution {
    public int minDominoRotations(int[] A, int[] B) {
        int res = A.length+1;
        if(A[0] == B[0]){
            res = Math.min(helper(A, B, 1, A[0]), helper(B, A, 1, A[0]));
        }else{
             // use A[0] && rotate to A
            res = Math.min(res, helper(A, B, 1, A[0]));

            // use A[0] && rotate to B
            res = Math.min(res, 1+helper(B, A, 1, A[0]));

            // use B[0] && rotate to A
            res = Math.min(res, 1+helper(A, B, 1, B[0]));

            // use B[0] && rotate to B
            res = Math.min(res, helper(B, A, 1, B[0]));
        }
       
        return res > A.length ? -1 : res;
    }
    
    public int helper(int[] A, int[] B, int idx, int val){
        int cnt = 0;
        for(int i=idx; i<A.length; i++){
            if(A[i] == val) ;
            else if(B[i] != val) return A.length+1;
            else cnt++;
        }
        return cnt;
       
    }
}