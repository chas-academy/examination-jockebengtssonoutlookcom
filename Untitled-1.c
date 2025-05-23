#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void name_average(char name[10], int prov[12]){
    int avg_prov = 0;
    for (int i=0; i<13; i++){
        avg_prov += prov[i];}

    if (name[0] != toupper(name[0])){
        name[0] = toupper(name[0]);}
  printf("name:%s: %.2f\n", name, avg_prov /13);


int main(){





    return 0;
}