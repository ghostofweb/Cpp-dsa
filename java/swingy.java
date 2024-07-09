import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;;
public class swingy {
    public static void main(String[] args) {
        JFrame frame = new JFrame("yo");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400,400);
        frame.setLayout(new FlowLayout());

        JButton button = new JButton("ahsdoih");
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e){
                System.out.println("sdjfoiasjh");
            }
        });

        JToggleButton toggleButton = new JToggleButton("togglee");
        toggleButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e){
                if(toggleButton.isSelected()){
                    System.out.println("button selected");
                }else{
                    System.out.println("unselected");
                }
            }
        });

        JRadioButton r1 = new JRadioButton();
        JRadioButton r2 = new JRadioButton();
        ButtonGroup radiobutton = new ButtonGroup();

        radiobutton.add(r1);
        radiobutton.add(r2);
            
        frame.add(button);
        frame.add(toggleButton);
        frame.setVisible(true);
    }
}
