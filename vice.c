#include "stdio.h"
#include "defs.h"

int main() {
 
 AllInit ();
 int index = 0; 
 U64 playBitBoard = 0ULL; 

     for (index = 0; index < 64; index++){
       printf("Index:%d\n",index);
       PrintBitBoard (SetMask[index]); 
       printf("\n");
     }

/*U64 playBitBoard = 0ULL; 

playBitBoard |= (1ULL << SQ64(D2)); 
playBitBoard |= (1ULL << SQ64(D3)); 
playBitBoard |= (1ULL << SQ64(D4));

printf("\n");
PrintBitBoard(playBitBoard); 

int count = CNT(playBitBoard); 

printf("Count:%d\n",count); 
printf("\n");

int index = POP(&playBitBoard); 
printf("index:%d\n",index);
PrintBitBoard(playBitBoard); 
count = CNT(playBitBoard); 
printf("Count:%d\n",count); */ 
/*printf("Start:\n\n");
PrintBitBoard(playBitBoard); 
 
playBitBoard |= (1ULL << SQ64(D2));
printf("D2 Added:\n\n");
PrintBitBoard(playBitBoard); 

playBitBoard |= (1ULL << SQ64(G2));
printf("G2 Added:\n\n");
PrintBitBoard(playBitBoard); */ 
 printf("\n");

  return 0; 
}
