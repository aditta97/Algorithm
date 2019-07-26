#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <iostream>
#include <cctype>
#include <climits>
#include <map>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <algorithm>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2 * acos(0.0)
using namespace std;

int length;
string HmanCode[100] = {""};

struct dataWord {
        string data;
        int frequency;
};

dataWord D[100];

struct code {
        string letter;
        char cd;
};

code C[100];

bool frqSort(dataWord leftFrq, dataWord rightFrq) {
        return (leftFrq.frequency < rightFrq.frequency);
}

void inputDataWord(string ltr, int frq, int pos) {
        D[pos].data = ltr;
        D[pos].frequency = frq;
}

void HuffManTree() {
        int leftFrq, rightFrq, nodeFrq;
        string leftLtr, rightLtr, nodeLtr;

        leftFrq = D[0].frequency;
        rightFrq = D[1].frequency;
        nodeFrq = leftFrq + rightFrq;

        leftLtr = D[0].data;
        rightLtr = D[1].data;
        nodeLtr = leftLtr + rightLtr;

        for(int i = 0; i<length; i++) {

                string codLtr = C[i].letter;
                if(leftLtr.find(codLtr) != string::npos) {
                        HmanCode[i] += '0';
                }
                else if(rightLtr.find(codLtr) != string::npos) {
                        HmanCode[i] += '1';
                }
        }

        D[0].data = nodeLtr;
        D[0].frequency = nodeFrq;
        D[1].data = "#";
        D[1].frequency = INT_MAX;
}

int main() {
        pf("How many letter you want to enter...?  : ");
        sc("%d", &length);

        string ltr;
        int frq;
        for(int i = 0; i < length; i++) {
                pf("Enter the letter : ");
                cin>>ltr;
                pf("Enter the corresponding frequency : ");
                cin>>frq;

                inputDataWord(ltr,frq,i);
                C[i].letter = ltr;
        }

        pf("\n\n\n#*#*#.........:    HuffMan TREE    :.........#*#*#");

        pf("\n\nLevel:  0:->   ");
        std::sort(D, D+length, frqSort);
        for(int j=0; j<length; j++) {
                cout<<D[j].data<< ":" <<D[j].frequency<<"  ";
        }

        int treeLength = length-1;
        for(int l = 1,k = 0; k < length-1; k++) {
                HuffManTree();
                std::sort(D, D + length,frqSort);
                pf("\n\nLevel:  %d:->   ", l++);
                for(int m = 0; m < treeLength; m++) {
                        cout<<D[m].data<< ":" <<D[m].frequency<<"  ";
                }
                treeLength--;
        }

        pf("\n\n\n........###...:    HUFFMAN-CODE    :...###........\n\n");

        for(int c = 0; c < length; c++) {
                int cdLength;
                cout<<C[c].letter<< ": ";
                cdLength = HmanCode[c].length();
                for(int l = cdLength - 1; l >= 0; l--) {
                        cout<<HmanCode[c][l];
                }
                pf("\n\n");
        }

        return 0;
}
