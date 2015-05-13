#include "List.h"

template<typename T> class LinkedListItem;

template<typename T>
class LinkedList: public List<T> {
public:
	LinkedList();

	void add(T t); //���ƣ�����νconst
	T* get(int index);
	virtual void remove(int index);
	int getSize();
	virtual T* operator[](int index);
	virtual const  T* operator[](int index) const;


	virtual ~LinkedList() {
		LinkedListItem<T> *current = first;
		LinkedListItem<T> *next = current->next;
		while (current != 0) {
			delete current;
			current = next;
			if (next != 0) {
				next = current->next;
			}
		}
	}
private:
	int size; //Ŀǰ�Ĵ�С

	LinkedListItem<T> *first;
	LinkedListItem<T> *last;

	LinkedListItem<T>* getItem(int index) const;
};

template<typename T>
class LinkedListItem {
public:
	LinkedListItem *before;
	LinkedListItem *next;
	T *element; //��ǰԪ��

	LinkedListItem(T t) :
			before(0), next(0) {
		//*element = new T();//new T()����ָ�롣 *element�Ե�ַ�����ã�2�����Ͳ�ͬ��

		element = new T();
		*element = t;

//		element = &t; //�ֲ������ĵ�ַ
	}

	~LinkedListItem() {
		delete element;
	}
};
