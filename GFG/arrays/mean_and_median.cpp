int median(int A[],int N)
{
    sort (A, A + N);
    int med = 0;
    if (N % 2 == 0)
        med = floor(A[N / 2 - 1] + A[N / 2]) / 2;
    else
        med = A[N / 2];
        
    return med;
}
int mean(int A[],int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += A[i];
        
    return sum/N;
}
