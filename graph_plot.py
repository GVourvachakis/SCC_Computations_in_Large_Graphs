import sys
sys.path.append('/home/georgios-vourvachakis/anaconda3/lib/python3.11/site-packages')
import networkx as nx
import matplotlib.pyplot as plt
from adj_list_rep import Graph, load_graph_from_file
import matplotlib
matplotlib.use('Agg')  # Use the 'Agg' backend which doesn't require a GUI

def plot_graph(graph: Graph) -> None:
    """
    Plots the graph using networkx and matplotlib with enhanced visual features.
    """
    # Determine the graph type based on the use of double linked list
    G = nx.DiGraph() if not graph.use_double_linked_list else nx.Graph()

    # Convert adjacency list from LinkedList/DoubleLinkedList to a normal dictionary
    adj_dict = graph.dict_rep()
    
    # Add edges to the NetworkX graph
    for u in adj_dict:
        for v in adj_dict[u]:
            G.add_edge(u, v)

    # Increase figure size for better visibility
    fig, ax = plt.subplots(figsize=(16, 12))

    # Use a spring layout for node positioning
    pos = nx.spring_layout(G, k=0.5, iterations=50)

    # Generate a color map based on node degree
    node_degrees = dict(G.degree())
    node_colors = [plt.cm.plasma(deg / max(node_degrees.values())) for node, deg in node_degrees.items()]

    # Draw nodes
    nx.draw_networkx_nodes(G, pos, node_color=node_colors, node_size=700, alpha=0.8, ax=ax)

    # Draw edges with varying thickness based on weight (if available)
    edge_weights = nx.get_edge_attributes(G, 'weight')
    if not edge_weights:
        edge_weights = {edge: 1 for edge in G.edges()}
    
    # Draw edges with more pronounced arrows for directed graphs
    nx.draw_networkx_edges(
        G, pos, 
        width=[edge_weights.get(edge, 1) for edge in G.edges()],
        alpha=0.5, 
        edge_color='black', 
        ax=ax, 
        arrows=not graph.use_double_linked_list, 
        arrowstyle='-|>', 
        arrowsize=20,  # Make the arrow size larger
        #connectionstyle="arc3,rad=0.1"  # Slightly curved edges for better visualization
    )

    # Draw labels
    nx.draw_networkx_labels(G, pos, font_size=10, font_weight='bold', ax=ax)

    # Add a color bar to show node degree
    sm = plt.cm.ScalarMappable(cmap=plt.cm.plasma, norm=plt.Normalize(vmin=0, vmax=max(node_degrees.values())))
    sm.set_array([])
    cbar = fig.colorbar(sm, ax=ax)
    cbar.set_label('Node Degree', rotation=270, labelpad=15)

    # Set title and remove axis
    ax.set_title("Graph Visualization", fontsize=16, fontweight='bold')
    ax.axis('off')

    # Add some graph information as text
    ax.text(0.05, 0.05, f"Nodes: {G.number_of_nodes()}\nEdges: {G.number_of_edges()}", 
            transform=ax.transAxes, fontsize=10, verticalalignment='bottom')

    plt.tight_layout()
    
    # Save the plot as an image file instead of showing it
    plt.savefig('graph_network.png', dpi=300, bbox_inches='tight')
    print("Graph visualization saved as 'graph_network.png'")

if __name__ == '__main__':
    filename = 'graph_test.txt'
    
    # Load the graph from the file
    # Set use_double_linked_list to True for undirected graph, False for directed graph
    graph = load_graph_from_file(filename, use_double_linked_list= False)  # Adjust the flag based on your graph type
    
    # Plot the graph

    from time import perf_counter
    
    start = perf_counter()
    try:
        plot_graph(graph)
    
    except KeyboardInterrupt:
        end = perf_counter()  # Record the end time
        interupted_time = end - start #time stamp when interrupted 
        print(f"\nInterrupted after {interupted_time:.6f} seconds.")
   
    end = perf_counter()  # Record the end time
    execution_time = end - start  # Calculate the execution time

    print(f"\nTime taken to execute:\t{execution_time:.6f} seconds.")