Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher shifts each letter by a number of letters. If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

Original alphabet:      abcdefghijklmnopqrstuvwxyz
Alphabet rotated +3:    defghijklmnopqrstuvwxyzabc

Sample Input

11
middle-Outz
2
Sample Output:

okffng-Qwvb

Answer:

string caesarCipher(string s, int k) {
    
        for (char& c : s) {
        if (isalpha(c)) {
            char base = (islower(c)) ? 'a' : 'A'; //to check if the charccter is lower or upper case and set the base
            c = base + (c - base + k) % 26;
        }
    }

    return s;

}
