#include<iostream>
using namespace std;


int addFunc(int a, int b){
    int c;
    c = a+b;

    return c;
}

int subFunc(int a, int b){
    int c;
    c = a-b;

    return c;
}

int mulFunc(int a, int b){
    int c;
    c = a*b;

    return c;
}

int divFunc(int a, int b){
    int c;
     if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    c = a/b;

    return c;
}

int main ()
{

  int a,b;


  while(true){
    cout<<endl;

  int option;

    cout<<"-------Operations on Two Numbers-------"<<endl;
    cout<<"Option 1 : Addition"<<endl;
    cout<<"Option 2 : Subtraction"<<endl;
    cout<<"Option 3 : Multiplication"<<endl;
    cout<<"Option 4 : Division"<<endl;
    cout<<"Option 5 : Exit"<<endl;

  cin>>option;

  if(option == 5){
    cout<<"Exiting....Thankyou.."<<endl;
    break;
  }

  cout<<"Enter Two Numbers"<<endl;
cin>>a>>b;

    switch(option){

      case 1:
      cout<<"Sum is "<<addFunc(a,b);
      break;

      case 2:
      cout<<"The Difference is "<<subFunc(a,b);
      break;

      case 3:
      cout<<"The Product is "<<mulFunc(a,b);
      break;

      case 4:
      cout<<"The Result is "<<divFunc(a,b);
      break;

      default:
      cout<<"Enter Correct Option";
      break;


    }



  }


return 0;
    
}