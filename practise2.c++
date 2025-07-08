#include<iostream>
#include<cmath>
using namespace std;

void isPrime(int n){
   
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<n<<" is not a Prime number"<<endl;
            return;
        }

    }
 
        cout<<n<<" Is a Prime number"<<endl;
}

int main(){

    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    isPrime(n);
    return 0;
}