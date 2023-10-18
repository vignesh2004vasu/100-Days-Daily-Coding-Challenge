Problem
Roy wants to change his profile picture on Facebook. Now Facebook has some restriction over the dimension of picture that we can upload.
Minimum dimension of the picture can be L x L, where L is the length of the side of square.
Now Roy has N photos of various dimensions.
Dimension of a photo is denoted as W x H
where W - width of the photo and H - Height of the photo
When any photo is uploaded following events may occur:
[1] If any of the width or height is less than L, user is prompted to upload another one. Print "UPLOAD ANOTHER" in this case.
[2] If width and height, both are large enough and
(a) if the photo is already square then it is accepted. Print "ACCEPTED" in this case.
(b) else user is prompted to crop it. Print "CROP IT" in this case.
Sample Input
180
3
640 480
120 300
180 180
Sample Output
CROP IT
UPLOAD ANOTHER
ACCEPTED

Answer:
#include <iostream>
using namespace std;
int main() {
    int L, N;
    cin >> L; 
    cin >> N; 

    for (int i = 0; i < N; i++) {
        int W, H;
        cin >> W >> H; 

        if (W < L || H < L) {
            cout << "UPLOAD ANOTHER" << endl;
        } else if (W >= L && H >= L) {
            if (W == H) {
                cout << "ACCEPTED" << endl;
            } else {
                cout << "CROP IT" << endl;
            }
        }
    }

    return 0;
}


