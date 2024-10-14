## Module CPP 05

# Exploration des exceptions 

- Throwing an exception

```c++
#include <stdexcept>
...
try
{
	//Do some stuff here
	if (/* there's an error */)
	{
		throw std::exception();
	}
	else
	{
		//Do some stuff
	}
}
catch (std::exception e)
{
	//Handle the error here
}
```

- Exceptions can be shared between functions
```c++
void test()
{
	//Do some stuff here
	if (/* there's an error */)
	{
		throw std::exception();
	}
	else
	{
		//Do some stuff
	}
}
void test2()
{
	try{
		test();
	}
	catch (std::exception& e) // Possibility to catch by reference
	{
		//Handle the error here
	}
}
```
- Possibility to define an exception

```c++
void test3()
{
	class PEBKACException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Problem exists between keyboard and chair");
			}
	};

	try
	{
		test3();
	}
	catch (PEABKACException& e) // specific catch
	{
		//Handle the fact the user is an idiot 
	}
	catch (std::exception e) // general catch
	{
		//Handle other exceptions 
	}
}
```
# Liens

[Error handling](https://en.cppreference.com/w/cpp/error) \
[Open Classroom](https://openclassrooms.com/fr/courses/7137751-programmez-en-oriente-objet-avec-c/7532931-gerez-des-erreurs-avec-les-exceptions) \
[W3 school](https://www.w3schools.com/cpp/cpp_exceptions.asp)