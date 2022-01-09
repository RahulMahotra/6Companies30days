int isValid(vector<vector<int>> mat){
  for (int i = 0; i < 9; i++)
    {   
        bool hash[10] = {false};

        for (int j = 0; j < 9; j++)
        {
            if (hash[mat[i][j]]) return false;
            
            if (mat[i][j] != 0) hash[mat[i][j]] = true;
        }
    }
    for (int i = 0; i < 9; i++)
    {
       bool hash[10] = {false};

        for (int j = 0; j < 9; j++)
        {
            if (hash[mat[j][i]]) return false;
            
            if (mat[j][i] != 0) hash[mat[j][i]] = true;
        }
    }
    for (int i = 0; i < 7; i += 3)
    {
        for (int j = 0; j < 7; j += 3)
        {   
            bool hash[10] = {false};
            
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if (hash[mat[i + k][j + l]])    return false;
                    
                    if (mat[i + k][j + l] != 0)
                        hash[mat[i + k][j + l]] = true;
                }
            }
        }
    }
    return true;
    }
