   while (getline(in, text))
    {
      for(int k=0;k<text.length();k++){
        int flag=0;
          sc=text[k];
        if(('a'<=sc&&sc<='z')||('A'<=sc&&sc<='Z'))
		//����ĸ�����ַ�������
              tra[i++]=sc;
        if(sc==' '||sc=='>'||sc=='<'||sc=='='||sc=='{'||sc=='('||sc=='\n'||sc=='.')
        //����ĸ���з���������ַ�������ȴ��ж�
        {
            arr[j]=tra;
		//�����ַ���������
           memset(tra,'\0',sizeof(tra));
		//���ַ���������
            i=0;
            j++;
        }
