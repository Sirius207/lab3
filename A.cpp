#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<fstream>
using namespace std;


int main(){

int number,total=0;

ifstream in("file.in",ios::in);
ofstream out("stdout",ios::out);

in>>number;
vector<int>top(number);

for(int i=1;i<=number;i++){
	in>>top.at(i-1);
	cout<<top.at(i-1)<<endl;
}

sort(top.begin(),top.begin()+8);

for(int i=0;i<=4;i++){
	total=total+top.at(7-i);
}

out<<total;

}
