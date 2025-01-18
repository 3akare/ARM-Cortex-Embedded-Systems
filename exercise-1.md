## Exercise 1.10

### 1.1
- **Voltage**: Potential difference between 2 points in a circuit.  
- **Current**: Rate of flow of electric charge per unit time.  
- **Energy**: The ability to do work.  
- **Power**: Voltage × Current.  
- **KCL**: The sum of current entering a node equals the current leaving the node.  
- **KVL**: The sum of voltage in a closed loop is 0.

### 1.2
- **CMOS**: Complementary Metal Oxide Semiconductor – semiconductor used to build ICs.  
- **Byte**: Collection of 8 bits. Another name is Octet.  
- **Exclusive OR**: Outputs true if and only if both inputs are opposite.  
- **P-type transistor**: Conducts when the gate is at low voltage (relative to the source).  
- **N-type transistor**: Conducts when the gate is at high voltage (relative to the source).  
- **Positive logic**: A convention in digital electronics where high voltage equals 1 or true, while low voltage equals 0 or false.

### 1.3
- **Commutative law**: a * b == b * a  
- **Associative law**: a * b * c == a * (b * c) == (a * b) * c  
- **Distributive law**: (a + b) * c == (a * c + b * c)  
- **Identity of 1**: a * 1 = a  
- **Identity of 0**: a * 0 = 0  
- **De Morgan’s theorem**: ~(a | b) == ~a * ~b (where * = AND, | = OR)

### 1.4
- **Flip-flop**: A circuit that has 2 stable states and can flip between them. It's used for storing a single bit of data.  
- **Tristate**: Can appear in 3 states.  
- **Register**: Stores data temporarily while it is being processed.  
- **HIZ (High Impedance)**: A point of disconnect from a device in a circuit.  
- **Bus**: A pathway that carries data across different components.  
- **Open collector**: Pulls a signal to a low state.

### 1.5
- **Memory read**: Reading from the computer’s memory.  
- **Memory write**: Writing to the computer’s memory.  
- **ROM**: Read Only Memory, a non-volatile primary storage in the computer that can only be read by the computer. It contains firmware that the computer needs to start.  
- **RAM**: Random Access Memory, a volatile primary memory storage. It temporarily stores data that the CPU is actively using.  
- **Port**: Connection interface for I/O devices.  
- **Volatile**: Loses its state when it loses electricity.

### 1.6
- **Interrupt**: A temporary halt in the current process to address a certain event.  
- **Function**: A block of code that carries out a predetermined action.  
- **Structured**: Dividing the code into small, manageable sections to improve readability and reduce complexity.  
- **Join programming**: Pausing the execution of the main thread while waiting for other threads to complete their tasks.  
- **Parallel programming**: Multiple instances running simultaneously.  
- **Fork**: Starts a parallel process (a child process).

### 1.7
| R1   | R2   | R1 in series with R2 | R1 in parallel with R2 |  
|------|------|----------------------|------------------------|  
| 1000 | 1000 | 2000                 | 500                    |  
| 1000 | 10000| 11000                | 909.1                  |  
| 1000 | 3000 | 4000                 | 750                    |  
| 1000 | 4000 | 5000                 | 800                    |  
| 2000 | 3000 | 5000                 | 1200                   |

### 1.8
| R1   | R2   | R1 in series with R2 | R1 in parallel with R2 |  
|------|------|----------------------|------------------------|  
| 100  | 200  | 300                  | 66.7                   |  
| 100  | 0    | 100                  | 0                      |  
| 100  | 600  | 700                  | 85.7                   |  
| 100  | 300  | 400                  | 75                     |  
| 100  | 100  | 200                  | 50                     |

### 1.9
- 6V, 3mA (in series, the current is the same across).

### 1.10
- 10V, 5mA (in parallel, the voltage is the same across).

### 1.11
- 7 bits (2^n > 100, where n = 7).

### 1.12
- 0, 1, 2, ..15.

### 1.13
- 23 bits and 3 bytes.

### 1.14
- 37 bits and 5 bytes.

### 1.15
- **int8_t** = -128 to 127  
- **int16_t** = -32,768 to 32,767  
- **int32_t** = -2,147,483,648 to 2,147,483,647

