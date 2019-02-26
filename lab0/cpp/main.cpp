#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{

    vector<int> v;
    int n;
    int i = 0;
    ifstream myfile("C:\\Users\\Admin\\Documents\\lab0\\checker.txt");
    for (string a; getline(myfile, a); i++)
    {
        n = atoi(a.c_str());
        v.push_back(n);
        sort(v.begin(), v.end());
        if(n > 0 && n < 32767)
        {
            cout <<"Message "<< v[0] << "-" << v[i];
            int b = 0;
            for(int k = v[0]; k <= v[i]; k++)
            {
                if(find(v.begin(), v.end(),k) == v.end())
                {
                   b++;
                   if(b == 1)
                   {
                     cout<< " not enough packages";
                   }
                     cout<<" " << k;
                }
            }
            if(b == 0)
            {
                cout<< " received in full";
            }
           cout<<endl;
        }
     }

    return 0;
}
