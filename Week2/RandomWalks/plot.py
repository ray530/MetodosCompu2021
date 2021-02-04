import matplotlib.pyplot as plt
import numpy as np
import glob
from tqdm import tqdm 


def LoadFiles():

    Files = []

    for f in tqdm(glob.glob('Data/*.dat')):
        data = np.loadtxt(f)
        Files.append(data)

    return Files

Files = LoadFiles()

fig = plt.figure()

for i in range(len(Files)):
    plt.plot(Files[i][:,0],Files[i][:,1])
plt.savefig('EnsembleRandomWalks.png')
