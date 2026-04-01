#ifndef node_h
#define node_h
class NODE{
     int data;
    NODE *next;
public:
    NODE(int);
    ~NODE();
    void set_next(NODE*);
    NODE* get_next();
    int get_value();
};
typedef NODE* NodePtr;


NODE::NODE(int x){
    data=x;
    next=NULL;
   
}
NODE* NODE::get_next(){
    return next;

}

int NODE::get_value(){
    return data;

}


void NODE::set_next(NODE *t){
     next=t;

}
NODE::~NODE(){
     cout<<" "<<data<<endl;

}






#endif
