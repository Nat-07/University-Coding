import matplotlib.pyplot as plt
import numpy as np

# help with plotting from (https://www.kite.com/python/answers/how-to-plot-data-from-a-csv-file-in-python)
caseA = np.genfromtxt('First year/Spring 2020/ADS/Homework 3/caseA.csv', delimiter=",", names=["x", "y"])
caseB = np.genfromtxt('First year/Spring 2020/ADS/Homework 3/caseB.csv', delimiter=",", names=["x", "y"])
caseC = np.genfromtxt('First year/Spring 2020/ADS/Homework 3/caseC.csv', delimiter=",", names=["x", "y"])

# plot values from lists created from csv files
plt.plot(caseA['x'], caseA['y'], label='Case A')
plt.plot(caseB['x'], caseB['y'],label='Case B')
plt.plot(caseC['x'], caseC['y'], label='Case C')

# set labels
plt.ylabel('time (microseconds)')
plt.xlabel('n')

plt.legend()

# plot graph
plt.show()

if __name__ == "__main__":
    pass
