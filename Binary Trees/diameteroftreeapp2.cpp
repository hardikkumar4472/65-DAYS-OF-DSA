#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> nodes) {
    idx++;
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    return currNode;
};

int height(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftht = height(root->left);
    int rightht = height(root->right);
    int currht = max(leftht, rightht) + 1;
    return currht;
}

pair<int,int> diam2(Node* root) {
    if (root==NULL){
        return make_pair(0,0);
    }
    pair<int,int> leftInfo=diam2(root->left);
    pair<int,int> righttInfo=diam2(root->right);
    int currDiam=leftInfo.second+righttInfo.second +1;
    int finalDiam=max(currDiam,max(leftInfo.first,righttInfo.first));
    int finalHt=max(leftInfo.second,righttInfo.second);
    return make_pair(finalDiam,finalHt);
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    idx = -1;
    Node* root = buildTree(nodes);
    cout << diam2(root).first << endl;
    return 0;
}