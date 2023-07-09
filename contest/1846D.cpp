#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Participant {
    int index;
    int totalPoints;
    int totalPenalty;
};

bool compareParticipants(const Participant& p1, const Participant& p2) {
    if (p1.totalPoints != p2.totalPoints)
        return p1.totalPoints > p2.totalPoints;
    return p1.totalPenalty < p2.totalPenalty;
}

int calculatePlace(vector<Participant>& participants, int index) {
    sort(participants.begin(), participants.end(), compareParticipants);
    for (int i = 0; i < participants.size(); i++) {
        if (participants[i].index == index)
            return i + 1;
    }
    return -1; // Participant not found
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;

        vector<Participant> participants(n);

        for (int i = 0; i < n; i++) {
            participants[i].index = i + 1;
            participants[i].totalPoints = 0;
            participants[i].totalPenalty = 0;
            for (int j = 0; j < m; j++) {
                int time;
                cin >> time;
                participants[i].totalPenalty += time;
            }
        }

        for (int j = 0; j < m; j++) {
            vector<int> problemTimes(n);
            for (int i = 0; i < n; i++) {
                cin >> problemTimes[i];
            }

            // Sort participants based on problem solving time for the current problem
            sort(participants.begin(), participants.end(), [&](const Participant& p1, const Participant& p2) {
                return problemTimes[p1.index - 1] < problemTimes[p2.index - 1];
            });

            int remainingTime = h - problemTimes[participants[0].index - 1];
            int solvedCount = remainingTime >= 0 ? 1 : 0;

            for (int i = 1; i < n; i++) {
                remainingTime -= problemTimes[participants[i].index - 1];
                if (remainingTime >= 0) {
                    solvedCount++;
                } else {
                    break;
                }
            }

            for (int i = 0; i < solvedCount; i++) {
                participants[i].totalPoints++;
                participants[i].totalPenalty += problemTimes[participants[i].index - 1];
            }
        }

        int rudolfPlace = calculatePlace(participants, 1);
        cout << rudolfPlace << endl;
    }

    return 0;
}
