string keyword[] = {"switch","auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","typedef","union","unsigned","void","volatile","while"};
    //���ؼ�������keyword�ַ�������
    for(int x=0;x<j;x++)  
	//�ؼ����ж�
    {
        for(int y=0;y<=31;y++)
        {
        //�鿴�Ƿ��йؼ���
            if(keyword[y].compare(arr[x])==0)
                tol++;
        }
    }
