#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
	#endif
 
	int t = 1; // Initialize the number of test cases
	cin >> t; // Read the number of test cases
 
	while (t--) { // Loop through each test case
		int n, k;
		cin >> n >> k; // Read the number of quests and the maximum number of quests Monocarp can complete
 
		vector<int> a(n), b(n); // Vectors to store experience points for first and subsequent completions
 
		// Read the experience points for the first completion of each quest
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
 
		// Read the experience points for subsequent completions of each quest
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
 
		int maxi = 0; // Variable to store the maximum experience points for subsequent completions
		int sum = 0; // Variable to store the cumulative experience points
		int ans = 0; // Variable to store the maximum possible total experience
 
		// Calculate the maximum possible total experience
		for (int i = 0; i < min(n, k); i++) {
			sum += a[i]; // Add the experience points for the first completion
			maxi = max(maxi, b[i]); // Update the maximum experience points for subsequent completions
			ans = max(ans, sum + (k - (i + 1)) * maxi); // Calculate the maximum possible total experience
		}
 
		cout << ans << endl; // Output the result for the current test case
	}
 
	// Time Complexity (TC): O(n)
	// Space Complexity (SC): O(n)
}