import javax.swing.*;
import java.awt.*;

public class text {
    public static void main(String[] args) {
        // Create a new JFrame
        JFrame frame = new JFrame("JLabel and ImageIcon Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);
        frame.setLayout(new FlowLayout());

        // Create an ImageIcon
        ImageIcon icon = new ImageIcon("path/to/image.png"); // Use a valid path to your image

        // Create a JLabel with text
        JLabel textLabel = new JLabel("Hello, Swing!");

        // Create a JLabel with an image
        JLabel imageLabel = new JLabel(icon);

        // Create a JLabel with both text and an image
        JLabel bothLabel = new JLabel("Swing with Image", icon, JLabel.CENTER);

        // Add the labels to the frame
        frame.add(textLabel);
        frame.add(imageLabel);
        frame.add(bothLabel);

        // Set the frame visibility to true
        frame.setVisible(true);
    }
}
