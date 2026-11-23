// CPE 56084 | UVa 10258 | Contest Scoreboard
#include <bits/stdc++.h>

using namespace std;

struct Team {
    int id=0, solved=0, penalty=0;
    array<int,10> wrong{};
    array<bool,10> accepted{};
};
int main() {
    int tests; cin >> tests;
    string line; getline(cin, line);
    getline(cin, line);
    while (tests--) {
        map<int,Team> teams;
        while (getline(cin, line) && !line.empty()) {
            istringstream input(line);
            int id, problem, time; char result;
            if (!(input >> id >> problem >> time >> result)) break;
            Team &team = teams[id];
            team.id = id;
            if (team.accepted[problem]) continue;
            if (result == 'I') ++team.wrong[problem];
            if (result == 'C') {
                team.accepted[problem] = true;
                ++team.solved;
                team.penalty += time + 20*team.wrong[problem];
            }
        }
        vector<Team> standings;
        for (const auto &[id,team] : teams) standings.push_back(team);
        sort(standings.begin(), standings.end(), [](const Team &a, const Team &b) {
            return make_tuple(-a.solved,a.penalty,a.id) < make_tuple(-b.solved,b.penalty,b.id);
        });
        for (const Team &team : standings)
            cout << team.id << ' ' << team.solved << ' ' << team.penalty << '\n';
        if (tests) cout << '\n';
    }
}
