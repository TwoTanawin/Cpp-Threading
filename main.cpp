#include <iostream>
#include <thread>

// Function to be executed by thread 1
void thread1Func() {
    while (true){
        std::cout << "Hello World" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(10)); // sleep for 10 ms
    }
}

// Function to be executed by thread 2
void thread2Func() {
    while (true){
        std::cout << "AI-Center" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(10)); // sleep for 10 ms
    }
}

int main(int, char**) {
    // std::cout << "Hello, world!\n";

        // Create thread 1
    std::thread thread1(thread1Func);

    // Create thread 2
    std::thread thread2(thread2Func);

    // Wait for both threads to finish
    thread1.join();
    thread2.join();

    return 0;
}
