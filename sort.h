#include <iostream>
#include <string>
#include<vector>
using namespace std;


void swaps(vector<int> &d,int x,int y){
    int temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

void swapn(vector<string> &d,int x,int y){
    string temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

void insertionSort(vector<int> &score,vector<string> &name){
	for(int i=1;i<score.size();i++){
		int H=i;
		for(int k=i;k>0;k--){
			if(score[k]>score[k-1]){
				swaps(score,k,k-1);
                swapn(name,k,k-1);
				H=k-1;
			}
		}
	}	
}
