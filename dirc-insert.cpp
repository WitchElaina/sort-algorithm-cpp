#include<iostream>
#include <vector>
using namespace std;

void get_input(int &num, int* &ret) {
    cin>>num;
    ret = new int[num];
    for (int i=0; i<num; i++) {
        cin>>ret[i];
    }
}
 
void dir_ins_sort(int num, int* m_arr) {
    int i,j,flag;
    vector<int> ret;
    for(i=0; i<num; i++) {
        flag = 0;
        ret.push_back(m_arr[i]);
        // sort i
        for(j=0; j<=i; j++) {
            if(ret[j]>m_arr[i]) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            for(int k=i; k>j; k--) {
                ret[k] = ret[k-1];
            }
            ret[j] = m_arr[i];
        }
        // print 
        cout<<i<<"times: ";
        for(int cur=0;cur<ret.size();cur++) {
            cout<<ret[cur]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int num;
    int* ret = NULL;
    get_input(num, ret);
    dir_ins_sort(num, ret);
}

