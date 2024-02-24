/*Vasiliy likes to rest after a hard work, so you may often meet him in some bar nearby. As all programmers do, he loves the famous drink "Beecola", which can be bought in n different shops in the city. It's known that the price of one bottle in the shop i is equal to xi coins.

Vasiliy plans to buy his favorite drink for q consecutive days. He knows, that on the i-th day he will be able to spent mi coins. Now, for each of the days he want to know in how many different shops he can buy a bottle of "Beecola".*/

#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n, q;
    std::cin >> n;
    std::vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    std::sort(prices.begin(), prices.end());
    std::cin >> q;
    for (int i = 0; i < q; ++i) {
        int mi;
        std::cin >> mi;
        int shops = std::upper_bound(prices.begin(), prices.end(), mi) - prices.begin();
        std::cout << shops << std::endl;
    }
    return 0;
}
