// data struct.cpp: Uygulamanın giriş noktasını tanımlar.
//

#include "data struct.h"
#include"graph/Graph.h"
#include"linked list/Linked_list.h"
using namespace std;

int main()
{
	linked_list<int> a;
	a.push(3);
	a.push(4);
	std::cout << a.getdata();
	return 0;
}
