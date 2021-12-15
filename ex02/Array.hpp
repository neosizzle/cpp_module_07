#ifndef __ARRAY__H__
#define __ARRAY__H__
#include <stdexcept>

template <class T>
class Array
{
	private:
		T *_data;
		unsigned int _size;

	public:
		Array<T>()
		{
			this->_data = new T[0];
			this->_size = 0;
		}
		Array<T>(unsigned int size)
		{
			this->_data = new T[size + 1];
			this->_size = size;
		}
		~Array<T>()
		{
			delete[] this->_data;
		}

		Array<T>(const Array &array)
		{
			unsigned int	i;

			this->_data = new T[array.size()];
			this->_size = array.size();
			i = 0;
			while (i < this->_size)
			{
				this->_data[i] = array._data[i];
				i++;
			}
		}

		Array<T> &operator = (const Array &array)
		{
			unsigned int	i;

			this->_data = new T[array.size()];
			this->_size = array.size();
			i = 0;
			while (i < this->_size)
			{
				this->_data[i] = array._data[i];
				i++;
			}
		}

		T &operator [] (unsigned int i)
		{
			if (i > this->_size)
				throw BufferOverflowException();
			return this->_data[i];
		};

		unsigned int size() const
		{
			return _size;
		}

		class BufferOverflowException : public std::exception
		{

			public:
				virtual const char* what() const throw()
				{
					return "Array access buffer overflow";
				}
		};
};

#endif  //!__ARRAY__H__