#pragma
template<typename T> class linked_list {
private:
	template<typename T> struct node 
	{
		T data;
		node<T>* next=nullptr;
	};
	node<T> *head=nullptr;
public:
	T getdata() { return head->data; }
	void push(T x)
	{
		node<T>* a = new node<T>();
		a->data = x;
		if (head == nullptr) {
			head = a;
		}
		else {
			node<T>* x = head;
			while (x->next != nullptr) {
				x = x->next;
			}
			x->next = a;
		}
	}
};
