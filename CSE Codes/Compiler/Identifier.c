#include<iostream>
using namespace std;
int main()
{
int n,i;
 cout<<"enter length string\n";
 cin>>n;
 char ch[n];
 cout<<"enter string of lenth "<<n<<"\n";
 for(int i=0;i<n;i++){
 cin>>ch[i];
 }
 if((ch[0]>=65 && ch[0]<=90) ||(ch[0]>=97 && ch[0]<=122) || ch[0]=='_'){
 for(i=1;i<n;i++){
 if((ch[i]>=65 && ch[i]<=90) ||(ch[i]>=97 && ch[i]<=122) || ch[i]=='_' ||(ch[i]>='1'
 && ch[i]<='9')){
 continue;
 }
 else{
 break;
 }
 }
 if(i==n){
 cout<<"it is a identifier";
 }
 else{
 cout<<"it is not identifier";
 }
 }
 else{
 cout<<"it is not a identifier";
 }
 return 0;
}
