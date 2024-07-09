import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class FormExample {
    public static void main(String[] args) {
        // Create a new JFrame
        JFrame frame = new JFrame("Form Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLayout(null); // Use null layout to place components manually

        // Create a JTextField
        JTextField textField = new JTextField();
        textField.setBounds(50, 20, 200, 30); // Set the position and size of the text field

        // Create a JButton
        JButton submitButton = new JButton("Submit");
        submitButton.setBounds(100, 60, 100, 30); // Set the position and size of the button

        // Create a JLabel to display the text
        JLabel displayLabel = new JLabel("");
        displayLabel.setBounds(50, 100, 200, 30); // Set the position and size of the label

        // Add an ActionListener to the button
        submitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Get the text from the text field and set it to the label
                String inputText = textField.getText();
                displayLabel.setText(inputText);
            }
        });

        // Add the components to the frame
        frame.add(textField);
        frame.add(submitButton);
        frame.add(displayLabel);

        // Set the frame visibility to true
        frame.setVisible(true);
    }
}
