#include <iostream>
using namespace std;
class masterpiece{
    string name;
    int age;
    public:
    void setdata(string name , int age);
    void getdata();
};
void masterpiece :: setdata(string namae , int nen){
    name = namae;
    age = nen;
}
void masterpiece :: getdata(){
    cout<<"name is "<<name<<endl;
    cout<<"age is "<<age<<endl;
}
int main(){
    masterpiece cote;
    cote.setdata("ayano" , 18);
    cote.getdata();
    cote.setdata("takuya yagami" , 17);
    cote.getdata();
return 0;
}

#include <iostream>
using namespace std;
class fruits{
    string name1;
    string name2;
    public:
    string name3;
    void setdata(string name1 , string name2);
    void getdata(){
        cout<<"fruits are "<< name1<<" "<<name2<<" "<<name3<<endl;
    }
};
void fruits :: setdata(string namae, string namae1){
    name1 = namae;
    name2 = namae1;
}
int main(){
    fruits tree_wle;
    tree_wle.name3 = "coconut";
    tree_wle.setdata("apple" , "banana");
    tree_wle.getdata();
    
return 0;
}

#include <iostream>
using namespace std;
class school{
        int rank;
        string leader;
    public: 
    void setdata(int rankk , string leaderr){
        rank = rankk;
        leader = leaderr;
    }
    void getdata(){
        cout<<rank<<endl;
        cout<<leader<<endl;
    }
};
int main(){
    school nature;
    nature.setdata(1, "sakayanagi");;
    nature.getdata();
    nature.setdata(2, "ichinose");
    nature.getdata();
    nature.setdata(3, "ryueen");
    nature.getdata();
    nature.setdata(4, "ayanogod");
    nature.getdata();

return 0;
}

#include <iostream>
using namespace std;

class characters {
private:
    string name1;
    string name2;
public:
    void setdata(string namee, string naam) {
        name1 = namee;
        name2 = naam;
    }
    void getdata() {
        cout << "Enter name 1: ";
        cin >> name1;
        cout << "Enter name 2: ";
        cin >> name2;
        cout << "The names are " << name1 << " and " << name2 << endl;
    }
};
int main() {
    characters anime;
    anime.setdata("ayano", "yagami");
    anime.getdata();
    return 0;
}