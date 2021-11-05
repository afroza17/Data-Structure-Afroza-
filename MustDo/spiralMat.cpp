//https://leetcode.com/problems/spiral-matrix/

void printVector(vector<int>&vec)
{
    return;
    for(auto k:vec)
        cout<<k<<" ";
    cout<<endl;
}
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> res;
        int nRow=matrix.size()-1;
        int nCol=matrix[0].size()-1;
        int r=0,c=0;
        while(r<=nRow && c<=nCol)
        {
            printf("(%d,%d) (%d,%d)\n",r,nRow,c,nCol);

            for(int i=c;i<=nCol;i++)
                res.push_back(matrix[r][i]);
            r++;
            
            printVector(res);
            for(int j=r;j<=nRow;j++)
                res.push_back(matrix[j][nCol]);
            nCol--;
            
                        printVector(res);
            if(r<=nRow)
            {
                for(int k=nCol;k>=c;k--)
                    res.push_back(matrix[nRow][k]);

                nRow--;
                 printVector(res);
            }
            
                       
            if(c<=nCol)
            {
                for(int l=nRow;l>=r;l--)
                    res.push_back(matrix[l][c]);
                c++;
                            printVector(res);
            }
        //    r++;c++;nRow--;nCol--;
        }
        
    //    printf("(%d,%d) (%d,%d)\n",r,nRow,c,nCol);
        return res;    
    }
};