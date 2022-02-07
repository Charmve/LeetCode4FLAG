struct Node{
    int key;
    int value;
    Node* next;
    Node* pre;
    Node(int key,int value): key(key),value(value),next(nullptr),pre(nullptr){}
};

class LRUCache {
private:

    int size;
    Node* head;
    Node* rear;
    map<int,Node*> mp;

public:

    LRUCache(int capacity) {
        this->size = capacity;
        head=nullptr;
        rear=nullptr;
    }
    
    int get(int key) {
        if(mp.count(key)>0){
            Node* p = mp[key];
            int value = p->value;
            remove(p);
            setHead(p);
            return value;
        }else{
            return -1;
        }
    }
    
    void put(int key, int value) {
        if(mp.count(key)>0){
            Node* p = mp[key];
            p->value = value;
            remove(p);
            setHead(p);
        }else{
            Node* p = new Node(key,value);
            if(mp.size()>=size){
                map<int,Node*>::iterator it = mp.find(rear->key);
                mp.erase(it);
                remove(rear);
            }
            mp[key]=p;
            setHead(p);
        }
    }

    void remove(Node* p){
        if(p==head){
            head = p->next;
            if(head!=nullptr){
                head->pre=nullptr;
            }
        }else if(p==rear){
            rear = p->pre;
            if(rear!=nullptr){
                rear->next=nullptr;
            }
        }else{
            p->pre->next = p->next;
            p->next->pre = p->pre;
        }
    }

    void setHead(Node* p){
        if(head==nullptr || rear==nullptr){
            head=p;
            rear=p;
        }else{
            p->next=head;
            head->pre=p;
            head=p;
        }
    }
};


/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */