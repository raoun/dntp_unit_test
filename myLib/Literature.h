#ifndef DNTP_MYLIB_LITERATURE_H
#define DNTP_MYLIB_LITERATURE_H

#include <vector>
#include <string>

namespace dntp
{
	namespace myLib
	{
		void changeStringValue(std::vector<std::string>& v, const std::string &oldValue, const std::string &newValue);
		void changeNumValue(std::vector<int>& v, int oldValue, int newValue);
	}
}

#endif
