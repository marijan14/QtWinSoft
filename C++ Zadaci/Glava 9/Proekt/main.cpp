#include <iostream>
#include <cstring>

using namespace std;

class Matrica
{
private:
    int matrix[10][10], n, m;
public:
    Matrica() {
        n = 0;
        m = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                matrix[i][j] = 0;
    }
    friend istream& operator >> (istream &in, Matrica &ma) {
        in >> ma.n;
        in >> ma.m;
        for(int i = 0; i < ma.n; i++)
            for(int j = 0; j < ma.m; j++)
                in >> ma.matrix[i][j];
        return in;
    }
    friend ostream& operator << (ostream &out, Matrica &ma) {
        for(int i = 0; i < ma.n; i++) {
            for(int j = 0; j < ma.m; j++)
                out << ma.matrix[i][j] << " ";
            out << endl;
        }
        return out;
    }
    Matrica operator * (const Matrica &ma) {
        Matrica temp;
        temp.n = n;
        temp.m = m;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                temp.matrix[i][j] = matrix[i][j];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++) {
                int suma = 0;
                for(int k = 0; k < n; k++)
                    suma += temp.matrix[i][k] * ma.matrix[k][j];
                temp.matrix[i][j] = suma;
            }
        return temp;
    }
    Matrica& operator * (int broj) {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                matrix[i][j] *= broj;
        return *this;
    }
    Matrica operator + (const Matrica &ma) {
        Matrica temp;
        temp.n = n;
        temp.m = m;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                temp.matrix[i][j] = matrix[i][j];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                temp.matrix[i][j] += ma.matrix[i][j];
        return temp;
    }
    Matrica& operator + (int broj) {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                matrix[i][j] += broj;
        return *this;
    }
    Matrica operator - (const Matrica &ma) {
        Matrica temp;
        temp.n = n;
        temp.m = m;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                temp.matrix[i][j] = matrix[i][j];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                temp.matrix[i][j] -= ma.matrix[i][j];
        return temp;
    }
    Matrica& operator - (int broj) {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                matrix[i][j] -= broj;
        return *this;
    }
};

int main()
{
    Matrica A, B, C;
    cin >> A >> B >> C;
    Matrica D = B * C;
    Matrica R = A - D + 2;
    cout << R * 3;
    return 0;
}
