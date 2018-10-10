#ifndef __NOB_DECODE_H_
#define __NOB_DECODE_H_
#include "object.h"

class nob_decode: public nob_object
{
public:
	nob_decode(std::string in):
		nob_object(in)
	{}

	~nob_decode()
	{}

	void execute();
private:

};

#endif //__NOB_DECODE_H_