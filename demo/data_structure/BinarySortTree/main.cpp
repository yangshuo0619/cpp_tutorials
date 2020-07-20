#include"BInarySortTree.h"

int main(void)
{
    int num[] = {5,3,7,2,4,6,8,1};
    Tree tree(num,8);
    std::cout << "inorder: ";
    tree.InOrderTree();//中序遍历
    std::cout << "\n inorder: ";
    tree.InOrderTreeUnRec();//中序遍历，非递归方法
    
    std::cout << "preorder: ";
    tree.PreOrderTree();//先序遍历
    std::cout << "\n preorder: ";
    tree.PreOrderTreeUnRec();//先序遍历，非递归方法
    
    std::cout << "postorder: ";
    tree.PostOrderTree();//后序遍历
    std::cout << "\n preorder: ";
    tree.PostOrderTreeUnRec();//后序遍历，非递归方法

    std::cout << "levelorder: ";
    tree.LevelOrderTree();//层次遍历

    return 0; 
}
