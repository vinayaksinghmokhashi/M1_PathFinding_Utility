# M1_PathFinding_Utility
## Problem description:
To optimally use the resources of the cluster and want the load on the nodes of the cluster to be balanced and don't want to spend a huge networking cost in transferring the jobs in between the nodes.
## High level requirements:
###	Read number of computers in a cluster.
###	Read elements in the form of a matrix.
###	Able to identify the next computer(node).
###	Display the minimum cost of the matrix.
###	Display the path .
## Low level requirements:
###	To identify the initial computer to start with among a cluster of computers.
###	Identify the neighbouring computer in the network.
###	Choose the next computer for load enhancement.
###	Evaluate the load from initial computer to present computer.
###	Accordingly select the next computer for load allotment.
###	Reading the number of clusters and reading the elements of the matrix is manual and done by the user.

## 4.  SWOT analysis:
### ●	Strengths:
#### ●	Efficient load distribution to each computer in the cluster.
#### ●	Reduced response time.
#### ●	Optimised usage of resources present.
#### ●	Reduced networking cost.

### ●	Opportunities:
#### ●	 Displaying the cluster in matrix form.
#### ●	    Load analyses.
#### ●	Better time management.
#### ●	Best path allocation.

### ●	     Weaknesses:
#### ●	 Not suitable for a large cluster of computers.
#### ●	 Execution time dependency on the number of systems in a cluster.
#### ●	Needs user inputs.
#### ●	Involves Matrix calculations.

### ●	    Threat:
#### ●	Manual load allocation on systems.

## 5.  5 W's and 1 H:
### ●	Where is it used?
### In system work allocation systems using resources.
### ● Why is is used?
### To find the best way to allocate the load among computers using resources available.
### ● Which is the best available solution for this particular problem?
### Travelling sales men approach.
### ●	Who is going to be benefited?
### Manager tries to allocate the load.
### ● How does it work?
### It works on the principle of finding the shortest path between initial node and final node.
  
## Code quality
https://api.codiga.io/project/31226/score/svg

##  Code grade
https://api.codiga.io/project/31226/status/svg
