void rotate(vector<vector<int> >& matrix)
{
    vector<vector<int>> a = matrix;
    
    int m = matrix.size();
    int n = matrix[0].size();
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            a[j][i] = matrix[i][n-1-j];   
        }   
    }
    matrix = a;  
}
