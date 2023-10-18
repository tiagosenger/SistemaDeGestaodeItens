#include <iostream>
#include <vector>

using namespace std;

class ItemSet {
    public:
    vector<string> itens;

    void addItem(string _item) {
        int itemExist = searchItem(_item);
         if(itemExist == -1) {
             itens.push_back(_item);
         } else {
            cout << "Este item ja existe na lista" <<endl;
         }
    }

    void deleteItem(string _item) {
        int itemExist = searchItem(_item);
         if(itemExist > -1) {
             itens.erase(itens.begin() + itemExist);
         } else {
             cout << "Este item não existe na lista" << endl;
         }
    }
    int searchItem(string _item){
        for(int i = 0; i < itens.size(); i++){
            if(itens[i] == _item) {
                return i;
            }
        }
        return -1;
    }

    void printItems() {
        for(int i = 0; i < itens.size(); i++){
            cout << itens[i] << " ";
        }
    }

};

int main () {
    ItemSet item;
    item.addItem("Item A");
    item.addItem("Item B");
    item.addItem("Item C"); 
    item.printItems();

    cout << endl;

    item.addItem("Item C");

    item.deleteItem("Item C");

    item.printItems();
    cout << endl;

    return 0;
}