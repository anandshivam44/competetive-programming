for (int i = 0; i < n; i++)
    {
        if ((a[i] + k > 10000) == false && (a[i] + 2 * k > 10000) == false)
        {
            if (arr[a[i]] == true && arr[a[i] + k] == true && arr[a[i] + 2 * k] == true)
            {
                count++;
            }
        }
        else
        {
            break;
        }
    }