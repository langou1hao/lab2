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
    //以只读方式打开文件
    string arr[100000];  //建立字符串数组
    string text;         
	//读取到的一行字符串
    char tra[250];      
	//作为临时存储的字符数组
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
         if(sc=='/')
		//删除注释语句
         {
             if(flag==0)
                 flag=1;
             if(flag==1)
                 break;
         }
       }
     }
    string keyword[] = {"switch","auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","typedef","union","unsigned","void","volatile","while"};
    //将关键字输入keyword字符串数组
    for(int x=0;x<j;x++)  //关键字判断
    {
        for(int y=0;y<=31;y++)
        {
        //查看是否有关键字
            if(keyword[y].compare(arr[x])==0)
                tol++;
        }
    }
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
