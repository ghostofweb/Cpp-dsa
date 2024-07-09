import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class SwingButtonsExample {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Swing Buttons Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);
        frame.setLayout(new FlowLayout());

        // JButton
        JButton button = new JButton("Click Me");
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("JButton clicked!");
            }
        });

        // JToggleButton
        JToggleButton toggleButton = new JToggleButton("Toggle Me");
        toggleButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (toggleButton.isSelected()) {
                    System.out.println("JToggleButton is selected!");
                } else {
                    System.out.println("JToggleButton is not selected!");
                }
            }
        });

        // JCheckBox
        JCheckBox checkBox = new JCheckBox("Check Me");
        checkBox.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (checkBox.isSelected()) {
                    System.out.println("JCheckBox is checked!");
                } else {
                    System.out.println("JCheckBox is not checked!");
                }
            }
        });

        // JRadioButton
        JRadioButton radioButton1 = new JRadioButton("Option 1");
        JRadioButton radioButton2 = new JRadioButton("Option 2");
        ButtonGroup radioGroup = new ButtonGroup();
        radioGroup.add(radioButton1);
        radioGroup.add(radioButton2);

        radioButton1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("Option 1 selected!");
            }
        });

        radioButton2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("Option 2 selected!");
            }
        });

        // Add components to the frame
        frame.add(button);
        frame.add(toggleButton);
        frame.add(checkBox);
        frame.add(radioButton1);
        frame.add(radioButton2);

        // Set the frame visibility to true
        frame.setVisible(true);
    }
}
