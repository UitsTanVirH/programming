package linkedlist;

public class v {
    public class node{
        int value;
        node next;
    }
    node root=null;
    public void push(int value){
        if(root==null){
            root=new node();
            root.value=value;
            return;
        }
        node present=root;
        while(present.next!=null){
            present=present.next;
        }
        node newnode=new node();
        newnode.value=value;
        present.next=newnode;
    }
    void print(){
        node present=root;
        while(present!=null){
            System.out.println(present.value);
            present=present.next;
        }
    }
}
