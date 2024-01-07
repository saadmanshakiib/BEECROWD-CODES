#include<iostream>
using namespace std;
int  main(){
    int t;
    cin>>t;
    int d=0;
     int pa,pb;
     double g1,g2;
     while(t!=0){
        cin>>pa>>pb;
        if(pb>pa){
            cin>>g1>>g2;
            if(g1>g2){
                while(true){
                    double npa = pa+pa*(g1/100);
                     double npb = pb + pb*(g2/100);
                d++;
                if(pa>pb)
                break;
                }
            }
        }
        t--;
        cout<<d<<" anos\n";
     }
}