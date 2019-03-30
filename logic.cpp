#include "logic.h"

Logic::Logic()
{

}

int Logic::getBit(int a, int k){
    return (a >> k) & 1;
}

int Logic::setResetBit(int a, int k){
    return a ^ (1 << k);
}
int Logic::setBit(int k, int bit, int number){
    return bit? (number|(1 << k)) : (number&~(1 << k));
//    int tmp = a &~(1 << k);
//    return tmp | (1 << k);
}
int Logic::glueKandKbits(int a, int len, int k){
    int result=0;
    for (int i=0; i<k; i++){
        int bit = getBit(a, i);
        result = setBit(i, bit, result);
        //010100100
        bit = getBit(a, len-i-1);
        result=setBit(k+k-i-1, bit, result);
    }
    return result;
}
int Logic::getBitsBetween(int a, int len, int k){
    int result=0;
    for (int i=k; i<len-k; i++){
        int bit = getBit(a, i);
        result = setBit(i-k, bit, result);

    }
    return result;
}

int Logic::swapBytes(int a, int byte1, int byte2){
    int result = a;
    for (int i=0; i<8; i++){
        int numBit1=8*byte1+i;
        int numBit2=8*byte2+i;
        int bit = getBit(a, numBit1);
        result=setBit(numBit2, bit, result);

        bit = getBit(a, numBit2);
        result=setBit(numBit1, bit, result);
    }
    return result;
}
