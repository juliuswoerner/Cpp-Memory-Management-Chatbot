#include "graphnode.h"
#include "graphedge.h"

GraphEdge::GraphEdge(int id)
{
    _id = id;
}

void GraphEdge::SetChildNode(std::unique_pt<GraphNode> *childNode)
{
    _childNode = childNode;
}

void GraphEdge::SetParentNode(std::unique_pt<GraphNode> *parentNode)
{
    _parentNode = parentNode;
}

void GraphEdge::AddToken(std::string token)
{
    _keywords.push_back(token);
}