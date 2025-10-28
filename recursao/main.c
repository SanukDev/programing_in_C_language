//
//  main.c
//  recursao
//
//  Created by samuel rodrigues melo on 04/05/24.
//

int soma(int num){
    int num3 = 1;
    num3 = num + num3;
    if(num3 > 100){
        return 0;
    }
    else{
        return (soma(num));
    }
    
}
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num, res;
    
    printf("digite um numeros");
    scanf("%d",&num);
    res =  soma(num);
    
    printf("%d",res);
    
}
