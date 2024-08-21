#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<double>marks{23,34,56,34,54,42,56};
    vector<double>::iterator it;
    for (it = marks.begin(); it != marks.end(); ++it) {
        cout << *it << " ";
        }
    marks.push_back(41);
    marks.push_back(39);
    marks.pop_back();
    cout<<"Size: "<< marks.size()<<endl;
    for(double mark:marks ){
        cout<<mark<<endl;
    }
}
