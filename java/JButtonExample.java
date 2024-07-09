import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class JButtonExample {
    public static void main(String[] args) {
        // Create a new JFrame
        JFrame frame = new JFrame("JButton Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLayout(null); // Use null layout to place components manually

        // Create a JButton
        JButton button = new JButton("Click Me!");
        button.setBounds(100, 50, 100, 50); // Set the position and size of the button

        // Add an ActionListener to the button
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Change the text of the button when clicked
                button.setText("Clicked!");
            }
        });

        // Add the button to the frame
        frame.add(button);

        // Set the frame visibility to true
        frame.setVisible(true);
    }
}
