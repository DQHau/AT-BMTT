#include <bits/stdc++.h>
using namespace std;

// Thuật toán Euclide mở rộng tìm phần tử nghịch đảo x = a^-1 mod n
int modInverse(int A, int M)
{
	int m0 = M;
	int y = 0, x = 1;

	if (M == 1)
		return 0;

	while (A > 1) {
		// q is quotient    -- q là thương số
		int q = A / M;
		int t = M;

		// m is remainder now, process same as ---- m bây giờ là phần còn lại, xử lý tương tự như
		// Euclid's algo -- thuật toán Euclid
		M = A % M, A = t;
		t = y;

		// Update y and x
		y = x - q * y;
		x = t;
	}

	// Make x positive ---Làm cho x dương
	if (x < 0)
		x += m0;

	return x;
}

int main()
{
	int a, n; // a^-1 mod n
    cout << "Nhap a, n : ";
    cin >> a >> n;

	// Function call
    //Số nghịch đảo của phép nhân mô đun là
	cout << "Modular multiplicative inverse is "    
		<< modInverse(a, n);
	return 0;
}
