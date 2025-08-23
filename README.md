# C++ Experiment 11: Class and Object Implementation

## Aim
- To understand and implement the concept of **classes** and **objects** in C++.
- To learn the use of **access specifiers**, **class attributes**, and **class methods**.
- To calculate the **volume of a cuboid** using class methods and directly through object attributes.
- To compare **public** and **private** access specifiers in real-world class design.

***

## Tools Used
VS Code

---

## Objectives
- To define and create a class in C++.
- To initialize class attributes.
- To implement class methods.
- To understand access control using `public` and `private` keywords.
- To create objects and access their data members and methods.
- To calculate derived properties (like volume) using class attributes.
- To appreciate the usefulness of classes and objects in real-world applications.

---

## Theory

### Class
- A class is a blueprint or template for creating objects in C++.
- It defines attributes (data members) and methods (member functions) that operate on the data.
- Classes allow encapsulation of data and behavior in a single unit.
- Classes can have multiple access specifiers: public, private, and protected.
- They support data hiding to ensure controlled access to sensitive data.
- Classes can include constructors, destructors, static members, and friend functions.
- Syntax:
```cpp
class ClassName {
    access_specifier:
        data members;
        member functions;
};
```

---

### Class Attributes
- Attributes, also called data members, are variables defined inside a class.
- They store the state of an object.
- Public attributes can be accessed directly using the object.
- Private attributes require getter and setter methods to access or modify them.
- Attributes can be initialized directly, using a constructor, or through setter methods.
- Example:
```cpp
class Cuboid {
public:
    int length = 10;
    int width = 5;
private:
    int height = 7;
};
```

---

### Class Methods
- Methods or member functions are functions defined inside a class.
- They operate on the attributes of the class and define its behavior.
- Public methods can be called outside the class using the object.
- Private methods can only be accessed within the class.
- Methods allow encapsulation by controlling how attributes are accessed or modified.
- Special methods include constructors (initialize objects automatically) and destructors (cleanup when objects are destroyed).
- Example:
```cpp
class Cuboid {
public:
    int volume() {
        return length * width * height;
    }
};
```

---

### Object
- An object is an instance of a class.
- Objects hold actual values for the attributes defined in the class.
- Each object has its own copy of attributes.
- Methods are generally shared among all objects and stored in the code section.
- Objects enable real-world modeling, allowing representation of entities like cars, bank accounts, or students.
- Example of object creation and access:
```cpp
Cuboid c1;       // c1 is an object of class Cuboid
```

---

### Difference Between Class Attributes and Methods
| Feature    | Attribute                    | Method                |
|------------|-----------------------------|---------------------|
| Definition | Stores data                  | Performs operations |
| Access     | Via object directly (if public)| Called via object   |
| Memory     | Stored per object             | Shared among all objects |
| Example    | height, width, length         | volume(), disp()     |

--- 

### Data Encapsulation
- Encapsulation is the process of **wrapping data members (variables) and member functions (methods) together** into a single logical unit called a class.  
- It is one of the **fundamental principles of Object-Oriented Programming (OOP)**.  
- Provides **data hiding**, meaning sensitive information inside a class can only be accessed using controlled methods.  
- Achieved using **access specifiers**:  
  - `private` → data/methods accessible only within the class.  
  - `public` → data/methods accessible from outside the class.  
  - `protected` → accessible within the class and its derived classes.  
- Ensures **security** by preventing unauthorized access and accidental modification of class data.  
- Promotes **modularity** since each class acts as a self-contained unit of code.  
- Improves **code reusability** and **maintenance**, since internal details can be changed without affecting other parts of the program.  
- Example in real life:  
  - In a bank account class, balance is kept private, and only specific functions (like `deposit()` or `withdraw()`) can modify it.  
  - This ensures that the balance cannot be directly altered from outside.  

---

### Block Diagram: Private vs Public Members

                   +-----------------------------+
                   |           Class             |
                   +-----------------------------+
                   |         Private             |
                   |  - accountNumber            |
                   |  - balance                  |
                   |  (Hidden from outside)      |
                   +-----------------------------+
                   |          Public             |
                   |  + deposit()                |
                   |  + withdraw()               |
                   |  + checkBalance()           |
                   |  (Accessible from outside)  |
                   +-----------------------------+

Outside World 
   |
   +---> Can only use Public methods
   |
   +---> Cannot directly access Private data

---
### Public and Private Access Specifiers

- **Public Members**
  - Accessible from anywhere in the program using the object of the class.
  - Can be directly modified and read.
  - Example:
    - Object.attribute → allowed if attribute is public.
  - Useful for data or methods that need to be available to external code.

- **Private Members**
  - Accessible only within the class.
  - Cannot be accessed directly from outside the class.
  - Must use **public methods** (getters/setters) to modify or read private data.
  - Example:
    - Object.attribute → not allowed if attribute is private; use methods like setAttribute() or getAttribute() instead.
  - Useful for protecting sensitive data and enforcing encapsulation.

| Feature             | Public                      | Private                     |
|--------------------|----------------------------|----------------------------|
| Access              | Anywhere in program        | Only inside the class       |
| Modification        | Directly via object        | Only via class methods      |
| Encapsulation       | Low                        | High                        |
| Use Case            | Attributes/methods that should be globally accessible | Attributes that need protection or controlled access |

---

### Industrial Applications of Classes and Objects

- **Manufacturing Automation**
  - Class: `Machine`  
  - Attributes: `machineID`, `status`, `productionRate`  
  - Methods: `start()`, `stop()`, `maintain()`  
  - Objects: Individual machines on a production line  
  - Application: Industrial automation, controlling and monitoring machines in factories.

- **Inventory Management**
  - Class: `Product`  
  - Attributes: `productID`, `stockLevel`, `location`  
  - Methods: `addStock()`, `removeStock()`, `trackLocation()`  
  - Objects: Each product in warehouse  
  - Application: Warehouse automation, supply chain management.

- **Robotics**
  - Class: `Robot`  
  - Attributes: `robotID`, `position`, `taskStatus`  
  - Methods: `move()`, `performTask()`, `chargeBattery()`  
  - Objects: Individual robots on the assembly line or in logistics  
  - Application: Industrial robotics, pick-and-place operations, automated assembly.

- **Quality Control Systems**
  - Class: `Sensor`  
  - Attributes: `sensorID`, `value`, `status`  
  - Methods: `readValue()`, `calibrate()`, `alert()`  
  - Objects: Individual sensors in production equipment  
  - Application: Monitoring and ensuring product quality in real-time.

- **Energy Management**
  - Class: `PowerUnit`  
  - Attributes: `unitID`, `outputLevel`, `efficiency`  
  - Methods: `activate()`, `deactivate()`, `monitorOutput()`  
  - Objects: Generators, turbines, or solar panels  
  - Application: Monitoring and controlling energy distribution in industrial plants.

- **Industrial Vehicle Fleet Management**
  - Class: `Vehicle`  
  - Attributes: `vehicleID`, `fuelLevel`, `loadCapacity`  
  - Methods: `dispatch()`, `refuel()`, `trackLocation()`  
  - Objects: Forklifts, trucks, or AGVs (Automated Guided Vehicles)  
  - Application: Logistics and transport optimization in factories and warehouses.

---


### Memory Representation
 ```
+------------------------+
|      Attributes        |
+------------------------+
| height | width | length|
+------------------------+

+------------------------+
|    Methods (shared)    |
+------------------------+
|       volume()         |
+------------------------+

```
- **Attributes** are stored per object, meaning each object has its own copy.
- **Methods** are shared among all objects, stored only once in memory.
- Private attributes (if any) are only accessible via public methods.


---

## Algorithms

**Program 1: Cuboid Volume Using Input Method**
- Start
- Define class cuboid with attributes: height, width, length.
- Implement `Input()` to take values from user.
- Implement `volume()` to calculate volume.
- Implement `disp()` to display volume.
- Create object `c1` and call `Input()` and `disp()`.
- Stop

**Program 2: Cuboid Volume Using Default Attributes**
- Start
- Define class cuboid with default attribute values.
- Create object `c1`.
- Calculate volume directly using `c1.height * c1.width * c1.length`.
- Display attributes and volume.
- Stop

**Program 3: Cuboid Volume Using Class Method**
- Start
- Define class cuboid with attributes and `volume()` method.
- Create object `c1`.
- Calculate volume both using direct attribute multiplication and `volume()` method.
- Display results.
- Stop

**Program 4: Cuboid Class with Private Attributes**
- Start
- Define class cuboid with private attributes: height, width, length.
- Implement public `volume()` method to access private data.
- Create object `c1`.
- Call `volume()` to get and display cuboid volume.
- Stop

---

## Concepts Used
- Class definition and object instantiation
- Access specifiers: public vs private
- Member functions (class methods)
- Object attributes (class properties)
- Input/Output operations for class attributes
- Data encapsulation and abstraction
- Calculation of derived properties from object attributes

