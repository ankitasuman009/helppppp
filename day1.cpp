#include<iostream>
#include<bits\stdc++.h>
using namespace std;


int main(){
  int row, col;
  cout<<"enter rwo and col"<<endl;
  cin>>row>>col;
  int arr[row+1][col+1];
  cout<<"enter array eles"<<endl;
  for(int i=0;i<row;i++)
    for(int j=0;j<col;j++){
      cin>>arr[i][j];
    }
    cout<<"matrix is"<<endl;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
      cout<<arr[i][j]<<" ";
    cout<<endl;
  }
  cout<<"column wise arr elements"<<endl;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
      cout<<arr[j][i]<<",";
  }
}
