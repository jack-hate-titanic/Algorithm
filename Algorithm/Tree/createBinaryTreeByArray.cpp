#include <iostream>
using namespace std;

class TreeNode
{
public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int val)
  {
    this->val = val;
  }
};

// c++不能传数组长度，一定要牢记
TreeNode *createBinaryTreeByArray(int arr[], int arrLength, int index)
{
  TreeNode *tn = NULL;
  if (index < arrLength)
  {
    int value = arr[index];
    if (!value)
    {
      return tn;
    }
    tn = new TreeNode(value);
    tn->left = createBinaryTreeByArray(arr, arrLength, 2 * index + 1);
    tn->right = createBinaryTreeByArray(arr, arrLength, 2 * index + 2);
  }
  return tn;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int arrLength = sizeof(arr) / sizeof(arr[0]);
  TreeNode *binaryTree = createBinaryTreeByArray(arr, arrLength, 0);
  cout << binaryTree->left->left->val << endl;
  return 0;
}