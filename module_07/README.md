## Module CPP 07

# C Parametric macros

*Resolution of "max" between 2 values from differents type* \
Traditionally, implement one by one :
```C
int	max_int( int x, int y) { return( x>=y ? x : y); }
int	max_float( float x, float y) { return( x>=y ? x : y); }
int	max_char( char x, char y) { return( x>=y ? x : y); }
```
or by parametric macros
```C
#define max( x, y ) (((x)>=(y)) ? (x):(y))
```
! The parametric is a clever way in C to manage this kind of problems, but it can generate side effects (multiple call to a busy function for example) \
We can expand with certains structures like linked lists :
```C
struct	int_list_s		{ int	n   ; struct int_list_s		*next; };
struct	float_list_s	{ float	z   ; struct float_list_s	*next; };
struct	string_list_s	{ char	*str; struct string_list_s	*next; };
```
...and each functions for a list (new, delete, add...)  as to be repeated for each kind of list. \
or the solution to use generic var with void *
```C
struct	list_s	{
	void			*content;
	size_t			size;		// Needed because we don't know the nature of the content 
	struct list_s	*next;
};
```
...But it need to de-reference the content each time \
[A good implementation by Linus Torvald](https://github.com/mkirchner/linked-list-good-taste)
# Templates
```cpp
template< typename T >
T const	&max( T const &x, T const &y) {		// T replace any type and each time the same
	return ( x>=y ? x : y);
}
```
we can instanciate our template with 2 manners:
- Explicit instanciation
- Implicit instanciation
```cpp
int	a = 21;
int	b = 42;

std::cout << max<int>( a, b ) << std::endl;	//Explicit instanciation
std::cout << max( a, b ) << std::endl;		//Implicit instanciation
```
**It's also possible to use templates with classes or structures** \
Here with a linked list :
```cpp
template< typename T >
class	List {					// Here we define a template of class

public:

	List<T>( T const &content){
		// Etc..
	}
	List<T>( List<T> const &list){
		// Etc..
	}
	~List<T>( void ){
		// Etc..
	}
	// Etc...

private:

	T		*_content;
	List<T>	*_next;
};
```
Dans le main :
```cpp
int	main(void){
	List< int >			a( 42 );
	List< float >		b( 3.14f );  
	List< List< int> >	c( a );  
}
```
possibility to integrate several types : `template< typename T, typename U>`

# Default type

*Files for class templates can be stocked with `.tpp` extension \
`vertex.tpp`
```cpp
template< typename T = float > //value by default (float)
class Vertex {

public:

	Vertex(T const &x, T const &y, T const &z ) : _x(x), _y(y), _z(z) {}
	~Vertex( void) {}

	T const	&getX( void ) const	{ return this->_x; }
	T const	&getY( void ) const	{ return this->_y; }
	T const	&getZ( void ) const	{ return this->_z; }
	...
private:
	T const	_x;
	T const	_y;
	T const	_z;

	Vertex( void );				// Default constructor is private so You have to give parameters
};

template< typename T >			// Template of operator overload
std::ostream	&operator<<( std::ostream &o, Vertex< T > const &v) {

	std::cout.precision( 1 );
	o << setiosflags( std::ios::fixed );
	o << "Vertex( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << ")";
	return o;
}
```
Dans le main:
```cpp
#include "Vertex.class.tpp"

int	main( void ){
	Vertex< int >	v1( 12, 23, 34 );
	Vertex<>		v2( 12, 23, 34 );

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return 0;
}
```

## Specialization

```cpp
#include <iostream>
#include <iomanip>

template <typename T, typename U>
class Pair {

public:

    Pair<T, U>(T const & lhs, U const & rhs) : _lhs(lhs), _rhs(rhs) {
        std::cout << "Generic template" << std::endl;
        return;
    }

    ~Pair<T, U>(void) {}

    T const & fst(void) const { return this->_lhs; }
    U const & snd(void) const { return this->_rhs; }

private:

    T const & _lhs;
    U const & _rhs;

    Pair<T, U>(void);

};
```
### partial specialization

```cpp
template <typename U>
class Pair<int, U> {

public:

    Pair<int, U>(int lhs, U const & rhs) : _lhs(lhs), _rhs(rhs) {
        std::cout << "Int partial specialization" << std::endl;
        return;
    }

    ~Pair<int, U>(void) {}
}

    int fst(void) const { return this->_lhs; }
    U const & snd(void) const { return this->_rhs; }

private:

    int _lhs;
    U const & _rhs;

    Pair<int, U>(void);

};
```

### complete specialization

```cpp
template<>
class Pair<bool, bool> {

public:

    Pair<bool, bool>(bool lhs, bool rhs) {
        std::cout << "Bool/bool specialization" << std::endl;
        this->_n = 0;
        this->_n |= static_cast<int>(lhs) << 0;
        this->_n |= static_cast<int>(rhs) << 1;
        return;
    }

    ~Pair<bool, bool>(void) {}

    bool fst(void) const { return (this->_n & 0x01); }
    bool snd(void) const { return (this->_n & 0x02); }

private:

    int _n;

    Pair<bool, bool>(void);

};
```
