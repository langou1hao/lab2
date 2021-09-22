   while (getline(in, text))
    {
      for(int k=0;k<text.length();k++){
        int flag=0;
          sc=text[k];
        if(('a'<=sc&&sc<='z')||('A'<=sc&&sc<='Z'))
		//将字母存入字符数组中
              tra[i++]=sc;
        if(sc==' '||sc=='>'||sc=='<'||sc=='='||sc=='{'||sc=='('||sc=='\n'||sc=='.')
        //若字母后有符号则存入字符串数组等待判断
        {
            arr[j]=tra;
		//存入字符串数组中
           memset(tra,'\0',sizeof(tra));
		//将字符数组清零
            i=0;
            j++;
        }
