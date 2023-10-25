#include <iostream>

using namespace std;

int getSize(double *);

int main() {
    double nums[20];
    cout << "The size of nums: " << sizeof(nums) << " bytes" << endl;

    // With using pointer
    cout << "The number of bytes returned by getSize function is: " << getSize(nums) << endl;

    int b[] ={ 10, 20 ,30 ,40};
    int * bPtr = b;

    for(size_t i = 0;i<4;i++)
    {
        cout<<"b["<<b[i]<<"]"<<endl;
    }
}

int getSize(double *nums) {
    return sizeof(nums);
}
