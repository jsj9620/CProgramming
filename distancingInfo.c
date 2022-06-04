// 거리두기 정보 소스 코드

#include <stdio.h>
#include "distancingInfo.h"

void phase1();
void phase2();
void phase3();
void phase4();

void distancingInfo() {
    int choice; // 메뉴 번호
    void (*pf[4])() = {phase1, phase2, phase3, phase4}; // 함수 포인터 배열 사용

    while(1) {
        printf("2020년 2월 29일부터 2021년 10월 31일까지 시행된 사회적 거리두기 정보입니다.\n\n");

        printf("1단계 (지속적 억제상태 유지)\n");
        printf("2단계 (지역 유행)\n");
        printf("3단계 (권역 유행)\n");
        printf("4단계 (대유행)\n");
        printf("종료는 0을 입력해주세요.\n");
        printf("정보가 궁금하신 단계를 입력해주세요: ");
        scanf("%d", &choice);

        if(choice > 4 || choice <= 0)
            break;

        pf[choice-1](); // 메뉴 번호가 1부터 시작하기 때문에 인덱스를 맞추기 위해서 choice - 1
    }

}

void phase1() {
    FILE *fp = NULL; // 파일 포인터 선언
    fp = fopen("phase1.txt", "r"); // 1단계 정보 입력된 파일 열기

    while (1) {
        char buffer[300]; // 문자열 출력을 위한 임시 배열
        char *pStr = fgets(buffer, 300, fp); // 파일에서 문자열 한 줄을 가져와 배열에 넣음
        if (pStr == NULL) // 문자열의 내용이 없을 때 까지 문자열을 한 줄씩 불러옴
            break;
        printf("%s\n", buffer); // 배열에 저장된 문자열 출력
    }
    fclose(fp);
}

void phase2() {
    FILE *fp = NULL; // 파일 포인터 선언
    fp = fopen("phase2.txt", "r"); // 2단계 정보 입력된 파일 열기

    while (1) {
        char buffer[300];
        char *pStr = fgets(buffer, 300, fp);
        if (pStr == NULL)
            break;
        printf("%s\n", buffer);
    }
    fclose(fp);
}

void phase3() {
    FILE *fp = NULL; // 파일 포인터 선언
    fp = fopen("phase3.txt", "r"); // 3단계 정보 입력된 파일 열기

    while (1) {
        char buffer[300];
        char *pStr = fgets(buffer, 300, fp);
        if (pStr == NULL)
            break;
        printf("%s\n", buffer);
    }
    fclose(fp);
}

void phase4() {
    FILE *fp = NULL; // 파일 포인터 선언
    fp = fopen("phase4.txt", "r"); // 4단계 정보 입력된 파일 열기

    while (1) {
        char buffer[300];
        char *pStr = fgets(buffer, 300, fp);
        if (pStr == NULL)
            break;
        printf("%s\n", buffer);
    }
    fclose(fp);
}
