std::fstream in("example1.txt",std::fstream::in);
    //以只读方式打开文件
    string arr[100000];  //建立字符串数组
    string text;         
	//读取到的一行字符串
    char tra[250];      
	//作为临时存储的字符数组
