#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {

    int prov[5][13];
    char person[5][10];
    int results[5];
    float result[5];                                               // hitta högsta värdet i results, printa namn på högsta
    int total = 0;
    float test = 0;

    for (int j = 0; j < 5; j++) {
        scanf("%s\0", person[j]);

        if (person[j][0] >= 65 && person[j][0] <= 90) {                     //ASCII tabell
            //do nothing
           
        } else {
            char theLetter = person[j][0];                              // ändra stor bokstav
            char capitalLetter = theLetter - 32;
            person[j][0] = capitalLetter;            
        }
        
        for (int i = 0; i < 13; i++) {                  // calkulera prov
            scanf("%d", &prov[j][i]);
            results[j] += prov[j][i];
            total += prov[j][i];
        }

        //printf("\nthis is prov %s, result: %d total: %d ", person[j], results[j], total);
        result[j] = (float)results[j] / 13;

        if(test < result[j]){                                             
            test = result[j];
        }
    }

    float float_total = (float)total / 65;
    //printf("\n%.2f", float_total);

    for (int k = 0; k < 5; k++){
        if (test == result[k]){
            printf("%s\n", person[k]);
        }
    }

    if (float_total > result[1]){
        printf("%s\n", person[1]);
    }
    if (float_total > result[2]){
        printf("%s\n", person[2]);
    }
    if (float_total > result[3]){
        printf("%s\n", person[3]);
    }
    if (float_total > result[4]){
        printf("%s\n", person[4]);
    }


    return 0;
}