#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);       // 1-based
    vector<int> pos(n + 1);     // 编号 -> 位置

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] != i) {
            // 当前 i 位置上的书编号是 a[i]，它的正确位置应该是 pos[i]（即编号 i 目前所在位置）
            int j = pos[i];       // i 目前在 j 位置
            // 交换 a[i] 和 a[j]
            swap(a[i], a[j]);
            // 更新位置信息
            pos[a[j]] = j;
            pos[a[i]] = i;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
