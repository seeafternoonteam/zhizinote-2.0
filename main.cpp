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
}s[100000];//note����
void cl(string x){
	for(int i=0;i<x.length();i++){
		if(x[i]=='/'&&x[i+1]=='n'){
			cout<<endl;
			i++;
		}
		else if(x[i]=='��'){
			sleep(1);
			system("cls");
		}
		else{
			cout<<x[i];
		}
	}
}
int main(){
	cout<<"��ӭʹ��zhizinote-2.0"<<endl;
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
		cout<<"��������Ҫ��ʲô"<<endl<<"1.д�ռ�"<<endl<<"2.�鿴�ռ�"<<endl<<"3.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cnt++;
			cout<<"���������:";
			cin>>s[cnt].name;
			cout<<"�����뼸�꼸�¼���(�м��ÿո����):";
			cin>>s[cnt].year>>s[cnt].month>>s[cnt].day;
			cout<<"����������(�̳̿��ĵ�):";
			getline(cin,s[cnt].content);
			cout<<"OK"<<endl;
		}
		else if(n==2){
			cout<<"�����뼸�꼸�¼���(�ո����):";
			cin>>a>>b>>c;
			for(int i=1;i<=cnt;i++){
				if(s[i].year==a&&s[i].month==b&&s[i].day==c){
					cout<<"�ռ�����:"<<s[i].name<<endl;
					cl(s[i].content);
				}
			}
		}
		else{
			cout<<"��лʹ��"<<endl;
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
