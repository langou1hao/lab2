   //不考虑switch嵌套的复杂情况 统计switch和case的数量
    int nswitch=0,ncase[200];
    int nc=0;
    for(int x=0;x<j;x++)
    {
        if(arr[x].compare(keyword[0])==0){
            nswitch++;
            nc++;
        }
        if(arr[x].compare(keyword[3])==0){
            ncase[nc]++;
        }
    }
