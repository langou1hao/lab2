string keyword[] = {"switch","auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","typedef","union","unsigned","void","volatile","while"};
    //将关键字输入keyword字符串数组
    for(int x=0;x<j;x++)  
	//关键字判断
    {
        for(int y=0;y<=31;y++)
        {
        //查看是否有关键字
            if(keyword[y].compare(arr[x])==0)
                tol++;
        }
    }
