 (1)根据二叉树的属性，左子树的data小于父亲结点，右子树的data大于父亲结点，我们可以二叉搜索该树，每次遍历保存父亲结点，直到找到结点p。


void getFather(Node*current, Node *p, Node**result) {
    if(current == nullptr || p == nullptr){
        exit(-1);
    }
    if(current->data == p->data){
        return;
    } else if(p->data > current->data){
        *result = current;
        getFather(current->right,p,result);
    }else{
        *result = current;
        getFather(current->left,p,result);
    }

}

int main(){
    Node* res = nullptr;
    getFather(root,p,&res);
    // res 为所求
}