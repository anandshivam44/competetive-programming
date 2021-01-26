Rick, the mad scientist, took Chef in a parallel universe where a cube is a more stable shape than a Sphere. Even the Planets are cuboidal in shape. Every planet is made up of layers of rocks. Now, It is time to label the layers and print them. The outermost layer is marked as N and every consecutive layer is marked one less than the previous layer until it finally reaches the core of the planet which is marked as 1. 

### Input
A single integer N containing the number of layers of rock on the planet.

### Output <br />
Print a 2D square matrix with the outermost rectangle as N and the next outermost rectangle as N-1 and so on.  <br />

### Constraints <br />
1<=N<=10^3 <br />

### Example Input 1 <br />
4 <br />
### Example Output 1 <br />
4 4 4 4 4 4 4 <br />
4 3 3 3 3 3 4 <br />
4 3 2 2 2 3 4 <br />
4 3 2 1 2 3 4 <br />
4 3 2 2 2 3 4 <br />
4 3 3 3 3 3 4 <br />
4 4 4 4 4 4 4 <br />



### Example Input 2
10
### Wrong Output <br />
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 <br />
10 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 10 <br />
10 9 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 9 10 <br />
10 9 8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 9 10 <br />
10 9 8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 9 10 <br />
10 9 8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 9 10 <br />
10 9 8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 9 10 <br />
10 9 8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 9 10 <br />
10 9 8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 9 10 <br />
10 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 10 <br />
10 9 8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 9 10 <br />
10 9 8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 9 10 <br />
10 9 8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 9 10 <br />
10 9 8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 9 10 <br />
10 9 8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 9 10 <br />
10 9 8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 9 10 <br />
10 9 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 9 10 <br />
10 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 10 <br />
10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 <br />

### Correct Output 2 <br />

10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 5&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 5&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 5&emsp; &emsp; 4&emsp; &emsp; 3&emsp; &emsp; 3&emsp; &emsp; 3&emsp; &emsp; 3&emsp; &emsp; 3&emsp; &emsp; 4&emsp; &emsp; 5&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 5&emsp; &emsp; 4&emsp; &emsp; 3&emsp; &emsp; 2&emsp; &emsp; 2&emsp; &emsp; 2&emsp; &emsp; 3&emsp; &emsp; 4&emsp; &emsp; 5&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 5&emsp; &emsp; 4&emsp; &emsp; 3&emsp; &emsp; 2&emsp; &emsp; 1&emsp; &emsp; 2&emsp; &emsp; 3&emsp; &emsp; 4&emsp; &emsp; 5&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 5&emsp; &emsp; 4&emsp; &emsp; 3&emsp; &emsp; 2&emsp; &emsp; 2&emsp; &emsp; 2&emsp; &emsp; 3&emsp; &emsp; 4&emsp; &emsp; 5&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 5&emsp; &emsp; 4&emsp; &emsp; 3&emsp; &emsp; 3&emsp; &emsp; 3&emsp; &emsp; 3&emsp; &emsp; 3&emsp; &emsp; 4&emsp; &emsp; 5&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 5&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 4&emsp; &emsp; 5&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 5&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 6&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 7&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 8&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; &emsp; 9&emsp; 10&emsp; <br />
10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; 10&emsp; <br />


