#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int prices[8];
    for(int i = 0;i<8;i++){
        cin >> prices[i];
    }
    int maxPrice=0;
    for(int i = 0;i<8;i++){
        if(prices[i]>maxPrice)
            maxPrice = prices[i];
    }
    int minPrice = maxPrice;
    for(int i = 0;i<8;i++){
        if(prices[i]<minPrice)
            minPrice = prices[i];
    }
    for(int i = 0;i<8;i++){
        if(prices[i] == maxPrice)
            prices[i] = minPrice;
        break;
    }
    cout<< prices[0];
    for(int i = 1;i<8;i++){
        cout<<"  "<< prices[i];
    }
}