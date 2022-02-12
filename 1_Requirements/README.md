# Descrition

## 1.  Introduction:
A project is composed of various different domains. Each domain has a set of functions to be carried out. In a project, all the resources available must be made available to all the domains and must be shared in a balanced way. Any imbalance in the resource distribution can cause delay in the completion of work leading to maximised cost. This problem addresses optimization of this kind of scenario.
 
 
## 2.  Problem statement:
There is a cluster of computers. Each computer is referred as a  	node. You are the maintainer of the cluster. Your job is to execute various jobs that you receive for execution. You can transfer a job from a node on the cluster to some other node. It will require some network cost.
The jobs come in the batches. Each job will have its desired initial node on which it was thought to be run by its programmer. It will also require some processing power to run in a node. You have to process the jobs of the batch, i.e., you have to decide on which node the job should be executed. You can transfer the job through various nodes before assigning the final node.
Being the cluster maintainer, your aim is to optimally use the resources of the cluster. You want the load on the nodes of the cluster to be balanced. Also, you don't want to spend a huge networking cost in transferring the jobs in between the nodes.
 


### 2.1                Problem description:
To optimally use the resources of the cluster and want the load on the nodes of the cluster to be balanced and don't want to spend a huge networking cost in transferring the jobs in between the nodes.
          2.2          Procedure:
         2.2.1 Identify the problem:
To optimally use the resources of the cluster and want the load on the nodes of the cluster to be balanced and don't want to spend a huge networking cost in transferring the jobs in between the nodes.
         2.2.2 Understand the problem:
To optimally use the resources of the cluster and want the load on the nodes of the cluster to be balanced and don't want to spend a huge networking cost in transferring the jobs in between the nodes.
 
## 3.  Requirements:
Requirements are the statements that indicate what a product/system needs to do in order to provide a capability (which may be utility or benefit.) 
 



### 3.1          High level requirements:

Read number of computers in a cluster

Read elements in the form of a matrix

Able to identify the next computer(node).

Display the minimum cost of the matrix

Display the path 
 
### 3.2          Low level requirements:

1) To identify the initial computer to start with among a cluster of computers.

2) Identify the neighbouring computer in the network.

3) Choose the next computer for load enhancement.

4) Evaluate the load from initial computer to present computer.

5) Accordingly select the next computer for load allotment.

Reading the number of clusters and reading the elements of the matrix is manual and done by the user.
 
## 4.  SWOT analysis:

●	Strengths: 

Efficient load distribution to each computer in the cluster.

Reduced response time.

Optimised usage of resources present.

Reduced networking cost.


●	Opportunities:

Displaying the cluster in matrix form.

Load analyses.

Better time management.

Best path allocation.


●	     Weaknesses:

Not suitable for a large cluster of computers.

Execution time dependency on the number of systems in a cluster.

Needs user inputs.

Involves Matrix calculations.

●	    Threat:

Manual load allocation on systems.
 
## 5.  5 W's and 1 H:

●	Where is it used?

In system work allocation systems using resources.

●	What is the main advantage?

Effective use of resources, reduced run time and ease of functionality.

● Why is is used?

To find the best way to allocate the load among computers using resources available.

● Which is the best available solution for this particular problem?

Travelling sales men approach.

●	Who is going to be benefited?

Manager tries to allocate the load.

● How does it work?

It works on the principle of finding the shortest path between initial node and final node.
