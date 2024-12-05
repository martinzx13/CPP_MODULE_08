#include "MutantStack.hpp"
#include <deque>
#include <iterator>

// _____________________ Constructors

template <typename Tp, typename Container>

MutantStack<Tp, Container>::MutantStack() {
}

template <typename Tp, typename Container>
MutantStack<Tp, Container>::MutantStack(const MutantStack &_src) {
  *this = _src;
}

// ____________________ Destructor

template <typename Tp, typename Container>
MutantStack<Tp, Container>::~MutantStack() {
}

// _____________________ Overload Operator.
template <typename Tp, typename Container>
MutantStack<Tp, Container> &MutantStack<Tp, Container>::operator=(const MutantStack &_src) {
  if (this != &_src)
    this->c = _src.c;
  return *this;
}

// _____________________ Iterators

// _______ Non const Iterators.
template <typename Tp, typename Container>
typename MutantStack<Tp, Container>::iterator
MutantStack<Tp, Container>::begin() {
  return (this->c.begin());
}
template <typename Tp, typename Container>
typename MutantStack<Tp, Container>::iterator
MutantStack<Tp, Container>::end() {
  return (this->c.end());
}

template <typename Tp, typename Container>
typename MutantStack<Tp, Container>::reverse_iterator
MutantStack<Tp, Container>::beginReverse() {
  return (this->c.rbegin());
}

template <typename Tp, typename Container>
typename MutantStack<Tp, Container>::reverse_iterator
MutantStack<Tp, Container>::endReverse() {
  return (this->c.rend());
}

// ________ Const Iterators.

template <typename Tp, typename Container>
typename MutantStack<Tp, Container>::const_iterator
MutantStack<Tp, Container>::begin() const {
  return (this->c.begin());
}

template <typename Tp, typename Container>
typename MutantStack<Tp, Container>::const_iterator
MutantStack<Tp, Container>::end() const {
  return (this->c.end());
}

template <typename Tp, typename Container>
typename MutantStack<Tp, Container>::const_reverse_iterator
MutantStack<Tp, Container>::beginReverse() const {
  return (this->c.rbegin());
}

template <typename Tp, typename Container>
typename MutantStack<Tp, Container>::const_reverse_iterator
MutantStack<Tp, Container>::endReverse() const {
  return (this->c.rend());
}