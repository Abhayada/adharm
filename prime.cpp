#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter a number:";
    cin>>n;
    if(n==2){
        cout<<"enter number is prime"<<endl;
    }
    else{
        for(int i=2;i<=n/2;i++){
           if(n%i==0){
                count++;
            } 
        }
        if(count==0){
            cout<<"enter no. is prime"<<endl;
        }
        else{
            cout<<"enter no. is not prime"<<endl;
        }
    }
    return 0;
}