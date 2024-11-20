// Definition of findHigh function goes here
// This function accepts an array as an input argument, searches for the highest value in the array, and returns both the largest value and it's index position in the list
template <typename A, typename B, typename C, typename D>
void findHigh (A fpData [], B size, C & index, D & fpHigh) {
    for (int i = 0; i < size; i++) {
            if (fpData[i] > fpHigh) {
                index = i;
                fpHigh = fpData[i];
            }

        }

    }

