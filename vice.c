#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

int main() {
 
 AllInit ();
 
 int PieceOne = rand(); 
 int PieceTwo = rand(); 
 int PieceThree = rand(); 
 int PieceFour = rand(); 

printf("PieceOne:%X\n",PieceOne);
printf("PieceTwo:%X\n",PieceTwo);
printf("PieceThree:%X\n",PieceThree);
printf("PieceFour:%X\n",PieceFour);

int Key = PieceOne ^ PieceTwo ^ PieceFour; // ^ XOR Bitwise operation ``
int TempKey = PieceTwo; 
TempKey ^= PieceThree; 
TempKey ^= PieceFour;  
TempKey ^= PieceOne; 
  
  printf("Key:%X\n",Key);
printf("TempKey:%X\n",TempKey);

TempKey ^= PieceThree; 
printf("(Three out) TempKey:%X\n", TempKey);

TempKey ^= PieceThree; 
printf("(Three in again) TempKey:%X\n", TempKey);

 /*int index = 0; 
 U64 playBitBoard = 0ULL; 

     for (index = 0; index < 64; index++){
       printf("Index:%d\n",index);
       PrintBitBoard (SetMask[index]); 
       prrootfs-pkgs.txtintf("\n");
     } */ 

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
