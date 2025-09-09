#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n ;
    vector<int> v(n) ;
    
    cout << "Enter the element of the vector: " ;
        while (true)
        {
            cin >> n ;
            if (n == 0) break;
            v.push_back (n) ;
        }
        
        for(int num: v){
            cout << "Element : " << num ;
        }

    return 0;
}
//សរសេរកម្មវិធីដែលដំបូងនឹងអានចំនួនគត់ពីអ្នកប្រើប្រាស់ទៅជាវ៉ិចទ័រ
//រហូតទាល់តែអ្នកប្រើប្រាស់ចូល 0។ បន្ទាប់មកយកលេខស្ទួនទាំងអស់នៅក្នុងវ៉ិចទ័រ ហើយបង្ហាញវ៉ិចទ័រ។