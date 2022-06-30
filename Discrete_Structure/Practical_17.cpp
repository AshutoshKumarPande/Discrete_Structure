// Include header file
#include <iostream>
using namespace std;
/*
    C++ Program for
    Show degree of vertex in directed graph
*/
class AjlistNode
{
	public:
	// Vertices node key
	int id;
	AjlistNode *next;
	AjlistNode(int id)
	{
		// Set value of node key
		this->id = id;
		this->next = nullptr;
	}
};
class Vertices
{
	public:
    int data;
	AjlistNode *next;
	AjlistNode *last;
	Vertices(int data)
	{
		this->data = data;
		this->next = nullptr;
		this->last = nullptr;
	}
	Vertices()
	{
		this->data = 0;
		this->next = nullptr;
		this->last = nullptr;
	}
};
class Graph
{
	public:
	// Number of Vertices
	int size;
	Vertices *node;
	Graph(int size)
	{
		// Set value
		this->size = size;
		this->node = new Vertices[size];
		this->setData();
	}
	// Set initial node value
	void setData()
	{
		if (this->size <= 0)
		{
			cout << "\nEmpty Graph" << endl;
		}
		else
		{
			for (int index = 0; index < this->size; index++)
			{
				// Set initial node value
				this->node[index].data = index;
			}
		}
	}
	//  Handling the request of adding new edge
	void addEdge(int start, int last)
	{
		if (start >= 0 && start < this->size &&
            last >= 0 && last < this->size)
		{
			// Safe connection
			AjlistNode *edge = new AjlistNode(last);
			if (this->node[start].next == nullptr)
			{
				this->node[start].next = edge;
			}
			else
			{
				// Add edge at the end
				this->node[start].last->next = edge;
			}
			// Get last edge
			this->node[start].last = edge;
		}
		else
		{
			// When invalid nodes
			cout << "\nHere Something Wrong" << endl;
		}
	}
	void printGraph()
	{
		if (this->size > 0)
		{
			// Print graph ajlist Node value
			for (int index = 0; index < this->size; ++index)
			{
				cout << "\nAdjacency list of vertex "
              		 << index << " : ";
				AjlistNode *temp = this->node[index].next;
				while (temp != nullptr)
				{
					// Display graph node
					cout << " " << this->node[temp->id].data;
					// Visit to next edge
					temp = temp->next;
				}
			}
		}
	}
	// Find indegree and outdegree of
	// each nodes of a given graph
	void findDegree(int indegree[], int outdegree[])
	{
		AjlistNode *temp = nullptr;
		int length = 0;
		for (int i = 0; i < this->size; ++i)
		{
			temp = this->node[i].next;
			length = 0;
			while (temp != nullptr)
			{
				// Update indegree
				indegree[temp->id]++;
				temp = temp->next;
				length++;
			}
			// Set outdegree value
			outdegree[i] = length;
		}
	}
	void showDegree()
	{
		if (this->node != nullptr)
		{
			int *indegree = new int[this->size];
			int *outdegree = new int[this->size];
			// Set zero degree
			for (int i = 0; i < this->size; i++)
			{
				indegree[i] = 0;
				outdegree[i] = 0;
			}
			// Find degree
			this->findDegree(indegree, outdegree);
			cout << "\n" << endl;
			// Display result
			for (int i = 0; i < this->size; ++i)
			{
				cout << "Node [" << i << "] indegree ["
              		 << indegree[i] << "] outdegree ["
              		 << outdegree[i] << "]" << endl;
			}
		}
		else
		{
			cout << "Empty Graph";
		}
	}
};
int main()
{
	// 6 implies the number of nodes in graph
	Graph *g = new Graph(6);
	// Connected two node with Edges
	g->addEdge(0, 1);
	g->addEdge(0, 2);
	g->addEdge(0, 5);
	g->addEdge(2, 3);
	g->addEdge(3, 1);
	g->addEdge(4, 0);
	g->addEdge(4, 1);
	g->addEdge(5, 0);
	g->addEdge(5, 2);
	g->printGraph();
	// Test
	g->showDegree();
	return 0;
}
