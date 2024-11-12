#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>

using namespace std;  // Use standard namespace

const int width = 80;   
const int height = 20;  
const char ballChar = 'O'; 
const int lineRow = 10; 

int main() {
    float x = 0; 
    float amplitude = height / 2 - 1; 
    float frequency = 0.2f; 
    float speed = 2.0f; 

    while (true) {
        // Clear the console
        system("clear");  

        // Calculate the vertical position of the ball
        int y = static_cast<int>(amplitude * sin(frequency * x) + height / 2);

        // Draw the frame
        for (int row = 0; row < height; ++row) {
            for (int col = 0; col < width; ++col) {
                // Check if this is where the ball should be
                if (col == static_cast<int>(x) && row == y) {
                    cout << ballChar;  // Draw the ball
                } 
                // Draw a horizontal line at a specific row
                else if (row == lineRow) {
                    cout << '-'; 
                } 
                // Empty space
                else {
                    cout << ' '; 
                }
            }
            cout << endl;  // Move to the next line
        }

        // Update the horizontal position of the ball
        x += speed;

        // Reset position if it goes off screen
        if (x >= width) {
            x = 0;  // Reset x to start again
        }

        // Control the speed of the animation
        this_thread::sleep_for(chrono::milliseconds(100));  
    }

    return 0;
}