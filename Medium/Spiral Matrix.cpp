class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int p = 0;
        int m = matrix.size(); int n = m ? matrix[0].size() : 0;
        vector<int> arr(m*n);
        int r1=0; int r2=m-1;
        int c1=0; int c2=n-1;

        while(r1<=r2 && c1<=c2){
            for(int i=c1;i<=c2;i++){
                arr[p++] = matrix[r1][i];
            }

            for(int i=r1+1;i<=r2;i++){
                arr[p++] = matrix[i][c2];
            }

            if(r1<r2 && c1<c2){
                for(int i=c2-1;i>=c1;i--){
                    arr[p++] = matrix[r2][i];
                }
                for(int i=r2-1;i>r1;i--){
                    arr[p++] = matrix[i][c1];
                }
            }
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return arr;     
    }
};
