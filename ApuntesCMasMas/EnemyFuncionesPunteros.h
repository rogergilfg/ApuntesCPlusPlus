#pragma once
#include <functional>
#include <vector>

using namespace std;

class EnemyFuncionesPunteros
{
public:
    std::vector<std::function<void()>> listeners;
    void AddListener(function<void()> listener);
};
