#include<assert.h>

namespace bit
{
	template<class T>
	class vector
	{
	public:
		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{}

		~vector()
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}
	private:
		iterator _start;
		iterator _finish;
		iterator _endofstorage;
	};
}