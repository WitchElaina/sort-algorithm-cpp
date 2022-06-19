#include<iostream>
using namespace std;
void get_input(int &num, int* &ret) {
    cin>>num;
    ret = new int[num];
    for (int i=0; i<num; i++) {
        cin>>ret[i];
    }
}

void bubble_sort(int num, int* m_arr) {
    for(int i=num;i>0;i--) {
        for(int j=0;j<i-1;j++) {
            if(m_arr[j]>m_arr[j+1]) {
                int temp = m_arr[j];
                m_arr[j] = m_arr[j+1];
                m_arr[j+1] = temp;
            }
        }
        
        // print 
        cout<<num-i+1<<"times: ";
        for(int cur=0;cur<num;cur++) {
            cout<<m_arr[cur]<<" ";
        }
        cout<<endl;

    }
} 

int main() {
    int num;
    int* ret = NULL;
    get_input(num, ret);
    bubble_sort(num, ret);
}
