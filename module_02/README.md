## Module CPP 02
# Operator overload

- In the class
```cpp
Integer &  operator=( Integer const & rhs );
Integer    operator+( Integer const & rhs ) const;
```

- Or out of the class
```cpp
std::ostream &  operator<<( std::ostream & o, Integer const & rhs );
```

# Canonical form

- In hpp
```hpp
Sample( void );                        //Constructor
Sample( Sample const & src );          //Copy constructor
~Sample( void );                       //Destructor
Sample &operator( Sample const & rhs ); //Operator overload =
```
- In cpp
```cpp
Sample::Sample( void ) : _foo( 0 ) {
}
Sample::Sample( Sample const & src ){
  *this = src;
}
Sample::~Sample( void ){
}
Sample  &Sample::operator=( Sample const & rhs ){
  if ( this != &rhs )
    this->_foo = rhs,getFoo();

  return (*this);
}
```

