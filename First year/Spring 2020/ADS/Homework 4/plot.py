import matplotlib.pyplot as plt
import numpy as np

# help with plotting from (https://www.kite.com/python/answers/how-to-plot-data-from-a-csv-file-in-python)
bestCase = np.genfromtxt('First year/Spring 2020/ADS/Homework 4/bestCase.csv', delimiter=",", names=["x", "y"])
avgCase = np.genfromtxt('First year/Spring 2020/ADS/Homework 4/avgCase.csv', delimiter=",", names=["x", "y"])
worstCase = np.genfromtxt('First year/Spring 2020/ADS/Homework 4/worstCase.csv', delimiter=",", names=["x", "y"])

# plot values from lists created from csv files
#plt.plot(bestCase['x'], bestCase['y'], label='Best case')
#plt.plot(avgCase['x'], avgCase['y'],label='Average Case')
plt.plot(worstCase['x'], worstCase['y'], label='Worst Case')

# set labels
plt.ylabel('Time (microseconds)')
plt.xlabel('k value')

plt.legend()

# plot graph
plt.show()

if __name__ == "__main__":
    pass
