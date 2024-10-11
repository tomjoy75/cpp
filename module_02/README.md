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
