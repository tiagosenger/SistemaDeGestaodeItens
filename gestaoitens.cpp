#include <iostream>
#include <string> 
#include <vector>

using namespace std;

class ItemSet{

    public:

        int ProcItem(string _item){
            int i = 0;
            for(auto it=itens.begin();
            it!=itens.end();
            it++, i++){
                if(*it == _item){
                    return i;
                }
            }
        }

        vector<string> getItens(){
            return itens;
        }

        void inserir(string _item){
            itens.push_back(_item);
        }
        
        void excluir(string _item){
            int posicao = ProcItem(_item)
            if(posicao> -1){
                itens.at(posicao).erase();
            }else { 
                cout << "Item nao encontrado" << endl;
            }
        }
};

int main(){

    ItemSet conjunto;

    conjunto.inserir("Item A");
    conjunto.inserir("Item B");
    conjunto.inserir("Item C");

    conjunto.print();

    

    }          
}