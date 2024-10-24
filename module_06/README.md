## Module CPP 06

# Exploration du casting

### In C

- **Implicit** and **explicit** conversion cast:
```c
int	a = 42

double b = a;			//Implicit cast
double c = (double)a;	//Explicit cast
```
- **Promotion** and **demotion**: \
upgrading or downgrading with hierarchy in types
```c
double	d = a;		//Implicit promotion
int		e = d;		//Implicit demotion -> Hazardeous
int		f = (int)d;	//Explicit demotion
```
Flag for compilation which prevent implicit cast when there's a precision's loss:
`gcc -Wno-conversion`

- **Identity cast** (conversion identitaire) or **reinterpretation**: \
type conversion in which the underlying bit representation of the value remains unchanged, but the type interpretation is altered \
It's also a **type reinterpretation**
```c
float	a	=420.042f;

void	*b	=&a;			//Implicit reinterpretation cast
void	*c	=(void *)&a;	//Explicit reinterpretation cast

void	*d	=&a;			//Implicit promotion -->OK
int		*e	=d;				//Explicit demotion -->Hazardeous!
int		*f	=(int *)d;		//Explicit demotion
```

- **Cast of type qualifiers** \
type qualfiers are words like `const` or `volatile`.\
They are les precise type and higher in hierarchy
```c
int	a = 42

int const	*b = &a;			//Implicit type qualifier cast
int const	*c = (int const)&a;	//Explicit type qualifier cast

int const	*d = &a;			//Implicit promotion
int			*e = d;				//Implicit demotion -> Hell no!
int			*f = (int *)d;		//Explicit demotion -> Possible but not good practice
```
### in C++

- **Upcast and downcast**
There is also a hierarchy between classes
```cpp
Child1	a;
Parent	*b = &a;				//Implicit reinterpretation cast
Parent	*c = (Parent *)&a;		//Explicit reinterpretation cast

Parent	*d = &a;				//Implicit upcast	
Child1	*e = d;					//Implicit downcast -> Hell no!
Child2	*f = (Child2 *)d;		//Explicit downcast -> Possible but big problem (Child1 and Child2 are not the same)
```
C++ propose a series of special casts to resolve this kind of problems
# Cast operations
- ### Implicit cast
- ### Static cast
for simple values : `static_cast<#type>(#value)`
```cpp
int		a = 42;

double	b = a;					//Implicit promotion
int		c = b;					//Implicit demotion -> Hell no!
int		d = static_cast<int>(b);//Explicit demotion -> Possible
```
Applicable in **downcast** and **upcast**
```cpp
Child1	a;

Parent	*b = &a;				// Implicit upcast
Child1	*c = b;					// Implicit downcast -> Hell no!
Child2	*d = static_cast<Child2 *>(b);// Explicit downcast -> Possible

Unrelated	*e = static_cast<Unrelated *>(&a);// Explicit conversion -> No!
```
### <u>**static_cast** allows simple operation, downcasting and upcasting, and prevent from casting unrelated classes.</u>

- ### Dynamic cast
1. done at the runtime (all the other are done at the compilation) 
2. functions with polymorphic instance (at least one member function is virtual)
```cpp
Child1	a;
Parent	*b = &a;				// Implicit upcast

Child1	*c = dynamic_cast<Child1 *>(b); // Explicit downcast
if (c == NULL){					// if the dynamic cast is not possible, it returns NULL
	...
}
else {
	...
}

try{
	Child2	&d = dynamic_cast<Child2 &>(*b); //Explicit downcast (Wrong one)
	...
}
catch ( std::bad_cast &bc){		// A reference can't be NULL... so we use an exception
	...
}
```
- ### Reinterpret cast
most permissive cast
```cpp
float	a = 420.042f

void	*b = &a;						// Implicit promotion
int		*c = reinterpret_cast<int *>(b);// Explicit demotion ...accepted
int		&d = reinterpret_cast<int &>(b);// Explicit demotion ...accepted
```
use-case: retype data from a source
- ### Const cast
for reinterpretation of qualifiers
```cpp
int			a = 42;

int	const	*b = &a;					// Implicit promotion
int			*c = b;						// Implicit demotion -> Hell no!!!
int			*d = const_cast<int *>(b);	// Explicit demotion...accepted
```
<u>You should avoid const_cast</u>
==You should avoid const_cast==
# Cast operators
```cpp
class	Foo{
public:
	Foo(float const v): _v(v) {}

	operator float()	{return (this->_v);}
	operator int()		{return static_cast<int>(this->_v);}
private:
	float	_v;
}
```
# explicit
used to prevent implicit cast from happening
`explicit class MyClass(int value): data(value) {}`
# Resume
| Cast | Conv. | Reint. | Upcast | Downcast | Type qual. | Semantic check | Reliable at run | Tested at run |
|----- | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | 
| Implicit | Yes | | Yes | | | Yes | Yes | |
| static cast | Yes | | Yes | Yes | | Yes | | |
| dynamic cast | | | Yes | Yes | | Yes | Yes | Yes |
| const cast | | | | | Yes |
| reinterpret cast | | Yes | Yes | Yes | Yes |
| ----- | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | 
| legacy C cast | Yes | Yes | Yes | Yes | Yes |
| ----- | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | 
