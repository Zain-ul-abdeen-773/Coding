#include<iostream>
using namespace std;
class Arrays{
    public:
    int *array1 = new int[10];
    int *array2 = new int[10];

    Arrays(int array1[10],int array2[10]){
        for(int i=0;i<10;i++){
            this->array1[i]=array1[i];
            this->array2[i]=array2[i];
        }
    }
    Arrays( Arrays &a1){
      for(int j=0;j<10;j++){
        array1[j]=a1.array1[j];
        array2[j]=a1.array2[j];
      }
    }
    int sum1=0;
    int sum2=0;

    void sum(){

       for(int k=0;k<10;k++){
        sum1+=array1[k];
        sum2+=array2[k];
       }
       cout<<"Sum of Array 1: "<<sum1<<endl;
       cout<<"Sum of Array 2: "<<sum2<<endl;
       cout<<"Sum of Both Arrays: "<<sum1+sum2<<endl;
    }

    ~Arrays(){
        delete *array1;
        delete *array2;
    }

};
int main(){
    int a[]={25,14,56,74,89,65,49,51,63,78};
    int b[]={12,38,96,53,61,75,23,59,28,53};
    Arrays x(a,b);
    Arrays y(x);
    y.sum();

}