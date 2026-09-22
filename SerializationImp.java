import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.io.FileOutputStream;
import java.io.IOException;

class Student implements  Serializable{

    private  int id;
    private double marks;
    private String name;

    Student(int id, double marks, String name){
        this.id = id;
        this.marks = marks;
        this.name = name;
    }

    public void displayMembers(){
        System.out.println("Name: " + name);
         System.out.println("ID: " + id);
          System.out.println("Marks: " + marks);
    }

}

public class SerializationImp{

    public static void main(String[] args) throws IOException {

        Student st = new Student(1677,82.22, "Amit");
        ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("student.ser"));
        oos.writeObject(st);
        oos.close();

        System.out.println("hii");
    }
}