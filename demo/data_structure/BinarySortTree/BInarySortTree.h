#ifndef BINARYSORTTREE_H
#define BINARYSORTTREE_H

#include<iostream>
#include<stack/stack.h>

//节点类定义
class Node
{
public:
    int data;//数据
    Node *left;//左子节点
    Node *right;//右子节点
    Node *parent;//父节点
public:
    Node() : data(-1),parent(NULL),left(NULL),right(NULL){}
    Node(int num) : data(num),parent(NULL),left(NULL),right(NULL){}

};

//二叉排序树定义
class Tree
{
public:
    Tree(int num[],int len);//插入num数组的前len个数据
    void insertNode1(int data);//插入节点，非递归方法
    void insertNode(int data);//插入节点，递归方法
    Node *searchNode(int data);//查找节点
    void deleteNode(int data);//删除节点及其子树
    //中序遍历
    void Tree::InOrderTree();//中序遍历，递归方法
    void Tree::InOrderTreeUnRec();//中序遍历，非递归方法
    //先序遍历
    void Tree::PreOrderTree();//先序遍历，递归方法
    void Tree::PreOrderTreeUnRec();//先序遍历，非递归方法
    //后序遍历
    void Tree::PostOrderTree();//后序遍历，递归方法
    void Tree::PostOrderTreeUnRec();//后序遍历，非递归方法
    //层次遍历
    void Tree::LevelOrderTree();

private:
    void insertNode(Node* current,int data);//递归插入方法
    Node *searchNode(Node* current,int data);//递归查找方法
    void deleteNode(Node* current);//递归删除方法

    void Tree::InOrderTree(Node* current);//递归中序遍历
    void Tree::PreOrderTree(Node* current);//递归先序遍历
    void Tree::PostOrderTree(Node* current);//递归后序遍历
private:
    Node* root;//根节点
};

Tree::Tree(int num[],int len)
{
    root = new Node(num[0]);

    for(int i = 1; i < len; i++)
    {
        insertNode1(num[i]);
    }
};

//插入节点
//非递归方法
void Tree::insertNode1(int data)
{
    Node *p,*par;
    Node *newNode = new Node(data);//创建节点

    p = par = root;
    while(p != NULL)//查找插入在哪个节点下面
    {
        par = p;
        if(data > p->data)//如果data 大于 当前节点的data
            p = p->right;//节点右移
        else if(data < p->data)//如果data 小于 当前节点的data
            p = p->left;//节点左移
        else if(data == p->data)//data 和一个节点的data相等，删除掉newnode，因为不能插入重复数据
        {
            delete newNode;
            return;
        }    
    }
    newNode->parent = par;//插入在par的两侧
    if(par->data > newNode->data)//再和par比较
        par->left = newNode;
    else
        par->right = newNode;
}


//递归方法
void Tree::insertNode(int data)
{
    if(root != NULL)
    {
        insertNode(root,data);
    }
}

void Tree::insertNode(Node* current,int data)
{
    if(data < current->data)
    {
        if(current->left == NULL)
        {
            current->left = new Node(data);
            current->left->parent = current;
        }
        else
            insertNode(current->left,data);
    }

    else if(data > current->data)
    {
        if(current->right == NULL)
        {
            current->right = new Node(data);
            current->right->parent = current;
        }
        else
            insertNode(current->right,data);
    }

    return;
};

//查找节点
Node* Tree::searchNode(Node* current,int data)
{
    if(data < current->data)//如果data小于当前节点数据，则递归搜索左子树
    {
        if(current->left == NULL)//不存在左子树，则返回NULL
            return NULL; 
        return searchNode(current->left,data);
    }

    else if(data > current->data)//如果data大于当前节点数据，则递归搜索右子树
    {
        if(current->right == NULL)//不存在右子树，则返回NULL
            return NULL;
        return searchNode(current->right,data);    
    }

    return current;//相等，则返回current
}

 
 //删除数据为data的节点 及其 子树
void Tree::deleteNode(int data)
{      
    Node* current = NULL;
    current = searchNode(data);//先查找到节点
    if(current != NULL)    
    {
        deleteNode(current);//再删除节点
    }
}

void Tree::deleteNode(Node* current)
{
    if(current->left != NULL)
        deleteNode(current->left);//两边子树都删掉
    if(current->right != NULL)
        deleteNode(current->right);//两边子树都删掉

    if(current->parent == NULL)
    {
        delete current;
        root = NULL;
        return;
    }        

    //将current父节点的相应指针置空
    if(current->parent->data > current->data)
        current->parent->left = NULL;
    else 
        current->parent->right = NULL;

    //删除此节点
    delete current;    
}

/*
中序遍历:
遍历左子树，访问根节点，遍历右子树
 */

void Tree::InOrderTree()
{
    if(root == NULL)
        return;
    InOrderTree(root);    
}

//递归算法：
void Tree::InOrderTree(Node* current)
{
    if(current != NULL)
    {
        InOrderTree(current->left);
        std::cout << current->data << " ";
        InOrderTree(current->right);
    }
}

//非递归算法
void Tree::InOrderTreeUnRec()
{
    stack<Node* > s; 
    Node *p = root; 
    while(p!= NULL || !s.empyt())
    {
        while(p != NULL)
        {
            s.push(p);
            p = p->left;
        }

        if(!s.empty())
        {
            p = s.top();
            s.pop();
            std::cout << p->data << " ";
            p = p->right;
        }
    }
}

/*
先序遍历：
访问根节点，遍历左子树，遍历右子树 */

//递归算法
void Tree::PreOrderTree()
{
    if(root == NULL)
        return;
    PreOrderTree(root);    
};

void Tree::PreOrderTree(Node* current)
{
    if(current != NULL)
    {
        std::cout << current->data << " ";
        PreOrderTree(current->left);
        PreOrderTree(current->right);
    }
}


//非递归算法
void Tree::PreOrderTreeUnRec()
{
    stack<Node *> s;
    Node* p = root;
    while(p!= NULL || !s.empty() )
    {
        while(p != NULL)
        {
            std::cout << p->data << " ";
            s.push(p);
            p = p->left;
        }
    

        if(!s.empty())
        {
            p = s.top();
            s.pop();
            p = p->right;
        }
    }
}

/*后序遍历：
遍历左子树，遍历右子树，访问跟节点
 */

void Tree::PostOrderTree()
{
    if(root == NULL)
        return;
    PostOrderTree(root);
}

//递归算法

void Tree::PostOrderTree(Node* current)
{
    if(current != NULL)
    {
        PostOrderTree(current->left);
        PostOrderTree(current->right);
        std::cout << current->data << " ";
    }
}

void Tree::PostOrderTreeUnRec()
{
    stack<Node* > s;
    Node *p = root;

    while(p != NULL || !s.empty())
    {
        while (p != NULL)
        {
            s.push(p);
            p = p->left;
        }

        if(!s.emtpy())
        {
            p = s.top();
            if(p->tag)
            {
                cout << p->data << " ";
                s.pop();
                p = NULL;
            }
            else
            {
                p->tag = 1;
                p = p->right;
            }
        }
    }
    
}

//层次遍历
void Tree::LevelOrderTree()
{
    queue<Node *> q;
    Node *ptr = NULL;

    q.push(root);
    while(!q.empty())
    {
        ptr = q.front();
        q.pop();
        cout << ptr->data << " ";
        {
            q.push(ptr->left);
        }
        if(ptr->right !=  NULL)
        {
            q.push(ptr->right);
        }
    }
}



#endif

