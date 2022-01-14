#On the formation of thrust-faults related landforms under low strain rate in Mercury’s Northern Smooth Plains: A two-dimensional numerical simulation
* Supplements to the paper *A thermo-dynamic model of thrust-faults related landforms under low strain rate: Application to Mercury's Northern Smooth Plains*.  
  
* This repository only contains the necessary codes for our 2-D convectional simulation. 

* There are three folders, the folder named Plugin contains the source code of multi-compositional radioactive heating, the folder named Data contains the initial temperature profile used to define the initial temperature condition, and the folder named Prm contains the parameter file for configuring the model.

* The source codes of the plugins are written on the basis of the codes provided by the fully-open finite element code: Advanced Solver for Problems in Earth's ConvecTion, ASPECT. And tested with the ASPECT-2.3.0.

* As for the rest of source codes running the simulation, they can be accessed through: https://github.com/geodynamics/aspect
  
* This simulation runs on Linux platforms, for example, CentOS/Ubuntu LTS. Before running, refer to the relevant manual (https://www.math.clemson.edu/~heister/manual.pdf) to download, install and configure the necessary running environments.
