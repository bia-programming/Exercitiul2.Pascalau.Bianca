#include <iostream>

using namespace std;
int i,v[100],j,n,aux,selector,b[100],k,ok;

void citire(int n)
{
    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }

}

void afisare(int n)
{
    cout<<"\nelementele vect sunt:";
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
}

void sortare(int n)
{
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }

}
void sortare_insertie(int n)
{
    b[0]=v[0];
    for(i=1;i<n;i++)
    {
        j=i-1;
        while(j>=0 && v[i]<b[j])
            j--;
        for(k=i-1;k>=j+1;k--)
            b[k+1]=b[k];
        b[j+1]=v[i];
    }
    cout<<endl;
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
}

void interschimbare(int n)
{
    do
    {
        ok=0;
        for(i=0;i<n-1;i++)
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                ok=1;
            }
    }while(ok);
}

int main()
{
    do
    {

    cout<<"n=";
    cin>>n;
    cout<<"urm optiuni:\n1.citire \n2.afisare\n3.sortare numere\n4.sortare insertie\n5.interschimbare alegeti o optiune:";
    cin>>selector;
    switch(selector)
    {
        case 1: citire(n);
                break;
        case 2: citire(n);
                afisare(n);
                break;
        case 3: citire(n);
                afisare(n);
                sortare(n);
                afisare(n);
                break;
        case 4: citire(n);
                afisare(n);
                sortare_insertie(n);
                break;
        case 5: citire(n);
                afisare(n);
                interschimbare(n);
                afisare(n);
                break;
        case 0: cout<<"\niesire\n";
                break;
        default:cout<<"ati introdus o val inexistenta";
    }
    }while(selector!=0);
    return 0;
}
