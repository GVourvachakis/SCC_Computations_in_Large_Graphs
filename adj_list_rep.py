from typing import Dict, List
from Linked_List import LinkedList, DoubleLinkedList
from collections import defaultdict
import os

class Graph:
    """
    A class to represent a graph using an adjacency list.
    The graph can use either single or double linked lists to store adjacency information.

    Attributes:
    ----------
    adj_list : dict
        A dictionary where the key is a vertex, and the value is a linked list of adjacent vertices.
    use_double_linked_list : bool
        A flag to determine whether to use a double linked list (for undirected graphs) or a single linked list (for directed graphs).
    """

    def __init__(self, vertices, edges, use_double_linked_list=False):
        """
        Initializes the graph with a set of vertices and edges.
        
        Parameters:
        ----------
        vertices : list
            A list of vertices in the graph.
        edges : list
            A list of edges where each edge is represented as a tuple (start_vertex, end_vertex).
        use_double_linked_list : bool, optional
            If True, use DoubleLinkedList for an undirected graph. Otherwise, use LinkedList for a directed graph.
        """
        self.adj_list = defaultdict(list)
        self.use_double_linked_list = use_double_linked_list

        # Sort vertices once and store them
        self.vertices = vertices

        # Initialize adjacency list for each vertex
        for vertex in vertices:
            if use_double_linked_list:
                self.adj_list[vertex] = DoubleLinkedList()
            else:
                self.adj_list[vertex] = LinkedList()

        # Add edges to the adjacency list
        for edge in edges:
            self.add_edge(edge[0], edge[1])

    def add_edge(self, start_vertex, end_vertex):
        """
        Adds an edge to the graph.

        Parameters:
        ----------
        start_vertex : any
            The starting vertex of the edge.
        end_vertex : any
            The ending vertex of the edge.
        """
        # Add the end vertex to the start vertex's adjacency list
        self.adj_list[start_vertex].insert_at_end(end_vertex)
        
        if self.use_double_linked_list:
            # For an undirected graph, add the reverse edge as well
            self.adj_list[end_vertex].insert_at_end(start_vertex)

    def print_graph(self):
        """
        Prints the adjacency list of the graph.
        """
        for vertex in self.adj_list:
            print(f"{vertex}: ", end="")
            if self.use_double_linked_list:
                self.adj_list[vertex].print_forward()
            else:
                self.adj_list[vertex].print()
        
    
    def dict_rep(self) -> Dict[str, List[str]]:
        """
        Returns the adjacency list in a dictionary format (optional addition)
        """
        adj_dict = {}
        for vertex, linked_list in self.adj_list.items():
            adj_dict[vertex] = list(linked_list)
        return adj_dict
    

def load_graph_from_file(filename: str, use_double_linked_list: bool = False) -> Graph:
    """
    Reads the adjacency list from a file and constructs a graph.
    
    Args:
    filename (str): The name of the file containing the adjacency list.
    use_double_linked_list (bool): If True, use DoubleLinkedList for an undirected graph. 
                                   Otherwise, use LinkedList for a directed graph.
    
    Returns:
    Graph: The constructed graph object.
    """

     # Get the directory of the current script (adj_list_rep.py)
    base_dir = os.path.dirname(__file__)
    full_path = os.path.join(base_dir, filename)

    vertices = set()
    edges = []

    # First pass to collect all unique vertices and edges
    with open(full_path, 'r') as file:
        for line in file:
            parts = list(map(int, line.split()))
            vertices.add(parts[0])
            vertices.add(parts[1])
            edges.append((parts[0], parts[1]))

    # Create a Graph object with all vertices and edges
    graph = Graph(list(vertices), edges, use_double_linked_list)

    return graph
                
if __name__ == "__main__":

    def example(vertices: List[str], edges: List[tuple[str]]) -> None:

        # Create and print graph using single linked list (directed graph)
        print("Graph using Single Linked List (Directed Graph):")
        graph = Graph(vertices, edges)
        graph.print_graph()

        # Create and print graph using double linked list (undirected graph)
        print("\nGraph using Double Linked List (Undirected Graph):")
        graph_double = Graph(vertices, edges, use_double_linked_list=True)
        graph_double.print_graph()


    #Example of vertices and edges in the graph
    node_list = ['A', 'B', 'C', 'D', 'E']
    edge_list = [('A', 'B'), ('A', 'C'), ('B', 'D'), ('C', 'D'), ('D', 'E')]

    #example(node_list,edge_list)

    filename = 'graph_test.txt'  # Replace with the actual file name
    
    #Set use_double_linked_list to True for undirected graph, False for directed graph
    graph = load_graph_from_file(filename, use_double_linked_list=False) 
    
    #Print the adjacency list of the graph
    graph.print_graph()
    print(graph.dict_rep())
