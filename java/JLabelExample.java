import javax.swing.*;
import java.awt.*;

public class JLabelExample {
    public static void main(String[] args) {
        // Create a new JFrame
        JFrame frame = new JFrame("JLabel and ImageIcon Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);
        frame.setLayout(new FlowLayout());

        // Create an ImageIcon
        ImageIcon icon = new ImageIcon("/C:/Users/Sahil/OneDrive/Desktop/result.png/"); // Use a valid path to your image

        // Create a JLabel with text
        JLabel textLabel = new JLabel("Hello, Swing!");

        // Create a JLabel with an image
        JLabel imageLabel = new JLabel(icon);



        // Add the labels to the frame
        frame.add(textLabel);
        frame.add(imageLabel);

        // Set the frame visibility to true
        frame.setVisible(true);
    }
}
