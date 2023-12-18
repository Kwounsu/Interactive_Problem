#inclue<stdio.h>

#define log(fmt, ...) \
    printf("[%s: %d][%s] " fmt "\t\t\t (%s, %s)\n", \
    __FILE__, __LINE__, __func__, __DATE__, __TIME__);

int main() {
    log("Hello, world")
}

/*
__func__	문자열 (%s)	매크로가 호출된 함수를 출력한다.
__LINE__	정수 (%d)	매크로가 호출된 라인을 출력한다.
__FILE__	문자열 (%s)	매크로가 출력된 파일을 출력한다. (빌드한 위치 기준)
__DATE__	문자열 (%s)	빌드가 이뤄진 날짜를 출력한다.
__TIME__	문자열 (%s)	빌드가 이뤄진 시간을 출력한다.
*/
