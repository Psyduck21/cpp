#include<iostream>
#include<vector>
using namespace std;


// Array is a collection of similar data types and have fixed size. cannot be changed during runtime.
int main(){
    // declaration of array
    // data_type array_name[size];
    // double arr1[5]; array of size 5 of double type
    // float  arr2[5]; array of size 5 of float typ
    // int arr[5] {0,1,2,3,4};  array of size 5  of integer type

    //vectors
    // vectors are dynamic arrays. they can change their size during runtime.
    // vector<data_type> vector_name;
    // vector<int> vec1; vector of integer type
    // vector<float> vec2; vector of float type
    // vector<double> vec3; vector of double type
    // vector<char> vec4; vector of char type

    // vector<int> vec1 {1,2,3,4,5}; vector of integer type with size 5
    // vector<int> vec2(5); vector of integer type with size 5
    // vector<int> vec3(5, 10); vector of integer type with size 5 and all elements are 10
    // vector<int> vec4(vec1); vector of integer type with size same as vec1 and all elements are same as vec1


    //vector faction
    // vec1.push_back(10); add 10 at the end of vector
    // vec1.pop_back(); remove last element of vector
    // vec1.size(); return size of vector
    // vec1.empty(); return true if vector is empty else false
    // vec1.clear(); remove all elements of vector
    // vec1.front(); return first element of vector
    // vec1.back(); return last element of vector
    // vec1.at(index); return element at index of vector
    // vec1.insert(vec1.begin()+index, value); insert value at index of vector
    // vec1.erase(vec1.begin()+index); remove element at index of vector
    // vec1.erase(vec1.begin()+start, vec1.begin()+end); remove elements from start to end of vector
    // vec1.resize(size); change size of vector to size
    // vec1.swap(vec2); swap elements of vec1 and vec2
    // vec1.assign(vec2.begin(), vec2.end()); assign elements of vec2 to vec1
    // vec1.assign(size, value); assign size elements of value to vec1
    // vec1.assign(vec2); assign elements of vec2 to vec1
    // vec1.assign({1,2,3,4,5}); assign elements of vector to vec1
    // vec1 = vec2; assign elements of vec2 to vec1
    // vec1 = {1,2,3,4,5}; assign elements of vector to vec1
    // vec1 = vector<int> (5, 10); assign vector of size 5 and all elements are 10 to vec1
    // vec1 = vector<int> (vec2); assign vector of size same as vec2 and all elements are same as vec2 to vec1
    // vec1 = vector<int> (vec2.begin(), vec2.end()); assign vector of elements from vec2.begin() to vec2.end() to vec1
    // vec1 = vector<int> (vec2.begin()+start, vec2.begin()+end); assign vector of elements from vec2.begin()+start to vec2.begin()+end to vec1
    // vec1 = vector<int> (vec2.begin(), vec2.begin()+size); assign vector of elements from vec2.begin() to vec2.begin()+size to vec1

    // 2_d vector
    int n;
    int k;
    cin>>n;
    vector<vector<int>> arrays(n); // 2D vector of size n x n
    for (int i = 0; i < n; i++) {
    cin >> k;
    arrays[i].resize(k);
    for (int j = 0; j < k; j++) {
        cin >> arrays[i][j];
    }
}
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cout<<arrays[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
