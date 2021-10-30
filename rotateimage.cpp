for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix[i].size();j++)
                swap(matrix[i][j],matrix[j][i]);
               reverse(matrix[i].begin(),matrix[i].end());
        }
