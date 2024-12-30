# Philosophers

![42 Badge](https://img.shields.io/badge/42-Project-blue)
![C Badge](https://img.shields.io/badge/Language-C-lightgrey)


This project is part of the 42 school curriculum and focuses on the classic "Dining Philosophers" problem, teaching the fundamentals of threading and process synchronization. The challenge involves implementing a solution where philosophers must eat, think, and sleep without starving, using threads and mutexes.

## 🎯 Objectives
- Learn about threads and processes
- Understand mutex locks and their importance in preventing race conditions
- Implement a solution to the dining philosophers problem
- Handle resource sharing and deadlock prevention

## 🛠️ Requirements
- GCC compiler
- Make
- UNIX based operating system (Linux/Mac)

## 🚀 Installation
```bash
git clone <repository-url>
cd Philosophers
make
```

## 💻 Usage
```bash
./philo [number_of_philosophers] [time_to_die] [time_to_eat] [time_to_sleep] [number_of_times_each_philosopher_must_eat]
```

### Arguments
- `number_of_philosophers`: The number of philosophers and forks
- `time_to_die`: Time in milliseconds until a philosopher dies from starvation
- `time_to_eat`: Time in milliseconds it takes for a philosopher to eat
- `time_to_sleep`: Time in milliseconds that a philosopher spends sleeping
- `number_of_times_each_philosopher_must_eat`: (Optional) Program stops when all philosophers eat this many times

### Example
```bash
./philo 5 800 200 200 5
```

This will start a simulation with 5 philosophers, where each philosopher will die after 800 milliseconds, eat for 200 milliseconds, sleep for 200 milliseconds, and each philosopher must eat 5 times.

Basic test with 4 philosophers
```bash
./philo 4 410 200 200
```

Test with mandatory meals
```bash
./philo 5 800 200 200 7
```

Edge case with 1 philosopher
```bash
./philo 1 800 200 200
```