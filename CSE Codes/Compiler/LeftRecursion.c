#include<iostream>
#include<string> 
using namespace std;
int main(){ string s;
int count=1;
cin>>s;
 for(int i=3;s[i]!='\0';i++){
if(s[i]=='|')
count++;
 }
 string arr[count]={""};
char start=s[0]; int
i=3; int p=0;
while(s[i]){
if(s[i]=='|'){
p+=1; i++;
continue;
 }
 arr[p]+=s[i];
i++;
 }
 for(int i=0;i<count;i++){
if(arr[i][0]!=start){
 cout<<start<<"->"<<arr[i]<<start<<"'"<<"\n";
 }
 }
 for(int i=0;i<count;i++){
if(arr[i][0]==start){
 cout<<start<<"'"<<"->"<<arr[i].substr(1)<<start<<"'"<<"|"<<"\u03B5"<<"\n";
 }
 }
}
