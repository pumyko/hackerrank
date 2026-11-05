#include<bits/stdc++.h>

using namespace std;

struct Workshops {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    int n;
    Workshops* workshops;
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* ptr = new Available_Workshops;
    ptr->n = n;
    ptr->workshops = new Workshops[n];
    for(int i=0; i<n; i++) {
        ptr->workshops[i].start_time = start_time[i];
        ptr->workshops[i].duration = duration[i];
        ptr->workshops[i].end_time = start_time[i] + duration[i];
    }
    return ptr;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    sort(ptr->workshops, ptr->workshops + ptr->n,
        [](Workshops a, Workshops b) {return a.end_time < b.end_time;});
    int count = 0;
    int last_end_time = 0;
    for(int i=0; i<ptr->n; i++) {
        if(ptr->workshops[i].start_time >= last_end_time) {
            count++;
            last_end_time = ptr->workshops[i].end_time;
        } 
    }
    return count;
}

int main() {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
