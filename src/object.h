#ifndef __NOB_OBJECT_H_
#define __NOB_OBJECT_H_

#include <string>

class nob_object
{
public:
	nob_object(std::string in):
		in_(in)
	{}
	virtual ~nob_object()
	{}
	virtual void execute();

	const std::string &in(){return in_;}
	std::string &out(){return out_;}
private:
	std::string in_;
	std::string out_;
};

#endif //__NOB_OBJECT_H_