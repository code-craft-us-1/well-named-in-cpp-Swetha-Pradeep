#include "colorpair.h"
#include "colorpairformatter.h"
#include <iostream>
namespace TelCoColorCoder {
	void formatPrintColorpair() {
        MajorColor majColor;
        std::cout << "Major color ||Minor Color || PairNumber" << "\n";
        for (MajorColor majorColor = MajorColor::WHITE;majorColor<= MajorColor::VIOLET;majorColor = static_cast<MajorColor>(static_cast<int>(majorColor) + 1)) {
            for (MinorColor minorColor = MinorColor::BLUE; minorColor <= MinorColor::SLATE; minorColor = static_cast<MinorColor>(static_cast<int>(minorColor) + 1)) {
                int pairNumber = TelCoColorCoder::GetPairNumberFromColor((TelCoColorCoder::MajorColor)majorColor, (TelCoColorCoder::MinorColor)minorColor);

                TelCoColorCoder::ColorPair colorpair((TelCoColorCoder::MajorColor)majorColor, (TelCoColorCoder::MinorColor)minorColor);
                std::cout << colorpair.ToString() << " " << pairNumber << "\n";

            }
        }
	}
}