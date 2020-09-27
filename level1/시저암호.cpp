#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    if(n<1|| n>25)
        return 0;
    if(s.length()>8000)
        return 0;
    string answer = "";
    int result;
    for(int i=0;i<s.length();i++){
        result = s.at(i);
        if (result !=' ') {
            char start = (result>='A'&&result<='Z')?'A':'a';
            result = (result+n-start)%26 + start;
        }
        answer += result;
    }
    return answer;
}