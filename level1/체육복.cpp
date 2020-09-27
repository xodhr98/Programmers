#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> arr(n,1);
    int answer = 0;
    for(int i=0; i<lost.size();i++){
        arr[lost[i]-1]--;
    }
    for(int j=0; j<reserve.size();j++){
        arr[reserve[j]-1]++;
    }
    for(int i=0; i<arr.size();i++){
        if(i!=0&&arr[i-1]==0){
            if(arr[i]==2){
                arr[i]--;
                arr[i-1]++;
            }
        }
        if(i!=arr.size()-1&&arr[i+1]==0){
            if(arr[i]==2){
                arr[i]--;
                arr[i+1]++;
            }
        }
    }
    for(int i=0; i<arr.size();i++){
        if(arr[i] !=0)
            answer++;
    }
    return answer;
} 