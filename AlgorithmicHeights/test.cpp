#include <iostream>
#include <random>
#include <memory>
#include <array>
#include <algorithm>
#include <assert.h>

#include "Algorithms/Sortings/Sortings.h"
#include "DataStructures/Lists/List.h"
#include "Algorithms/OrderStatistics/OrderStatistics.h"

using namespace std;


/*
 * TEST_ASSERT_NOT_NULL();
 * TEST_ASSERT_EQUAL_INT();
 * TEST_ASSERT_NULL();
*/


template<typename T>
void fill(T* x, int size){
    default_random_engine generator;
    int R = rand()/1000000;
    uniform_real_distribution<T> UNIFORM_X(-R, R);
    for(int i = 0; i < size; i++){
        x[i] = UNIFORM_X(generator);
    }
}

template<typename T>
void show(T *x, int size){
    for(int i = 0; i < size; i++){
        cout << x[i] << endl;
    }
    cout << endl << endl;
}

void testList(){}

void testDoublyLinkedList(){}

void testBinaryHeap(){}

void testQuickSort(){}

void testMergeSort(){}

void testInsertionSort(){}

void testHeapSort(){}

void test_nth_element(){}

void test_k_greatest(){}

void test_k_lowest(){}


//   array<float, 10> A;

//   fill(A.data(), A.size());
//   QuickSort(A.data(), 9);
//   assert(true == is_sorted(A.begin(),A.end()));

//   fill(A.data(), A.size());
//   MergeSort(A.data(), 0, 9);
//   assert(true == is_sorted(A.begin(),A.end()));

//   fill(A.data(), A.size());
//   HeapSort(A.data(), 9);
//   assert(true == is_sorted(A.begin(), A.end()));

//    fill(A.data(), A.size());
//    InsertionSort(A.data(), 10);
//    assert(true == is_sorted(A.begin(), A.end()));

//   LinkedList<int> list;
//   list.push_back(13);
//   list.push_back(12);
//   list.push_back(11);
//   list.push_back(10);
//   list.push_front(14);
//   list.push_front(15);
//   list.printMe();

//   list.pop_front();
//   list.pop_back();
//   list.printMe();

//   list.push_back(9);
//   list.push_front(16);
//   list.printMe();

//    for(int P = 0; P < 9; P++){
//        array<float, 10> A;
//        fill(A.data(), A.size());
//        auto B = A;
//        auto kth = find_nth_element(A.data(), 0, 9, P);
//        std::nth_element(B.begin(), B.begin()+P, B.end());
//        bool result = false;
//        if(kth == B[P])result = true;
//        cout << result << endl;
//    }
