#ifndef NEWSET
#define NETSET

#include <string>

using ItemType = unsigned long;

class Set
{
public:
    Set();        
    Set(const Set &other);
    Set& operator=(const Set& rhs);
    ~Set();
    void dump() const;

    bool empty() const; 
    int size() const;   
    bool insert(const ItemType& value);
    bool erase(const ItemType& value);
    bool contains(const ItemType& value);
    bool get(int i, ItemType& value) const;
    void swap(Set& other);
private:
    struct Node {
        ItemType m_item;
        Node* prevNode;
        Node* nextNode;
    };

    int m_length;
    Node* head;
    Node* tail;
};

void unite(const Set& s1, const Set& s2, Set& result);
void difference(const Set& s1, const Set& s2, Set& result);

#endif
