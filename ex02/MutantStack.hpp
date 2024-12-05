#pragma once

#include <deque>
#include <stack>
#include <iostream>

template <typename Tp, typename Container = std::deque<Tp> >
class MutantStack : public std::stack<Tp, Container> {
public:
  // _________________Constructor.
  MutantStack();
  MutantStack(const MutantStack &_src);

  // _________________Destructor.
  ~MutantStack();

  // _________________Overload Operators.
  MutantStack &operator=(const MutantStack &_src);

  // _________________ Iterator definition.

  typedef typename Container::iterator iterator;
  typedef typename Container::const_iterator const_iterator;
  typedef typename Container::reverse_iterator reverse_iterator;
  typedef typename Container::const_reverse_iterator const_reverse_iterator;

  //__________________ Iterator Member functions

  //______ Non const Iterator.
  iterator begin();
  iterator end();

  //______ Const Iterator.
  const_iterator begin() const;
  const_iterator end() const;

  //______ Reverse Non const Iterator.
  reverse_iterator beginReverse();
  reverse_iterator endReverse();

  // _____ Reverse Non Const Iterator.
  const_reverse_iterator beginReverse() const;
  const_reverse_iterator endReverse() const;
};

#include "MutantStack.tpp"
