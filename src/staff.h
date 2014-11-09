#ifndef STAFF_H
#define STAFF_H

#include "types.h"
#include <list>
#include <string>

using namespace std;

class Measure;

using namespace std;

class Staff
{
public:
    Staff();
    Staff(Instrument instrument);
    
    ~Staff();

	/**
	 Set the instrument with which this staff should be associated.
	 
	 @param instrument The instrument that this staff is describing.
	 */
    void setInstrument(Instrument instrument);
	/**
	 Add the given measure to the staff.
	 
	 @param newMeasure The measure that should be added to the staff.
	 */
    void addMeasure(Measure newMeasure);
	
    string description();
private:
    Instrument m_instrument;
    list<Measure> m_measures;
};

#endif // STAFF_H