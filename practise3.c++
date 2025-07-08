#include<iostream>
#include<cmath>
using namespace std;


void primePrinter(int start,int end){

    
      for(int i = start;i<=end;i++){
        bool isPrime = true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<endl;
        }
      }

}

int main(){

    int start,end;
    cout<<"Enter the Starting Number and Ending Number"<<endl;
    cin>>start>>end;
    primePrinter(start,end);

    return 0;
}