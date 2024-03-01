#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void){

	return;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & src){

	*this = src;
	return;
}

template <typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack const & rhs){

	if (this != &rhs)
		this->_stack = rhs._stack;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void){

	return;
}

template <typename T>
bool	MutantStack<T>::empty(void) const{

	return (this->_stack.empty());
}

template <typename T>
unsigned int	MutantStack<T>::size(void) const{

	return (this->_stack.size());
}

template <typename T>
const T&	MutantStack<T>::top(void) const{

	return (this->_stack.top());
}

template <typename T>
void	MutantStack<T>::push(const T& val){

	this->_stack.push(val);
}

template <typename T>
template <typename Arg> void	MutantStack<T>::emplace(Arg & arg)
{
	this->_stack.emplace(arg);
}

template <typename T>
void	MutantStack<T>::pop(void){

	this->_stack.pop();
}

template <typename T>
void	MutantStack<T>::swap(MutantStack& x){

	this->_stack.swap(x);
}

#endif
