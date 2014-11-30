#ifndef TIMING_H
#define TIMING_H

#include "types.h"
#include <string>

using namespace std;

/**
 Describes the time signature and tempo.
 */
class Timing
{
public:
	/**
	 Default constructor.
	 */
    Timing();
	/**
	 Copy constructor.
	 */
    Timing(Timing& timing);
	/**
	 Constructs timing with a top number, bottom number, and tempo.
	 */
    Timing(UInt topNumber, UInt bottomNumber, UInt tempo);
	/**
	 Constructs timing with a top number and bottom number.
	 */
    Timing(UInt topNumber, UInt bottomNumber);
	/**
	 Constructs timing with a tempo.
	 */
    Timing(UInt tempo);
    ~Timing();
    
    string description();
    
    bool operator==(const Timing &timing) const;
    bool operator!=(const Timing &timing) const;
	
    void setTopNumber(UInt topNumber);
    void setBottomNumber(UInt bottomNumber);
    void setTempo(UInt tempo);
    
    UInt getTopNumber();
    UInt getBottomNumber();
    UInt getTempo();
    
private:
    UInt m_topNumber;
    UInt m_bottomNumber;
    UInt m_tempo;
};

#endif // TIMING_H