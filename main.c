#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// void name_average(char name[10], int prov[12]){
//     float avg_prov = 0;
//     for (int i=0; i<13; i++){
//         avg_prov += prov[i];}

    // if (name[0] != toupper(name[0])){
    //     name[0] = toupper(name[0]);}
//   printf("name:%s: %.2f\n", name, avg_prov /13);
  
int main(){
    int prov_1[13], prov_2[13], prov_3[13], prov_4[13], prov_5[13];
    int result_1, result_2, result_5 = 0;
    char person_1[10], person_2[10], person_3[10], person_4[10], person_5[10];
    float results[5];                                               // hitta högsta värdet i results, printa namn på högsta

  scanf("%s", person_1);
      if (person_1[0] != toupper(person_1[0])){
        person_1[0] = toupper(person_1[0]);}
    for (int i = 0; i < 13; i++){
            scanf("%d", &prov_1[i]);
      result_1 += prov_1[i];} results[0] = (float)result_1 / 13;         //create float

    scanf("%s", person_2);
        if (person_2[0] != toupper(person_2[0])){
        person_2[0] = toupper(person_2[0]);}
      for (int i = 0; i < 13; i++){
            scanf("%d", &prov_2[i]);
        result_2 += prov_2[i];} results[1] = (float)result_2 / 13;    
            
            int result_3 = 0;
        scanf("%s", person_3);
          if (person_3[0] != toupper(person_3[0])){
          person_3[0] = toupper(person_3[0]);}
          for (int i = 0; i < 13; i++){
            scanf("%d", &prov_3[i]);
            result_3 += prov_3[i];} results[2] = (float)result_3 / 13;

              int result_4 = 0;
            scanf("%s", person_4);
            if (person_4[0] != toupper(person_4[0])){
              person_4[0] = toupper(person_4[0]);}
              for (int i = 0; i < 13; i++){
                  scanf("%d", &prov_4[i]);
                result_4 += prov_4[i];} results[3] = (float)result_4 / 13;

                scanf("%s", person_5);
                if (person_5[0] != toupper(person_5[0])){
                  person_5[0] = toupper(person_5[0]);}
                  for (int i = 0; i < 13; i++){
                       scanf("%d", &prov_5[i]);
                    result_5 += prov_5[i];} results[4] = (float)result_5 / 13;

    int total = (result_1 + result_2 + result_3 + result_4 + result_5);
    float float_total = (float)total / 65;
           // printf(":%.2f", float_total);

        float test, highest = 0.0;                                              
    test = results[0];                                             
    for(int a=1; a<5; a++){                                              //kolla efter högsta värdet
      if(test < results[a]){                                             
        highest = results[a];                                              
      }
    }
     // printf("\n results = %.2f", highest);
    
    if (highest == results[0]){
        printf("%s", person_1);}
      if (highest == results[1]){
          printf("%s", person_2);}    
        if (highest == results[2]){
            printf("%s", person_3);}
          if (highest == results[3]){
            printf("%s", person_4);}
              if (highest == results[4]){
                printf("%s", person_5);}
    if (float_total > results[0]){
        printf("%s", person_1);}
      if (float_total > results[1]){
        printf("%s", person_2);}
          if (float_total > results[2]){
            printf("%s", person_3);}
              if (float_total > results[3]){
                printf("%s", person_4);}
                  if (float_total > results[4]){
                    printf("%s", person_5);}




// printf("\n1%s: %.2f", person_1, results[0]);
// printf("\n2%s: %.2f", person_2, results[1]);
// printf("\n3%s: %.2f", person_3, results[2]);
// printf("\n4%s: %.2f", person_4, results[3]);
// printf("\n5%s: %.2f", person_5, results[4]);    

    return 0;
    }