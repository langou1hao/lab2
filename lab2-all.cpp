#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    int tol=0;
    int i=0,j=0;
    char sc;
    std::fstream in("example1.txt",std::fstream::in);
    //��ֻ����ʽ���ļ�
    string arr[100000];  //�����ַ�������
    string text;         
	//��ȡ����һ���ַ���
    char tra[250];      
	//��Ϊ��ʱ�洢���ַ�����
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
         if(sc=='/')
		//ɾ��ע�����
         {
             if(flag==0)
                 flag=1;
             if(flag==1)
                 break;
         }
       }
     }
    string keyword[] = {"switch","auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","typedef","union","unsigned","void","volatile","while"};
    //���ؼ�������keyword�ַ�������
    for(int x=0;x<j;x++)  //�ؼ����ж�
    {
        for(int y=0;y<=31;y++)
        {
        //�鿴�Ƿ��йؼ���
            if(keyword[y].compare(arr[x])==0)
                tol++;
        }
    }
    //������switchǶ�׵ĸ������ ͳ��switch��case������
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
    cout<<"total num: ";
    cout<<tol<<endl;
    cout<<"switch num: ";
    cout<<nswitch<<endl;
    cout<<"case num: ";
    for(int i=1;i<=nc;i++)
        cout<<' '<<ncase[i];
    cout<<endl;
    in.close();
    return 0;
}
