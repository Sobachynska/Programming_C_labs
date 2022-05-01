int i, j, x;
const int n = 3;
int M[n][n] = {
  {3, 5, 6},
  {4, 5, 6},
  {5, 7, 8}
};

for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
        cout << M[i][j] << " ";
    }
    cout << "\n";
}
int c = 9;
x = 0;
for (i = 0; i < n; j++) {
    if (M[i][n - 1 - i] < c) {
        x = M[i][n - i]//незнаю як записати що елементи перемножаються
    };
    cout << x;
    return 0;

}