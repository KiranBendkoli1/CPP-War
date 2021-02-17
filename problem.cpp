#include<iostream>
using namespace std;

void fiboser(int arr[],int n){
    int next;
    int t1=0,t2=1;
    for(int i=0;i<n;i++){
        if(i==0){
            arr[i] = t1;
        }
        else if(i==1){ 
            arr[i] = t2;
            continue;
        }
        else{
            next = t1+t2;
            t1 = t2;
            t2 = next;
            arr[i] = next;
        }
    }
    for(int i=0;i<n;i++){
        cout <<arr[i]<<"\t";
    }
    cout <<endl;

}



int main(){
    int n,i;
    cout <<"Enter number: ";
    cin >> n;
    int arr[n];
    fiboser(arr,n);
    for(i=0;i<n;i++){
        arr[i] = (arr[i]*2)/(i+1);
    }
    for(int i=0;i<n;i++){
        cout <<arr[i]<<"\t";
    }
    cout <<endl;
    int num = 0;
    cout <<"Here's the output: \n\n"<<endl;
    while(num < n){
        for(int i=0;i<arr[num];i++)
            cout << "*";
        cout <<endl;
        num++;
    }
    return 0;
}