 // BISHU AND SOLDIER PROBLEM
int main()      
{   
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    sort(arr,arr+n);
    int p[n+1];
    p[0] = 0;
    for( int i=1;i<n;i++)
    {
        p[i] = p[i-1] + arr[i-1];
    }
    while(m--)
    {
        int x;
        cin>>x;
        int idx = upper_bound(arr,arr+n,x) - arr;
        cout<<idx<<" "<<p[idx]<<endl;
    }
    return 0;
}