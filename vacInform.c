// 백신 정보 소스 코드

#include "vacInform.h"
#include <stdio.h>

typedef struct vaccines { // 구조체를 새로운 타입인 VAC으로 정의
    char platform[50]; // 플랫폼
    char vacname[50]; // 백신명
    int age; // 연령
    int injectCount; // 접종 횟수
} VAC;

void vacInform() {
    int choice;
    // 백신 정보를 구조체에 저장
    VAC pfizer = {"mRNA", "코미나티주", 12, 2};
    VAC moderna = {"mRNA", "모더나코비드-19백신주", 18, 2};
    VAC janssen = {"바이러스 벡터 백신", "코비드19백신얀센주", 18, 1};

    while(1){
        printf("1. 화이자, 2. 모더나, 3. 얀센 0. 이전\n");
        printf("정보가 궁금한 백신의 번호를 입력해주세요: ");
        scanf("%d", &choice);

        if(choice > 3 || choice <= 0)
            break;

        switch(choice){
            case 1:
                printf("\n**************************\n");
                printf("플랫폼: %s\n", pfizer.platform);
                printf("백신명: %s\n", pfizer.vacname);
                printf("연령: %d세\n", pfizer.age);
                printf("접종 횟수: %d회\n", pfizer.injectCount);
                printf("**************************\n\n");
                break;
            case 2:
                printf("\n**************************\n");
                printf("플랫폼: %s\n", moderna.platform);
                printf("백신명: %s\n", moderna.vacname);
                printf("연령: %d세\n", moderna.age);
                printf("접종 횟수: %d회\n", moderna.injectCount);
                printf("**************************\n\n");
                break;
            case 3:
                printf("\n**************************\n");
                printf("플랫폼: %s\n", janssen.platform);
                printf("백신명: %s\n", janssen.vacname);
                printf("연령: %d세\n", janssen.age);
                printf("접종 횟수: %d회\n", janssen.injectCount);
                printf("**************************\n\n");
                break;
        }
    }
}

