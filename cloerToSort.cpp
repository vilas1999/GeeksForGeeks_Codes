int binary(int arr[], int s, int e, int x)
{
    int res = -1;
    if(s<=e)
    {
        int mid = (s+e)/2;
        
        if(arr[mid] == x)
        return mid;
        if(mid>s && mid<e)
        {
            if(arr[mid-1]==x)
            return mid-1;
            if(arr[mid+1]==x)
            return mid+1;
        }
        
        if(arr[mid-1] < x)
        return binary(arr,mid+1,e,x);
        else
        return binary(arr,s,mid-1,x);
    }
    
    return res;
}
int closer(int arr[],int n, int x)
{
 return binary(arr,0,n-1,x);       
}