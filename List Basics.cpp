#include<iostream>
#include<list>

using namespace std;

int main(){
   
   list<int>heights{34,54,65,54,35,53,51,54,58,39};
   list<int>::iterator it;
   it=heights.begin();
   cout<<"List values: ";
   while(it != heights.end()){
       cout<<*it<<", ";
       it++;
   }
   
   heights.sort();
   cout<<endl<<"Sorted List: ";
   for (int h:heights){
       cout<<h<<", ";
   }
   heights.unique();
   cout<<endl<<"Unique List: ";
    for (int h:heights){
       cout<<h<<", ";
   }
   heights.reverse();
   cout<<endl<<"Reversed List: ";
    for (int h:heights){
       cout<<h<<", ";
   }
   
   heights.pop_back();
   heights.pop_front();
   
  //     cout<<"Frist element: "<<heights[1]<<endl;
  int p=heights.front();
  cout<<endl<<"First element: "<<p;
  list<int>::iterator i;
  i=heights.begin();
  cout<<endl<<"All Heights: ";
  while(i != heights.end()){
       cout<<*i<<", ";
       i++;
   }
}