#include <iostream>
using namespace std;
// Iterative C++ program to compute modular power

// Iterative Function to calculate (x^y)%p in O(log y) -- hàm lặp để tính
int power(long long a, unsigned int b, int n)
{
    int f = 1; // Initialize result -- Khởi tạo kết quả

    a = a % n; // Update x if it is more than or equal to p

    if (a == 0)
        return 0; // In case x is divisible by p -- Trường hợp x chia hết cho p

    while (b > 0)
    {
        // If y is odd, multiply x with result -- Nếu y lẻ thì nhân x với kết quả
        if (b & 1)
            f = (f * a) % n;

        // y must be even now
        b = b >> 1; // y = y/2
        a = (a * a) % n;
    }
    return f;
}

int main()
{
    int a, b, n;
    cout << "Nhap a, b, n : ";
    cin >> a >> b >> n;
    cout << "a^b mod n = " << power(a, b, n);
    return 0;
}