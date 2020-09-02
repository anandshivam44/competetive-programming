or (int i = 0; i < v; i++)
    {
        cout << i << " : ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }