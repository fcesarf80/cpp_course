#include<iostream>
#include<ctime>
using namespace std;
int numeros_primos(int n) {
    int contador = 0;
    for (int i =2; i<= n; i++) {
        bool primo = true;
        for(int j = 2; j * j <=i; j++) {
            if ( i % j == 0 ) {
                primo = false;
                break;
            }
        }
        if (primo) {
            contador++;
        }
    }
    return contador;
}
int main(){
    int primos;
    //Função clock()
    clock_t t1, t2, t3;
    t1=clock();
    primos=numeros_primos(99999999);
    t2=clock();
    t3=difftime(t2,t1);
    cout<<"Quantidade de números primos: "<<primos<<endl;
    cout<<"tempo de função: "<<((float)t3)/CLOCKS_PER_SEC<<endl;
    return 0;

}
//função para contar números primos
/*#include<list>
#include<iostream>
using namespace std;
int main(){   string txt="Tecnising-Curso de C++";
    string::iterator it;
    it=txt.begin();
    cout<<*it<<endl;
    it=txt.end()-1;
    cout<<*it<<endl;
    cout<<"Tamanho da string = "<<txt.size()<<"|"<<txt.length()<<endl;
    cout<<"Tamanho maximo = "<<txt.max_size()<<endl;
    //txt.clear();
    if(txt.empty()){ cout<<"String vazia"<<endl;  }
    else { cout<<txt<<endl;     }
        return 0;
}*/
/*#include<list>
#include<iostream>
using namespace std;
int main(){
    list<string>names;
    list<string>:: iterator it;
    string name, pesq;      //read the names
    cout<<"enter the names (type end to finish)"<<endl;
    do{ cout<<"Nome?";
        cin>>name;
        names.push_back(name);
    } while (name!="fim");  //Sort the list
    names.sort();           //print ordered names
    for(it=names.begin(); it!=names.end(); it++){
        cout<<*it<<endl; } //search name in list
    cout<<"Pesquisar nome na lista? ";
    cin>>pesq;
    it=find(names.begin(), names.end(), pesq );
    if(it!=names.end()){
        cout<<"O nome "<<pesq<< "esta na lista!"<<endl;
    } else { cout<<"O nome "<<pesq<<" Não esta na lista "<<endl;}
    return 0;
} */
/*#include<list>
#include<iostream>
using namespace std;
struct Person{
    string name;
    int age; };
void LerPerson(list<Person> &person, int quant){
    for(int i=0; i<quant; i++){
        Person p;
        cout<<"Digite o nome da pessoa "<<i+1<<": ";
        getline(cin, p.name);
        cout<<"Digite a idade da pessoa " <<i+1<<": ";
        cin>>p.age;
        cin.ignore(); //clear buffer
        person.push_back(p);
    }
}
void imprimirPerson(list<Person> &person){
    cout<< "\nLista de Pessoas:\n\n";
    list<Person>::iterator it;
    for(it=person.begin(); it!=person.end(); it++){
        cout<<"Nome: "<<it->name<<", idade: "<<it->age<<endl;
    } 
}
int main(){
    list<Person> person;
    int tam=3;
    LerPerson(person, tam);
    imprimirPerson(person);
}*/
/*#include<list>
#include<iostream>
using namespace std;
int main(){ list <int> num;
    list <int>::iterator it; int valor;
//inserir numeros pelo utilizador
    cout<<"\nInsira 10 digitos inteiros:\n\n";
    for(int i=0; i<10; i++){ cout<<"Valor? ";
        cin>>valor;
        num.push_front(valor);   }
    //imprimir lista original
    cout<<"\nLista original:\n";
    for(it=num.begin(); it!=num.end();it++){
        cout<<*it<<" ";
        it=num.erase(it);    }
    //remover numeros impares
    for(it=num.begin(); it!=num.end();it++){
        if(*it%2!=0){ num.erase(it);
         } else{ it++;}    }
    //imprimir listas sem números
    cout<<"\nLista sem números impares:\n\n";
    for(it=num.begin(); it!=num.end();it++){
        cout<<*it<< " "; }
        return 0;
}*/
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