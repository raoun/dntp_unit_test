#include "Literature.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

namespace dntp
{
	namespace myLib
	{
		template <class T>
		struct EqualityPredicate
		{
			EqualityPredicate(const T &compareValue) : m_compareValue(compareValue) {}
			~EqualityPredicate() {}

			bool operator()(const T &value) { return value == m_compareValue; }
			const T &m_compareValue;
		};

		template <class T>
		static void changeVectorValue(std::vector<T>& v, const T &oldValue, const T &newValue)
		{
			std::replace(v.begin(), v.end(), oldValue, newValue);
		}

		void changeStringValue(std::vector<std::string>& v, const std::string &oldValue, const std::string &newValue)
		{
			changeVectorValue(v, oldValue, newValue);
		}

		void changeStringValue(std::vector<std::string>& v, const char *oldValue, const char *newValue)
		{
			changeStringValue(v, std::string(oldValue), std::string (newValue));
		}

		void changeNumValue(std::vector<int>& v, int oldValue, int newValue)
		{
			if (oldValue != newValue)
			{
				changeVectorValue(v, oldValue, newValue);
			}		
		}	
	}
}
