#include <stdio.h>
#include <string.h>
#include <ctype.h>
// char stor_bokstav(char a){
//     char bokstav = a;
//     if (bokstav != toupper(bokstav)){
//          bokstav = toupper(bokstav);}
//          return bokstav;
// }
int main(){
    int j = 0;
    int i = 0;
    int prov[5][13];
    char person[5][11];
    int results[5];
    float result[5];                                               // hitta högsta värdet i results, printa namn på högsta
    int total = 0;


    for (j = 0; j < 5; j++){
        scanf("%9s\0", person[j]);
        for (i = 0; i < 13; i++){
            scanf("%d", &prov[j][i]);
                  results[j] += prov[j][i];
                  total += prov[j][i];}
             //     printf("\nthis is prov %s, result: %d total: %d ", person[j], results[j], total);       
                    result[j] = (float)results[j] / 13;
      }
        float float_total = (float)total / 65;                                // ändra till float
       // printf("\n%.2f", float_total);
        float test = result[0];
    for(int a=1; a<5; a++){                                              //kolla efter högsta värdet
       if(test < result[a]){                                             
         test = result[a];
        }
    }
    // printf("%d", strlen(person[0]));
    //     for(int i = 1; i < strlen(person[0]); i++){
    //         printf("%c", person[0][i]);
        // }
        // if (result[a] < float_total){
        // person[a][10] = need_help[a];}

    // float highest = test;

    // for (int l = 1; l < 10; l++){
    //    printf("%c", person[0][l]);}


// printf("\n%.2f ",result[0]);
// printf("%.2f ", result[1]);
// printf("%.2f ", result[2]);
// printf("%.2f ", result[3]);
// printf("%.2f ", result[4]);
// printf("%.2f", highest);
// printf("%cs", person[0]);
// printf("%s ", person[1]);
// printf("%s ", person[2]);
// printf("%s ", person[3]);
// printf("%s ", person[4]);


// printf("%s", need_help[0][10]);
// printf("%s", need_help[1][10]);
    if (test == result[0]){
        printf("%s\n", person[0]);
    } 
    if (test == result[1]){
        printf("%s\n", person[1]);
    }    
    if (test == result[2]){
        printf("%s\n", person[2]);
    }
    if (test == result[3]){
            printf("%s\n", person[3]);
    }
    if (test == result[4]){
                printf("%s\n", person[4]);
    }

    if (float_total > result[0]){
        printf("%s\n", person[0]);
    }
    if (float_total > result[1]){
        printf("%s\n", person[1]);
    }
    if (float_total > result[2]){
        printf("%c", person[2][0] -32);
        for (int k = 1; k < 5; k++){
            printf("%c", person[2][k]);
        }
    }
    if (float_total > result[3]){
       printf("\n%s\n", person[3]);
    }
    if (float_total > result[4]){
       printf("%s\n", person[4]);
    }

    return 0 ;
}