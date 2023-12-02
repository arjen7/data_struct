#pragma once;
#include<iostream>
#include<vector>
class graph
{
private:
    std::vector<graph*> child;
    std::vector<int> distange;
    std::string name;
    std::string path;
    int* pathdistange = NULL;
    bool visit = false;
    graph* beforeNode = NULL;
    graph(std::string name);
    void pushchild(graph* node, int distange);
    int* getpathdistange();
    std::string getpath();
    static void shortestpath(graph* root);
    static void dephfirst(graph* root);
public:
    graph() {};
    void execute();
    ~graph();
};