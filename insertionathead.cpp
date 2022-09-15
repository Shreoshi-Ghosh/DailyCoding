#include <iostream>
using namespace std;
class insertionathead
{
public:
    int data;
    insertionathead *next;

    insertionathead(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void headinsertion(insertionathead *&head, int data)
{
    insertionathead *temp = new insertionathead(data);
    temp->next = head;
    head = temp;
}
void print(insertionathead *&head)
{
    insertionathead *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    insertionathead *node1 = new insertionathead(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    insertionathead *head = node1;
    headinsertion(head, 50);
    print(head);

    return 0;
}