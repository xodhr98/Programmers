# programmers, 코딩테스트 연습(C++)

### Level 1
* 체육복 풀이
  * list를 만들어서 체육복의 유무를 0과 2로 설정한다.
  * 리스트 size 만큼 반복하여 맨 처음 사람이 아니고 앞사람이 체육복이 없다면(==0)
    * 자신이 체육복이 있을 경우(==2) 자기 자신은 리스트에서 -1 해주고 앞사람에게는 +1을 해준다.
  * 반대로 맨 뒷사람이 아니고 뒷 사람이 체육복이 없다면 위와 같이 해준다.
* 이상한 문자 만들기
  * 주의해야 할 점은 문자열 전체의 인덱스가 아닌 단어(공백을 기준) 별로 인덱스를 판단하는 것이었다.
  * count 변수를 사용하여 공백을 기준으로 단어별로 짝/홀수를 판단할 수 있도록 하였다.
  * result 변수는 한 문자씩 구분하기 위해 사용되었다.
  * 조건에 % 연산자를 사용하여 2로 나누었을 때 나머지가 0이 나오는 형태를 짝수로 생각하여 그 경우 toupper()를 사용하여 대문자로 변환하였다. 반대로 홀수일 경우는 tolower()를 사용하여 소문자로 변환하였다.
  
* 시저 암호 풀이
  * 제한 조건에 존재하는 s와 n의 범위를 설정 주었다.
  * 입력받은 문자열에서 한 문자씩 n만큼 이동해야하기 때문에 at()을 활용하여 한 문자씩 구분하였고 입력받은 문자열의 길이(length())만큼 반복하도록 for문을 설정하였다.
  * 아스키코드를 보면 Z나 z에서 숫자를 더해주면 특수문자로 이동하게 된다. 알파벳에서만 순환할 수 있도록 첫 번째 알파벳을 설정하여 (result+n-start)%26만큼 더해지도록 하였다.
  * 대문자와 소문자를 구분할 때 처음에는 if문을 사용하여 각각 순환하는 코드를 넣어주었지만, 코드를 간략하게 하기 위해 삼항 연산자를 사용하였다.
    * 삼항 연산자: (조건)?  (true) : (false시)
