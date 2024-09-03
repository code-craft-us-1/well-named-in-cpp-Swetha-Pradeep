#include <iostream>
#include <assert.h>
#include "colorpair.h"
using namespace TelCoColorCoder;

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}


void printPair(){
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
             int pairNumber = TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::MajorColor[i], TelCoColorCoder::MinorColor[j]);     
             std::cout<<TelCoColorCoder::MajorColor[i] <<" "<<TelCoColorCoder::MinorColor[j]<<" "<<pairNumber <<"\n";
        }
    }
}
int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    printPair(); 
    return 0;
}
