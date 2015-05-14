#include "List.h"

template<typename T> class LinkedListItem;

template<typename T>
class LinkedList: public List<T> {
public:
	LinkedList();

	void add(T t); //复制，无所谓const
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
	int size; //目前的大小

	LinkedListItem<T> *first;
	LinkedListItem<T> *last;

	LinkedListItem<T>* getItem(int index) const;
};

template<typename T>
class LinkedListItem {
public:
	LinkedListItem *before;
	LinkedListItem *next;
	T *element; //当前元素

	LinkedListItem(T t) :
			before(0), next(0) {
		//*element = new T();//new T()返回指针。 *element对地址解引用，2者类型不同。

		element = new T();
		*element = t;

//		element = &t; //局部变量的地址
	}

	~LinkedListItem() {
		delete element;
	}
};
