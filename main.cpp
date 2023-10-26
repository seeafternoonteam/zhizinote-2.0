#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
using namespace std;
int n,cnt,a,b,c;
string str;
struct note{
	string name;
	int year;
	int month;
	int day;
	string content;
}s[100000];//note定义
void cl(string x){
	for(int i=0;i<x.length();i++){
		if(x[i]=='/'&&x[i+1]=='n'){
			cout<<endl;
			i++;
		}
		else if(x[i]=='·'){
			sleep(1);
			system("cls");
		}
		else{
			cout<<x[i];
		}
	}
}
int main(){
	cout<<"欢迎使用zhizinote-2.0"<<endl;
	sleep(1);
	system("cls");
	freopen("note.in","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
    cin>>s[i].name>>s[i].year>>s[i].month>>s[i].day;
		getline(cin,s[i].content);
	}
	freopen("CON","r",stdin);
	while(true){
		cout<<"请输入你要干什么"<<endl<<"1.写日记"<<endl<<"2.查看日记"<<endl<<"3.退出"<<endl;
		cin>>n;
		if(n==1){
			cnt++;
			cout<<"请输入标题:";
			cin>>s[cnt].name;
			cout<<"请输入几年几月几日(中间用空格隔开):";
			cin>>s[cnt].year>>s[cnt].month>>s[cnt].day;
			cout<<"请输入内容(教程看文档):";
			getline(cin,s[cnt].content);
			cout<<"OK"<<endl;
		}
		else if(n==2){
			cout<<"请输入几年几月几年(空格隔开):";
			cin>>a>>b>>c;
			for(int i=1;i<=cnt;i++){
				if(s[i].year==a&&s[i].month==b&&s[i].day==c){
					cout<<"日记名称:"<<s[i].name<<endl;
					cl(s[i].content);
				}
			}
		}
		else{
			cout<<"感谢使用"<<endl;
			freopen("note.in","w",stdout);
			for(int i=1;i<=cnt;i++){
				cout<<s[i].name<<s[i].year<<s[i].month<<s[i].day<<endl;
				cout<<s[i].content<<endl;
			}
			sleep(1);
			return 0;
		}
	}
}
