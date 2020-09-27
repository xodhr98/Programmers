#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int count=0;
    for(int i=0;i<s.length();i++){
        int result = s.at(i);
        if (s.at(i)==' ')
            count=0;
        else {
            if (count%2==0){
            result=toupper(result);
            count++;
            }
            else {
            result=tolower(result);
            count++;
            }
        }
        answer += result;
    }
    return answer;
}