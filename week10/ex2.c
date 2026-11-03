#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];
    char ch = 'p';
    int n = 3;

    // str1 길이 구하기
    int len = strlen(str1);
    printf("str1의 길이: %d\n", len);

    // str1 내용을 str3에 복사
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    // str2의 앞 3글자만 str3에 복사
    strncpy(str3, str2, n);
    str3[n] = '\0';   // strncpy 쓸 때는 끝에 널 문자 직접 넣어줘야 안전함
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    // str1이랑 str2 문자열 비교
    printf("str1과 str2 비교: %d\n", strcmp(str1, str2));

    // 앞 3글자만 잘라서 비교
    printf("str1과 str2의 첫 %d 문자 비교: %d\n", n, strncmp(str1, str2, n));

    // str1 뒤에 str2 이어 붙이기
    strcat(str1, str2);
    printf("str2를 str1에 연결: %s\n", str1);

    // str3 뒤에 str1의 앞 3글자 이어 붙이기 (strcat은 인자 3개 안 되니까 strncat 사용)
    strncat(str3, str1, n);
    printf("str1의 첫 %d 문자를 str3에 연결: %s\n", n, str3);
    
    // str1에서 'p' 위치 찾기
    char *ptr_ch = strchr(str1, ch);
    printf("str1에서 %c의 첫 번째 출현: %s\n", ch, ptr_ch);

    // str1 안에서 str2 문자열 찾기
    char *ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫 번째 출현: %s\n", ptr_str ? ptr_str : "찾을 수 없음");
    
    return 0;
}