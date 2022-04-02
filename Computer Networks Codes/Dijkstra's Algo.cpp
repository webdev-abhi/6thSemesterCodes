#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
vector<pair<int,int>> graph[6]={{{1,2},{2,4}},{{2,1},{3,7}},{{4,3}},{{5,1}},{{3,2},{5,5}},{}};
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
vector <int> dist(6,100000000);
dist[0]=0;
pq.push({0,0});
while(!pq.empty()){
    int a=pq.top().first;
    int b=pq.top().second;
    pq.pop();
    for(auto it : graph[a]){
        if(b+it.second < dist[it.first]){
            dist[it.first]= b+it.second;
            pq.push({it.first,dist[it.first]});
        }
    }
}
for(auto it : dist) {
    cout<<it<<"-->";
}
    return 0;
}
