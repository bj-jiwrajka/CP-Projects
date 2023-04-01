#include <stdio.h>
//Name-Bijay Jiwrajka
//Scholar Id-2112055
int change(int j, int k, int q)
{
    if (j == 0 && k == 0)
        return q;
    if (j == 0 && k == 1)
        return 0;
    if (j == 1 && k == 0)
        return 1;
    if (j == 1 && k == 1)
        return 1 - q;
}
int main()
{
    int q, n;
     printf("Please enter the no. of cycles: \n");
    scanf("%d", &n);
    printf("Please enter the initial value of Qn:\n ");
    scanf("%d", &q);
    int present[n], next[n], J[n], K[n], j, k;
     printf("Now enter the values of J and K:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &j, &k);
        J[i] = j;
        K[i] = k;
        present[i] = i ? next[i - 1] : q;
        next[i] = change(j, k, q);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of next state(i.e., Qn+1) is:  %d\n", next[i]);
    }

    printf("\nWaveform for initial state,Qn:\n");
    for (int i = 0; i < n; i++)
    {
        if (present[i])
        {
            printf("__");
        }
        else
        {
            printf("  ");
        }
        if (i == n - 1 || present[i + 1] != present[i])
        {
            printf(" ");
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (present[i] == 0)
        {
            printf("__");
        }
        else
        {
            printf("  ");
        }
        if (i == n - 1 || present[i + 1] != present[i])
        {
            printf("|");
        }
    }
 printf("\n Waveform for next state,Qn+1 is:\n");
    for (int i = 0; i < n; i++)
    {
        if (next[i])
        {
            printf("__");
        }
        else
        {
            printf("  ");
        }
        if (i == n - 1 || next[i + 1] != next[i])
        {
            printf(" ");
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (!next[i])
        {
            printf("__");
        }
        else
        {
            printf("  ");
        }
        if (i == n - 1 || next[i + 1] != next[i])
        {
            printf("|");
        }
    }
    printf("\n\n");
    return 0;
}