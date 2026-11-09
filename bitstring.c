#include<stdio.h>
int superset[20],supersetsize=0,
setA[20],setAsize=0,
setB[20],setBsize=0,
bitstringA[20],bitstringB[20];
int bitstringUnion[20], bitstringIntersection[20];
int isbitstringready=0;
int search(int arr[],int size,int element){
   for(int i=0;i<size;i++){
    if(arr[i]==element)
            return i;
   }
   return-1;
}
void getset(int arr[],int size){
  printf("enter set element");
  for(int i=0;i<size;i++){
  scanf("%d",&arr[i]);
   }
  }
void printfset(int arr[],int size){
     printf("{");
     for(int i=0;i<size;i++){
        printf("%d",arr[i]);
        if(i<size-1)
          printf(",");
     }
     printf("}\n");
     }
void printfbitstring(int bitstring[]){
     printf("{");
     for(int i=0;i<supersetsize;i++){
         printf("%d",bitstring[i]);
         if(i< supersetsize -1)printf(",");
         }
         printf("}\n");
     }
void generatebitstring(int set[],int size,int bitstring[]){
    for(int i=0;i<supersetsize;i++){
        if(search(set,size,superset[i])!=-1)
            bitstring[i]=1;
        else
            bitstring[i]=0;
    }
}

void generate(){
     generatebitstring(setA,setAsize,bitstringA);
     generatebitstring(setB,setBsize,bitstringB);
     printf("\n set A bit string:");
     printfbitstring(bitstringA);
     printf("set B bit string:");
     printfbitstring(bitstringB);
     isbitstringready=1;
  }
void setunion(){
          for(int i=0;i<supersetsize;i++){
              bitstringUnion[i]=bitstringA[i]|bitstringB[i];
          }
     }
void setintersection(){
           for(int i=0;i<supersetsize;i++){
                bitstringIntersection[i]=bitstringA[i]&bitstringB[i];
                }
     }
void printresultasset(int bitstring[]){
     printf("{");
     int first=1;
     for(int i=0;i<supersetsize;i++){
       if(bitstring[i]==1){
          if(!first)
            printf(",");
         printf("%d",superset[i]);
         first=0;
       }
     }
      printf("}\n");
      }
int main(){
    printf("set operation using bit string: union and intersection \n");
    printf("enter super set size:");
    scanf("%d",&supersetsize);
    getset(superset,supersetsize);
    printf("enter set A size:");
    scanf("%d",&setAsize);
    getset(setA,setAsize);
    printf("enter set B size:");
    scanf("%d",& setBsize);
    getset(setB,setBsize);
    generate();
    if(isbitstringready){
       printf("\n set union:");
       setunion();
       printfbitstring(bitstringUnion);
       printf("print union as set:");
       printresultasset(bitstringUnion);
       printf("\n set intersection:");
       setintersection();
       printfbitstring(bitstringIntersection);
       printf("print intersection as set:");
       printresultasset(bitstringIntersection);
       }else{
             printf("\n bit string not generated!");
       }
       return 0;
       }
             
     
     
     
     
