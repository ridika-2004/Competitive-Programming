#include<iostream>
#include<cmath>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
#include<iomanip>
#include<set>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<numeric>

#define ll long long
#define mod 1000000007
using namespace std;

class node{
public:

    ll data;
    node* left;
    node* right;

    node(ll d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};



node* insert(node* root, int d)
{
    if(root==NULL)
    {
        root = new node(d);
        return root;
    }
    else if(d>root->data)
    {
        root->right = insert(root->right, d);
    }
    else
    {
        root->left = insert(root->left, d);
    }
    return root;
}

void input(node* &root)
{
    ll data;
    cin>>data;
    while(data!=-1)
    {
        root = insert(root,data);
        cin>>data;
    }
}

bool search(node* root, ll d)
{
    if(root->data ==d)
    {
        return true;
    }

    else if(root->data >d)
    {
        return search(root->left, d);
    }

    else if(root->data <d)
    {
        return search(root->right, d);
    }

    return false;
}

node* mini(node* root)
{
    while(root->left!=NULL)
    {
        root = root->left;
    }
    return root;
}

node* maxi(node* root)
{
    while(root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

node* deletenode(node* root, int d)
{
    if(root->data==d)
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        else if(root->left==NULL)
        {
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            node* temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            node* temp = mini(root->right);
            root->data = temp->data;
            root->right = deletenode(root->right,temp->data);
        }

        return root;
    }
    else if(root->data > d)
    {
        return deletenode(root->left, d);
    }
    else if(root->data <d)
    {
        return deletenode(root->right, d);
    }
    else
    {
        return NULL;
    }
}

void levelordertraverse(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    else
    {
        queue <node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* temp = q.front();
            m(temp->data)
            q.pop();

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

ll countwithinrange(node* root,ll h, ll l)
{
    ll c=0;
    ll sum=0;
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        if(root->data > l)
        {
            sum+=countwithinrange(root->left, h, l);
        }
        if(root->data <=h && root->data >=l)
        {
            c++;
            sum+=(root->data);
        }
        if(root->data <h)
        {
            sum+=countwithinrange(root->right, h, l);
        }
    }

    return sum;
}

int main ()
{
    node* root = NULL;
    p("Enter root:")
    input(root);

    levelordertraverse(root);
    p(countwithinrange(root, 80, 50))
    return 0;
}
