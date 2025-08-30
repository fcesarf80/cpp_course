/*#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>aula;
    int tam;
    aula.push_front(9);     aula.push_front(0);
    aula.push_front(5);     aula.push_front(3);
    aula.push_front(7);     aula.push_front(2);
    aula.push_front(8);     aula.push_front(1);
    aula.push_front(4);     aula.push_front(6);
    tam=aula.size();
    cout<<"Tamanho da lista: "<<tam<<endl;
    aula.sort();
    cout<<"Lista ordenada: "<<endl;
    for(int i=0; i<tam; i++){
        cout<<aula.front()<<endl;
        aula.pop_front();    }
    return 0;
}*/
/*#include<iostream>
#include<list>
using namespace std;
int main(){ list<int> num={10,20,30,40,50};
list<int>::iterator it; //<-Create iterator
it = num.begin();               //points to the
cout<<"\n["<<*it<<"]"<<endl;  //first position
it = num.end();               //he points to the
--it;
cout<<"\n["<<*it<<"]"<<endl; // last position
for (it=num.begin(); it!=num.end();it++){
    cout<<"["<<*it<<"] ";               }
    advance(it, 3);
    cout<<*it<<endl<<*next(it, 1)<<endl;
    cout<<*it<<endl<<*prev(it, 1)<<endl<<*it<<endl;
return 0;
}*/