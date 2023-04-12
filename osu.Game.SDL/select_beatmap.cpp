#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 定义谱面结构体
struct Beatmap {
    string name;
    int difficulty;
};

// 选图面板类
class SongSelect {
private:
    vector<Beatmap> beatmaps;  // 存储所有可选谱面的列表

public:
    // 构造函数
    SongSelect() {
        // 添加谱面
        beatmaps.push_back({"Map 1", 1});
        beatmaps.push_back({"Map 2", 2});
        beatmaps.push_back({"Map 3", 3});
    }

    // 显示谱面列表
    void showBeatmaps() {
        cout << "请选择一个谱面：" << endl;
        for (int i = 0; i < beatmaps.size(); i++) {
            cout << i + 1 << ". " << beatmaps[i].name << " (难度等级：" << beatmaps[i].difficulty << ")" << endl;
        }
    }

    // 选择谱面
    Beatmap selectBeatmap(int index) {
        if (index < 1 || index > beatmaps.size()) {
            // 输入不合法
            throw invalid_argument("无效的输入！");
        }
        return beatmaps[index - 1];
    }
};

int main() {
    SongSelect songSelect;

    // 显示谱面列表
    songSelect.showBeatmaps();

    // 获取用户选择的谱面
    int index;
    cin >> index;
    Beatmap selectedBeatmap;
    try {
        selectedBeatmap = songSelect.selectBeatmap(index);
    } catch (invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    // 输出选择的谱面
    cout << "您选择的是：" << selectedBeatmap.name << " (难度等级：" << selectedBeatmap.difficulty << ")" << endl;

    return 0;
}
