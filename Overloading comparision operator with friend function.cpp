#include<iostream>
using namespace std;

class person
{
private:
   int weight;
public:
   person(int w = 0)
   {
       weight = w;
   }

   friend bool operator>(person x , person y);
   friend bool operator<(person x , person y);
};
bool operator>(person x , person y)
{
    return x.weight>y.weight;
}

bool operator<(person x , person y)
{
    return x.weight<y.weight;
}
int main()
{
    int w1 , w2;

    cout << "Enter the weight of manu : " << endl;
    cin >> w1;
    cout << "Enter the weight of annu : " << endl;
    cin >> w2;

    person manu(w1);
    person annu(w2);

    if(manu>annu)
    {
        cout << "manu is heavier!!" << endl;
    }
    else if(manu<annu)
    {
        cout << "annu is heavier!!" << endl;
    }
    else
    {
        cout << "Both have same weight!!" << endl;
    }

    return 0;


}