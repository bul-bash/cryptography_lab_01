#ifndef LOGIC_H
#define LOGIC_H


class Logic
{
public:
    Logic();

    static int getBit(int a, int k);
    static int setResetBit(int a, int k);
    static int setBit(int k, int bit, int number);
    static int glueKandKbits(int a, int len, int k);
    static int getBitsBetween(int a, int len, int k);
    static int swapBytes(int a, int b1, int b2);

};

#endif // LOGIC_H
