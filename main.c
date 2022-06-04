/* 컴퓨터프로그래밍 평가 과제 코드
 * 컴퓨터공학부 202203176 정승준
 * 코로나19 지역별 누적 확진자 수, 백신 정보, 거리두기 정보 데이터를 배열, 파일에 저장하고 이를 불러오는 코드입니다.
 * 다중 소스 파일을 활용해 각 메뉴 별 코드를 분리시켰습니다.
 */

#include <stdio.h>
#include "confirmedCase.h"
#include "vacInform.h"
#include "distancingInfo.h"

void menu() { // 메뉴 출력
    printf("==========================\n");
    printf("1. 지역별 확진자 수\n");
    printf("2. 백신 정보\n");
    printf("3. 거리두기 정보\n");
    printf("4. 종료\n");
    printf("==========================\n");
}

int main() {
    int choice; // 메뉴 번호
    void (*pf[3])() = {printConfirmedCase, vacInform, distancingInfo}; // 함수 포인터 배열 사용
    /* 0: confirmedCase.c에서 지역명 출력하는 함수 먼저 호출
     * 1: 백신 정보 함수 호출
     * 2: 거리두기 정보 함수 호출
     */

    while (1) {
        menu(); // 메뉴 출력
        printf("메뉴를 선택해주세요: ");
        scanf("%d", &choice); // 선택한 메뉴를 choice 변수에 저장

        if (choice < 1 || choice >= 4) // 종료 메뉴를 선택하거나 입력한 숫자가 범위 밖일경우 종료
            break;

        pf[choice - 1](); // 메뉴 번호가 1부터 시작하기 때문에 인덱스를 맞추기 위해서 choice - 1
    }

}
