fun(int t[],int n)
{int  i,m;
if(n==1)return t[0];
else
if(n>=2){
    m=fun(t,n-1);
    return m;
}
}
main()
{int a[]={11,4,6,3,8,2,3,5,9,2};
    printf("%d\n",fun(a,10));
}

