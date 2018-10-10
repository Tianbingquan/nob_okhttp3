#ifndef __NOB_ENCODE_H_
#define __NOB_ENCODE_H_
#include "object.h"

class nob_encode: public nob_object
{
public:
	nob_encode(std::string in):
		nob_object(in)
	{}

	nob_encode(std::string in, std::string key):
		nob_object(in),
		key_(key)
	{}

	~nob_encode()
	{}

	void execute();

private:
	std::string canonicalize();
	std::string canonicalize(const std::string& s, const std::string& s2, bool b1, bool b2, bool b3, bool b4);
private:
	std::string key_;
};

#endif //__NOB_ENCODE_H_