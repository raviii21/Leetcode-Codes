// Link: https://leetcode.com/problems/snapshot-array

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: snapshot-array
 *  RUNTIME: 514 ms
 *  MEMORY: 183 MB
 *  DATE: 6-11-2023, 7:11:35 PM
 *
 */

// Solution:

class SnapshotArray {
    unordered_map<int,map<int,int>> snaps;
    int snapId=0;
public:
    SnapshotArray(int length) {
        for(int i=0; i<length; i++){
            map<int,int> m;
            m[0]=0;
            snaps[i]=m;
        }
    }
    
    void set(int index, int val) {
        snaps[index][snapId]=val;
    }
    
    int snap() {
        return snapId++;
    }
    
    int get(int index, int snap_id) {
        auto it = snaps[index].upper_bound(snap_id);
        it--;
        return it->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
