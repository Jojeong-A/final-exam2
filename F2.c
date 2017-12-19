#include <stdio.h>
#define id 10
#define pw 10

struct A{
    int S_Num;
    char S_Name[20];
};
struct B
{ 
    int P_Num;
    char P_Name[20];
};
struct C{
    int SNum;//점포 번호
    int PNum;// 상품 번호 
    int QNum; // 주문 상품 갯수 
};


int main(void){

    int A, A1;
    char id[num][name];
    char pw[num][name];
    int order[30][10];

    int i=0;

    struct A [3] = {(1,A1), (2,B1), (3,C1)};
    struct B [5] = {(1, Bread),(2,IceCream),(3,Snack),(4,Milk),(5,Coffee) };

    
    printf("1. customer \n");
    printf("2. Store Manager\n");
    

    scanf("%d", &A);

    if( A== 1)
    {
        printf("Customer \n");
        printf("1. New\n");
        printf("2. Rog in\n");
        printf("3. Rog out\n");
        scanf("%d", &A1);

        if (A1 == 1){ 
               
            printf("input id\n");
            scanf("%c" id[i]);

            for(int i=0; i< num; ++i)
            {
            if (strcmp id[0]id[i] == 0)
            {
                printf("");
            }
            else {
                printf("input PW \n");
                scanf("%d", &PW[i]);
            }

            }
        }
        
        }
        if(A1 == 2){
            int F;
            int k=0, l=0;

            printf(" 1. order \n");
            printf(" 2. order list \n");
            printf(" 3. break \n");
            if(F == 1){
                printf("choose Store\n");
                printf("=============\n");
                for (int j=0; j< 3; j++) // 점포 출력
                {
                    printf(" %d Number : %c Store \n", struct A[j]);
                }

                for(int k=0; k< num; k++){
                    scanf("%d", ); 
                    printf("%d Number : %c Store \n",order[k][);
                }

            }
            
            }
        if(A1 == 3){

        }

    }
    if (A==2)
    {


    }
}
