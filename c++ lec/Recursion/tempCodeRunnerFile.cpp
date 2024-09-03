 if(l==r) return ;
   swap(arr[l],arr[r]);
   reverse(arr,l+1,r-1);