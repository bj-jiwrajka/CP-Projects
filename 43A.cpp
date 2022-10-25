
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 1;
    int max = 1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if (cnt > max)
        {
            max = cnt;
            ans = i;
        }
        cnt = 1;
    }
    cout << arr[ans] << endl;
}