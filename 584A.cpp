

    double ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        ans *= 10;
    }
    long long int final;
    if (t == 10 and n != 1)
    {
        final = (t * ans) / 10;
        cout << fixed << setprecision(0) << final << endl;
    }
    else if (t == 10 and n == 1)
    {
        cout << -1 << endl;
    }

    else
    {

        final = t * ans;
        cout << ans << endl;
        cout << fixed << final << endl;
        return 0;
    }
}
