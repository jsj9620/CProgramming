// 지역별 확진자 수 소스 코드

#include <stdio.h>
#include "confirmedCase.h"

void file() {
    char buffer[300]; // 지역명 임시 저장
    FILE *fp = NULL; // 파일 포인터 fp 선언
    fp = fopen("district.txt", "r"); // 지역명 문자열 입력되어있는 "district.txt" 열기

    fgets(buffer, sizeof(buffer), fp); // buffer 변수에 문자열 저장
    printf("%s\n", buffer);
    fclose(fp);
    // 지역 출력 종료
}

void printConfirmedCase() {
    int district;
    char *confirmed[6][2] = {
            {"서울", "3,626,136"},
            {"경기", "4,935,892"},
            {"인천", "1,074,002"},
            {"대전", "511,531"},
            {"대구", "761,278"},
            {"부산", "1,094,773"}
    };
    while (1) {
        file();
        printf("0. 이전\n");
        printf("지역의 번호를 입력해주세요: ");
        scanf("%d", &district);

        if (district > 6 || district <= 0) // 번호가 6을 초과하거나 0이면 프로그램 중지
            break;

        printf("\n************************************\n");
        printf("%s의 누적 확진자 수는 %s명입니다.\n", confirmed[district - 1][0], confirmed[district - 1][1]);
        printf("************************************\n\n");
    }


}


