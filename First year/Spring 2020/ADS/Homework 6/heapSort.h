#include <iostream>
#include <math.h>
#include <algorithm>
#include <fstream>
#include <time.h>
using namespace std;
using namespace std::chrono;

/*
    CH-231-A
    a6 p2.[cpp]
    Justin Morris
    j.morris@jacobs-university.de
*/

// heap class to hold data on heap
class heap{

    private:
        // class's data
        int *ptr;
        int maxLength;
        int heapSize;
        int heapHight;

    public:
        // peremetric constructor
        heap(int arr[], size_t newHeapSize, size_t newMaxLength){
            // dynamically allocate memory
            ptr = new int[newHeapSize];
            // copy over data
            for (int i = 0; i < newHeapSize; i++){
                ptr[i] = arr[i];
            }
            // set data
            maxLength = newMaxLength;
            heapSize = newHeapSize;
            heapHight = round(log2(heapSize));
        }

        // destructor
        ~heap(){
            delete[] ptr;
        }

        // overloaded = to set array values
        heap& operator = (const heap &obj){
            for (int i = 0; i < heapSize; i++){
                ptr[i] = obj.ptr[i];
            }
            return *this; 
        }

        // help from https://www.geeksforgeeks.org/heap-sort/ with heapsort
        void heapify(int *ptr, int n, int i) {
            // get left and right values
            int largest = i;
            int left = getLeftElem(i);
            int right = getRightElem(i);
            
            // test if larger than current largest (index)
            if (left < n && ptr[left] > ptr[largest]){
                largest = left;
            }

            // test if larger than possibly largest found/index
            if (right < n && ptr[right] > ptr[largest]){
                largest = right;
            }

            // swap and recurisvly call heapify
            if (largest != i){
                swap(ptr[i], ptr[largest]);
                heapify(ptr, n, largest);
            }
        }
        
        // main function to do heap sort
        void heapSort(){
            // Build max heap
            for (int i = heapSize / 2 - 1; i >= 0; i--){
                heapify(ptr, heapSize, i);
            }

            // get elements out of the heap
            for (int i = heapSize - 1; i >= 0; i--){
                // move root to end (root at first pos)
                swap(ptr[0], ptr[i]);
                heapify(ptr, i, 0);
            }
        }

        // method to return the parent element
        int getParentElem(int index){
            if(index == 1){
                // -1 being error
                return -1;
            }else{
                return index/2;
            }
        }

        // method to get child element right
        int getRightElem(int index){
            return 2*index+2;
        }

        // method to get child element left
        int getLeftElem(int index){
            return 2*index+1;
        }

        // method to get the length of heap
        int getMaxLength(){
            return maxLength;
        }

        // method to return size of heap
        int getHeapSize(){
            return heapSize;
        }

        // method to write time to file
        void printToFile(int type, int sampleSize, time_point<high_resolution_clock> end, time_point<high_resolution_clock> start){
            
            fstream out;

            // to detect what type of heap
            if(type == 1){
                // open file
                out.open("heapSortData.csv", ios_base::app);
                out << sampleSize << "," << std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count() << endl;
            }else{
                out.open("variantHeapData.csv", ios_base::app);
                out << sampleSize << "," << std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count() << endl;
            }
            // close file
            out.close();
        }

        // method to print heap
        void heapPrint(){
            for (int i = 0; i < heapSize; i++){
                cout << ptr[i] << " ";
            }
            cout << endl;
        }

        // method to set elements in pointer array to random values
        void setElem(){
            srand(time(NULL));
            for (int i = 0; i < heapSize; i++){
                ptr[i] = rand() % 100;
            }
        }
};
