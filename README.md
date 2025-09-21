# 🗂️ Task Manager (Queue DSA Project – No GUI)

## 📛 Badges
![C++](https://img.shields.io/badge/language-C++-blue.svg)  
![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)  
![Status](https://img.shields.io/badge/status-active-success.svg)  
![License](https://img.shields.io/badge/license-MIT-lightgrey.svg)  

---

## 📖 Overview
A simple **Task Manager** built in **C++** as part of my **DSA Lab Project**.  
This project demonstrates the use of **Queue (FIFO)** and **Linked List** concepts to manage tasks dynamically.  

---

## 🚀 Features
- ➕ **Add a new task** (added at the end of the queue)  
- ❌ **Delete the first task** (FIFO removal)  
- 📌 **Insert a task at a specific position**  
- 📋 **Display all tasks** in order  
- 🧾 **Menu-driven interface** for easy interaction  

---

## 🛠️ Technologies Used
- **Language**: C++  
- **Concepts**: Queue (FIFO), Linked List, Pointers, Dynamic Memory Allocation  

---

## 📂 Project Structure
```
Task_Manager_Queue_DSA_Project/
│── main.cpp        # Source code
│── README.md       # Project documentation
```

---

## 📖 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/Task_Manager_Queue_DSA_Project.git
   ```
2. Navigate to the project folder:
   ```bash
   cd Task_Manager_Queue_DSA_Project
   ```
3. Compile the program:
   ```bash
   g++ main.cpp -o task_manager
   ```
4. Run the executable:
   ```bash
   ./task_manager
   ```

---

## 📸 Sample Menu
```
Task Manager
1. Add a new task
2. Delete First task
3. Add task at specific position
4. Display
5. Exit
Enter Choice:
```

---

## 🔄 Flow of Operations (Queue Concept)

```
[ Add Task ]  →  [ Task1 ] → [ Task2 ] → [ Task3 ] → ...
                   ↑
                   |
             [ Delete Task ]
```

- **Enqueue (Add)**: New tasks are added at the **end** of the queue.  
- **Dequeue (Delete)**: Tasks are removed from the **front** of the queue.  
- **Insert at Position**: Allows flexibility to add tasks at a specific index.  

---

## 🔮 Future Improvements
- Add **priority-based task management**  
- Implement **file storage** for saving tasks permanently  
- Add **task completion status** (done/pending)  
- Improve **error handling** and input validation  

---

## 📝 Previous README
> Task_Manager_Queue_DSA_Project  
> Simple Task Manager using QUEUE DSA (NO GUI)  
> This was one of my DSA LAB project.  
> I used Queue (FIFO) algorithm for this.  
> Thank You.  

---

## 🙌 Acknowledgements
This project was created as part of my **Data Structures & Algorithms Lab** coursework.  

