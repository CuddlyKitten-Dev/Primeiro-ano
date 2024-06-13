#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){


int D=0,H=0,M=0,S=0,tecla=0;
do{
    printf("%d : %d : %d : %d\n",D,H,M,S);
    S++;
    if (S > 59){
        S=0;
        M++;
    }
    if (M > 59){
        M=0;
        H++;
    }
        if (H > 23){
        H=0;
        D++;
    }

Sleep(1000);
system("cls");
}while (D != 31);

}
