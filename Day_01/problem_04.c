int main() {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Special case: if the number is 0, it has 1 digit
    if (n == 0) {
        count = 1;
    } else {
        // Handle negative numbers by making them positive
        if (n < 0) n = -n;
        
        while (n != 0) {
            n /= 10; // Remove the last digit
            count++; // Increment the digit counter
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
