#ifndef RING_H
#define RING_H

#include <iostream>
#include <initializer_list>

using namespace std;

template<class T>
class ring{
private:
	T *m_values;
	int m_size;
	int m_pos;
public:
	class iterator; //forward declaration

	ring(int size) : m_size(size), m_pos(0) {
		m_values = new T[size];
	};

	//initializer list impl.
	ring(initializer_list<T> objs){
		int size{0};
		m_size = objs.size();
		m_pos = 0;
		m_values = new T[m_size];

		for(auto value : objs){
			m_values[size++] = value;
		};

	}

	~ring(){
		delete[] m_values;
		m_values = NULL;
	}

	void add(T obj){
		m_values[m_pos++] = obj;
		if(m_pos == m_size){
			m_pos = 0;
		}
	}

	T& get(int i){
		return m_values[i];
	}

	int size(){
		return m_size;
	}

	iterator begin(){	
		return iterator(0, *this);
	}

	iterator end(){
		return iterator(m_size, *this);
	}
};


template<class T>
class ring<T>::iterator{
	ring &m_ring;
	int m_pos;

public:
	iterator(int pos, ring &other) : m_pos(pos), m_ring(other){}

	//++postfix
	iterator &operator++(int){
		m_pos++;
		return *this;
	}

	//++prefix
	iterator &operator++(){
		m_pos++;
		return *this;
	}

	bool operator!=(const iterator& other) const{
		return m_pos != other.m_pos;
	}

	T &operator*(){
		return m_ring.get(m_pos);
	}
};

#endif