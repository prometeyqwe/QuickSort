//
//  main.cpp
//  quickSort
//
//  Created by Евгений Киримов on 15.08.2018.
//  Copyright © 2018 Евгений Киримов. All rights reserved.
//

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std:: cin;
using std::endl;

void quickSort(vector <int> & vec1, int ii, int jj);

int main(int argc, const char * argv[]) {
    
    vector <int> vec1;
    int temporarySize;
    
    cout << "Enter to upper limit: ";
    cin >> temporarySize;
    
    for(int i=0; i < temporarySize; i++){
        vec1.push_back(rand()%100);
    }
    
    for(int i=0; i < vec1.size(); i++){
        cout << vec1[i];
        cout << " ";
    }
    cout << endl;
    
    quickSort(vec1, 0, vec1.size()-1);
    
    for(int i=0; i < vec1.size(); i++){
        cout << vec1[i];
        cout << " ";
    }
    cout << endl;
    
    return 0;
}

void quickSort(vector <int> & vec1, int ii, int jj){
    int i=ii;
    int j = jj;
    int p = vec1[(ii+jj)/2];
    
    while(i<=j){
        while(vec1[i]<p){
            i++;
        }
        
        while(vec1[j]>p){
            j--;
        }
        
        if(i<=j){
            int temp = vec1[i];
            vec1[i]=vec1[j];
            vec1[j]=temp;
            i++;
            j--;
        }
    }
    if(j > ii) quickSort(vec1, ii, j);
    if(i < jj) quickSort(vec1, i, jj);
}
