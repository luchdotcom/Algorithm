//
// Created by luchdotcom on 24.05.22.
//
#include <iostream>
#include <queue>
#include <vector>
#include "grapfs.h"

int n, v;
bool used[101];
std::queue<int> q;
std::vector<int> a[101];


void bfs()
{
    q.push(v);
    used[v] = true;
    while (!q.empty()) // докато опашката не е празна
    {
        int t = q.front();
        q.pop();
        std::cout << t;
        for (int &i: a[t]) {
            if (!used[i]) /* ако не е обходен */
            {
                q.push(i);
                used[i] = true;
            }
        }
    }
}

bool visit[101];
std::vector<int> g[101];

void dfs(int ver)
{
    std::cout << ver;
    for (int i: g[ver]) {
        if (visit[i] == false) {
            visit[i] = true;
            dfs(i);
        }

    }
}
